hasHalmiltonianPath(G) : 
  Input: graph G
  Output: true if G has a Hamiltonian path false otherwise

  create visited array, initialised to false
  for each vertex v in G:
    if dfsHamiltonianPath(G, v, visited, #vertices(G)):
      return true
  return false

dfsHamiltonianPath(G, v, visited, numVerticesLeft):
  visited[v] = true
  numVerticesLeft--

  if numVerticesLeft = 0:
    return true

  for each neighbour w of v in G:
    if visited[w] = false:
      if dfsHamiltonianPath(G, w, visited, numVerticesLeft):
        return true
  visited[v] = false
  return false

hasHamiltonianCircuit(G):
  Input: graph G
  Output: true if G has a Hamiltonian circuit
          false otherwise
  if #vertices(G) < 3:
    return false

  create visited array, initialised to false
  return dfsHamiltonianCircuit(G, 0, visited, #vertices(G))

dfsHamiltonianCircuit(G, v, visited, numVertices):
  visited[v] = true
  numVerticesLeft = numVerticesLeft - 1

  if numVerticesLeft = 0 and adjacent(G, v, 0):
    return true

  for each neighbour wo f v in G:
    if visited[w] = false:
      if dfsHamiltonianCircuit(G, w, visited, numVerticesLeft):
        return true
  visited[v] = false
  return false
