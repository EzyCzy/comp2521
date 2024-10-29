shortest path between two vertices in weighted graph

path is sequence of edges connected end to end

the cost of a path is the sum of edge weights along the path

the shortest path between two vertices s and ti the path from s to t with minimum cost

Variation of shortest path problem:

Source-target shortest path
- from vertex s to t

Single source shortest path
- source vertex to all other vertices

All-pairs shortest path
- shortest path between all pairs of source and target vertices

Data strucutres used in Dijkstra's algorithm
- Distance array (dist)
  keep track of shortest currently known distance to each vertex
- Predecessor array (pred_
 same purpose as in BFS/DFS
 to keep track of the predecessor of each vertext on the shortest currently known path to that vertex
 Used to construct the shortest path
- Set of vertices stores unexplored vertices

create and initialise data structures
 - create distance array, initialised to infinity
 - use INT_MAX from limits.h
 - predecessor array, intialised to -1
 - initialise set of vertices to contain all vertices

set distance of source vertex s to 0

while set of vertices is not empty:
  remove vertex from the vertex set with smallest distance in distance array
    - vertex v
  explore v - that is for each edge v - w:
    - check if using this edge gives a shorter parth to w
    - if so, update w's distance and predecessor - this is called edge relaxation

dist and pred array 
- contains data about the shortest path discovered so far
- need to be updaed if a shorter path to some vertex is found
