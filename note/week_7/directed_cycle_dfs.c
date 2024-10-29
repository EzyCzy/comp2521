hasCycle(G):
  initialise visited array to false
  for each vertex v in G:
    if visited[v] = false: 
      if dfsHasCycle(G, v, visited):
        return true

dfsHasCycle(G, v, visited):
  visited[v] = true

  for each edge (v, w) in G:
    if visited[w] = true:
      return true
    else if dfsHasCycle(G, w, visited):
      return true
    return false

// proper cycle check

has Cycle(G):
  create visited array, initialised to false
  create onStack array, initialised to false
  
  for each vertex v in G:
    if visited[v] = false:
      if dfsHasCycle(G, v, visited, onStack):
        return true
  return false

dfsHasCycle(G, v, visited, onStack):
  visited[v] = true
  onStack[v] = true

  for each edge (v, w) in G:
    if onStack[w] = true:
      return true
    else if visited[w] = false:
      if dfsHasCycle(G, w, visited, onStack):
        return true
  onStack[v] = false
  return false
