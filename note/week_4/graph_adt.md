A set of vertices V: {v1, ..., vn}
A set of edges E: {(v,w) | v,w in V}

Operations:
Create/destroy graph
Add/remove edges
get vertices, edges
check if an edge exists

Adjacency Matrix
Edges by presence value in V x V matrix

Advantages
Efficient
Edge insertion/deletion and check O(1)
Disadvantages
Uses O(V^2) memory
sparse/undirected => wasted space

Adjacency List
Edges defined by entries in array of V lists

Advantages
Space efficient for sparse graphs
O(V+E) memory usage

Disadvantages
Inefficient
insertion/deletion O(V), matters less for sparse graphs

Array of Edges
Explicit representation of edges as (v,w) pairs

Advantages
Very space-efficient for sparse graphs where E < V

Disadvantafes
Inefficient
edge insertion/deletion O(E)

![image](https://github.com/user-attachments/assets/47b5776e-6a44-4e35-93b0-9f36f1834fa6)


