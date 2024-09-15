// https://leetcode.com/problems/dota2-senate/description/

struct queue {
    struct node *head;
    struct node *tail;
    int size;
};

struct node {
    int val;
    struct node *next;
};

typedef struct queue * Queue;

Queue QueueNew(void){
    Queue q = malloc(sizeof(struct queue));

    q->head = NULL;
    q->tail = NULL;
    q->size = 0;

    return q;
}

void QueueFree(Queue q){
    struct node * cur = q->head;
    while(cur != NULL){
        struct node *tmp = cur;
        cur = cur->next;
        free(tmp);
    }
    free(q);
}

struct node *newNode(int val){
    struct node *n = malloc(sizeof(*n));
    n->val = val;
    n->next = NULL;
    return n;
}

void QueueEnqueue (Queue q, int val){

    struct node *n = newNode(val);
    if(q->size == 0){
        q->head = n;
    } else {
        q->tail->next = n;
    }

    q->tail = n;
    q->size++;

}

int QueueDequeue(Queue q){

    if(q->size == 0){
        fprintf(stderr, "error: queue is empty\n");
        return 0;
    }

    struct node *cur = q->head->next;
    int val = q->head->val;

    free(q->head);
    q->head = cur;
    if(cur == NULL){
        q->tail = NULL;
    }
    q->size--;
    
    return val;
}

int QueueSize(Queue q){
    return q->size;
}

int QueuePeek(Queue q){
    if(q->size == 0){
        fprintf(stderr, "error: queue is empty\n");
        return 0;
    }

    return q->head->val;
}

char* predictPartyVictory(char* senate) {

    int idx = 0;

    Queue r = QueueNew();
    Queue d = QueueNew();

    for(int i = 0; i < strlen(senate); i++){
        if(senate[i] == 'R') QueueEnqueue(r, idx);
        else QueueEnqueue(d, idx);
        idx++;
    }

    while(QueueSize(d) != 0 && QueueSize(r) != 0){

        if(QueuePeek(d) > QueuePeek(r)){
            QueueDequeue(d);
            QueueDequeue(r);
            QueueEnqueue(r, idx++);
        } else {
            QueueDequeue(d);
            QueueDequeue(r);
            QueueEnqueue(d, idx++);
        }
    }

    if(QueueSize(r) == 0){
        return "Dire";
    } else {
        return "Radiant";
    }
}
