// https://leetcode.com/problems/design-circular-queue/description/
struct Node {

    int val;
    struct Node *next;

};

typedef struct {

    struct Node *head;
    struct Node *tail;
    int max_size;
    int cur_size;

} MyCircularQueue;


MyCircularQueue* myCircularQueueCreate(int k) {

    MyCircularQueue *new_queue = malloc(sizeof(*new_queue));
    new_queue->max_size = k;
    new_queue->cur_size = 0;
    new_queue->head = NULL;
    new_queue->tail = NULL;

    return new_queue;
}

bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) {

    if(obj->cur_size + 1 > obj->max_size) return false;

    struct Node *new_node = malloc(sizeof(*new_node));
    new_node->val = value;
    new_node->next = NULL;
    
    // if queue is empty we put as first element
    // else we take at the most back
    if(obj->cur_size == 0){
        obj->head = new_node;
    } else {
        obj->tail->next = new_node;
    }

    obj->tail = new_node;
    obj->cur_size++;

    return true;
}

bool myCircularQueueDeQueue(MyCircularQueue* obj) {

    if(obj->cur_size == 0) return false;

    struct Node *tmp = obj->head;
    obj->head = obj->head->next;
    free(tmp);

    //if head is NULL then tail must be null
    if(obj->head == NULL){
        obj->tail = NULL;
    }

    obj->cur_size--;
    return true;

}

int myCircularQueueFront(MyCircularQueue* obj) {

    if(obj->cur_size == 0) return -1;

    return obj->head->val;
}

int myCircularQueueRear(MyCircularQueue* obj) {

    if(obj->cur_size == 0) return -1;

    return obj->tail->val;
}

bool myCircularQueueIsEmpty(MyCircularQueue* obj) {

    return (obj->cur_size == 0) ? true : false; 
}

bool myCircularQueueIsFull(MyCircularQueue* obj) {
    
    return (obj->cur_size == obj->max_size) ? true : false;
}

void myCircularQueueFree(MyCircularQueue* obj) {

    struct Node *nodes = obj->head;

    while(nodes != NULL){
        struct Node *tmp = nodes;
        nodes = nodes->next;
        free(tmp);
    }

    free(obj);

}

/**
 * Your MyCircularQueue struct will be instantiated and called as such:
 * MyCircularQueue* obj = myCircularQueueCreate(k);
 * bool param_1 = myCircularQueueEnQueue(obj, value);
 
 * bool param_2 = myCircularQueueDeQueue(obj);
 
 * int param_3 = myCircularQueueFront(obj);
 
 * int param_4 = myCircularQueueRear(obj);
 
 * bool param_5 = myCircularQueueIsEmpty(obj);
 
 * bool param_6 = myCircularQueueIsFull(obj);
 
 * myCircularQueueFree(obj);
*/
