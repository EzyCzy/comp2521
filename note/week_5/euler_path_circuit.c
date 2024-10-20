hasEulerianPath(G):
  Input: graph G
  Ouput: true if G has an Eulerian path
         false otherwise
  
  numOddDegree = 0
  for each vertex v in G:
    if degree(G, v) is odd:
      numOddDegree++
  return (numOddDegree = 0 or numOddDegree = 2) and eulerConnected(G)
eulerConnected(G):
  Input: graph G
  Output: true if all vertices in G with non-zero degree belong to the same connected
          component false otherwise
  
  create visited array, initialised to false

  for each vertex v in G:
    if degree(G, v) > 0:
      dfsRec(G, v, visited)
      break
  for each vertex v in G:
    if degree(G, v) > 0 and visited[v] = false:
      return false
  return true

hasEulerianCircuit(G):
  Input: graph G
  Output: true if G has an eulerian circuit 
          false otherwise

  for each vertex v in G:
    if degree(G, v) is odd:
      return false
  return eulerConnected(G)
