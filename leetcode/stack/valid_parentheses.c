// https://leetcode.com/problems/valid-parentheses/description/

typedef struct stack *Stack;

struct stack {
    struct node *head;
    int size;
};

struct node {
    int val;
    struct node *next;
};

Stack StackNew(void){

    Stack new_stack = malloc(sizeof(struct stack));
    new_stack->size = 0;
    new_stack->head = NULL;

    return new_stack;
}

void StackFree(Stack s){

    struct node *cur = s->head;
    while(cur != NULL){
        struct node *tmp = cur;
        cur = cur->next;
        free(tmp);
    }
    free(s);
}

void StackPush(Stack s, int val){

    struct node *new_node = malloc(sizeof(struct node));

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

bool isValid(char* s) {

    Stack stack = StackNew();

    for(int i = 0; i < strlen(s); i++){

        
        if(s[i] == '(' || s[i] == '{' || s[i] == '[') StackPush(stack, s[i]);

        if(s[i] == ')' || s[i] == ']' || s[i] == '}'){
            if((s[i] == ')' && StackPeek(stack) == '(') || (s[i] == '}' && StackPeek(stack) == '{') || (s[i] == ']' && StackPeek(stack) == '[')){
                StackPop(stack);
            } else {
                return 0;
            }
        }
        
    }

    if(StackSize(stack) == 0){
        return 1;
    }
    return 0;
}
