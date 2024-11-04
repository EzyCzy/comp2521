#define ALPHABET_SIZE 26

struct node {
  struct node* children[ALPHABET_SIZE];
  bool finish;
  Data data;
}

trieInsert(t, key, data):
  Inputs: trie t
          key of length m and associated data
  Output: t with key and data inserted

  if t is empty:
    t = new node

  if m = 0:
    t->finish = true
    t->data = data

  else:
    first = key[0]
    rest = key[1...m-1]
    t->children[first]

  return t;

trieSearch(t, key):
  Inputs: trie t
          key of length m
  Outputs: true if key is int t, false otherwise

  if t is empty:
    return false
  else if m = 0:
    return t->finish = true
  else: 
    first = key[0]
    rest = key[1..m-1]
  return trieSearch(t->children[first], rest)
  
trieDelete(t, key):
  Inputs: trie t
          key of length m
  Ouput: t with key deleted

  if t is empty:  
    return t
  else if m = 0;
    t->finish = false
  else:
      first = key[0]
      rest = key[1..m-1]
      t->children[first] = trueDelete(t->children[first], rest)

  if t->finish = false and t has no child nodes:
    return NULL
  else:
    return t
  
