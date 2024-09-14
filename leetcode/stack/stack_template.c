typedef struct stack *Stack

struct stack {
    struct node *head;
    int size;
};

struct node {
    int val;
    struct node *next;
}

Stack StackNew(void){

    Stack new_stack = malloc(sizeof(struct stack));
    new_stack->size = 0;
    new_stack->head = NULL:

    return new_stack;
}

Stack StackFree(Stack s){

    struct node *cur = s->head;
    while(cur != NULL){
        struct node *tmp = cur;
        cur = cur->next;
        free(tmp);
    }
    free(s);
}

Stack StackPush(Stack s, int val){

    struct node *new_node = malloc(sizeof(*new_node));

    new_node->val = val;
    new_node->next = s->head;
    
    s->head = new_node;
    s->size++;
}

int StackPop(Stack s){

    struct node *result = s->head->next;
    int val = s->head->val;
    free(s->head);

    s->head = result;
    s->size--;
    return val;
}

int StackSize(Stack s){

    return s->size;
}

int StackPeek(Stack s){

    if(s->size == 0){
        fprintf(stderr, "error: stack is empty\n");
        return 0;
    }

    return s->head->val;
}

int main(void){
    
    return 0;
}