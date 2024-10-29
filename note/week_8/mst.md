A spanning tree of an undirected graph G is a subgraph of G that contains all vertices of G,
that is connected and contains no cycles

A minimum spanning tree of an undirected weighted graph G, is a spanning tree of G that has minimum total edge weight among all spanning trees of G

Algo krukal's
1. Start with an empty graph (same vertices as original graph)
2. Consider edges in increasing weight order
  - add if does not form a cycle
3. Repoeat until V-1 edges have been added

key idea
- iterating over edges in weight order
- checking if adding an edge would form a cycle

analysis
Sorting edges O(E * log E)
main loop has atmost E iterations
different ways to check if adding an edge would form a cycle
- DFS O(E * log E + E*V) = O(E*V)
- union find data structure close to O(1)
- O(E* log E + E) = O(E * log E) = O(E* log V)

- uses array based data strucutre
- performs better on sparse graphs

alog prim's
1. Start with empty graph
2. Start with any vertext and add it to the MST
3. Choose cheapest edge s-t such that
   s has been added to the MST and
   t has not been added to the MST
  and add this edge and the vertext to the MST
4. Repeat previous step until V-1 edges have been added
   or until all vertices have been added

Critical operatons:
- finding the cheapest edge s-t such that
  s has been added to the MST and t has not been added to the MST

analysis
at most E edges 
Loop has V iterations
In each iteration, finding the minimum weighted edge:
- with set of edges is O(E)
overall cost: O(E + V*E) = O(V*E)
- with fibonacci heap is O(log E) = O(log V)
overall cost: O(E+V*logV)
