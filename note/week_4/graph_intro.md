Lists: linear sequence of items

Trees: a branched hierarchy of items

A graph is a DS consisting of 
A set of vertices V (nodes)
A set of edges between two vertices

Vertices: in the course between 0 and |V| - 1

Edges may be directed, weighted and/or labelled

Items are not ordered
Graph may contain cycles
Concrete representation is more complex

Type of graph:
Directed
Undirected
Weighted
Unweighted

Loop is an edge from a vertex to itself

Multigraph,
multple edges are allowed between two vertices (not in the course)

Simple graph
undrected, no loops, no multiple edges

Simple graph with V vertcies, what is maximum possible number of edges
E = V(V-1)/2

Two vertices v and w are adjacent, if there's an edge connects them

E closer to V^2, graph is dense
V close to E, graph is sparse

Path
sequence of vertices where each vertex has a edge to the next in the sequence

A path is simple
If it has no repeating vertices

A cycle is path where first and last vertices are the same

Complete graph where all vertex is connected to every other graph

Connected graph, there is a path from a vertex to every other vertex
Tree, connect graph with no cycles, exactly one path between each pair of vertices

A subgraph of a graph G
graph contains a subset of vertices of G and subset of edges of G

A connected component is maximally connected subgraph

A spanning tree of a graph G 
is a subgraph that contains all the vertices of G and is a single tree (exist for connected graph)

A spanning forest of a graph G
is a subgraph that contains all the vertices of G and contains one three for each connected component

A clique is a complete subgraph
A clique is non trivial if it has 3 or more vertices

