struct queue {
    void *head;
    void *tail;
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
