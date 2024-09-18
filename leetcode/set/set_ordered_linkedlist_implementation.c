
struct set {
  struct node *elemts;
  int size;
};

struct node {
  int elem;
  struct node *next;
}

typedef struct set * Set;

Set SetNew(void){
  Set s = malloc(sizeof(*s));

  s->elems = NULL;
  s->size = 0;
  return s;
}

void SetFree(Set s){
  struct node *cur = s->elems;

  while(cur != NULL){
    struct node *tmp = cur;
    cur = cur->next;
    free(tmp);
  }

  free(s);
}

void SetInsert(Set s, int elem){
  bool inserted = false;
  s->elements = listInsert(s->elements, elem, &inserted);
  if(inserted){
    s->size++;
  }
}

static struct node *listInsert(struct node *list, int elem, bool *inserted){
  if(list == NULL || elem < list->elem){
    struct node *new = malloc(sizeof(*new));
    new->elem = elem;
    new->next = list;
    *inserted = true;
    return new;
  } else if (elem == list->elem){
    return list;
  } else {
    list->next = listInsert(list->next, elem, inserted);
    return list;
  }
}

void SetDelete(Set s, int elem){
  bool deleted = false;
  s->elemns = listDelete(s->elems, elem, &deleted);
  if(deleted){
    s->size--;
  }
}

static struct node *listDelete(struct node *list, int elem, bool *deleted) {
  if(list == NULL || elem < list->elem){
    return list;
  } else if (elem == list->elem){
    struct node *temp = list->next;
    free(list);
    *deleted = true;
    return temp;
  } else {
    list->next = listDelete(list->next, elem, deleted);
    return list;
  }
}

bool SetContains(Set s, int elem) {
  struct node *curr = s->elems;
  for(; curr != NULL && elem >= curr->elem; curr = curr->next){
    if(curr->elem == elem){
      return true;
    }
  }
  return false;
}

int SetSize(Set s){
  return s->size;
}

void SetShow(Set s){
  printf("{");
  for(struct node *curr = s->elems; curr != NULL; curr = curr->next){
    printf("%d", curr->elem);
    if(curr->next != NULL){
      printf(",");
    }
  }
  printf("}");
}
