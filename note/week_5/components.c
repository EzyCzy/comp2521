components(G):
  Input: graph G
  Output: componentOf array

  create componentOf array, initialised to -1

  compNo = 0

  for each vertex v in G:
    if componentOf[v] = -1:
      dfsComponents(G, v, componentOf, compNo)
      compNo++
  return componentOf

dfsComponents(G, v, componentOf, compNo):
  componentOf[v] = compNo
  for each neighbour w of v in G:
    if componentOf[w] = -1:
      dfsComponents(G, w, componentOf, compNo)


int numComponents(Graph g) {
  return g->nC;
}

int inSameComponent(Graph g, Vertex v, Vertex w) {
  return g->cc[v] == g->cc[w];
}

bool hasPath(Graph g, Vertex v, Vertex w) {
  return g->cc[v] == g->cc[w]
}
