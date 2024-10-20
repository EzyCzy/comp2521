Hamiltonian path
A path that includes each vertex exactly once

Hamiltonian circuit/cycle
A cycle that includes each vertext exactly once (start = end)

Grapgh needs to be connected

Idea: 
- Brute force
- DFS to check all possible paths
  - Recursive DFS is perfect, as it naturally allows backtracking
- Keep track of the number of vertices left to visit
- Stop when this number reaches 0

why set visited[v] to false at the end of dfsHamiltonianPath?

allow the algorithm to explore other potential paths

Hamiltonian circuit
- similar to path
- after a path is found check if the final vertex is adjacent to the starting vertex

Analysis
Time complexity O(V!)

at most V! paths to check

no known  polynomial time algorithm, so Hamiltonian path problem is NP-hard (Non deterministic polynomial-time hard)

no easy way

