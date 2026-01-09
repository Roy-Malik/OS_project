# OS_project
Social Network Analysis using Graph Algorithms

This project was developed as a final project for the course Design and Analysis of Algorithms (CS2009). The objective is to apply classical algorithmic techniques to analyze a social network by modeling it as a graph and solving two fundamental problems: shortest path discovery and influence propagation.

The social network is represented as a weighted graph using an adjacency list data structure. Each node represents a user, while edges represent connections between users with associated distance weights. This representation was chosen for its memory efficiency and fast neighbor traversal, especially suitable for sparse networks.

Part 1: Shortest Path Analysis

The first part of the project focuses on finding the shortest path between two users in the network. Two algorithms were implemented and compared:

Dijkstra’s Algorithm, which guarantees the shortest path by exploring nodes in increasing order of distance from the source using a min-priority queue.

A* Search Algorithm, a goal-directed extension of Dijkstra’s algorithm, which uses a heuristic function to prioritize nodes closer to the destination. The heuristic used is the node degree (number of direct connections).

Both implementations include full path reconstruction and formal worst-case time complexity analysis. Using a binary heap–based priority queue, the time complexity for both algorithms is
O((V + E) log V), where V is the number of users and E is the number of connections.

Part 2: Longest Influence Chain

The second part analyzes influence propagation within the network. The goal is to find the longest chain of users where influence scores strictly increase at each step. This problem is solved using Depth First Search (DFS) with Dynamic Programming (Memoization).

For each user, the algorithm computes the longest increasing influence path starting from that node and stores intermediate results to avoid redundant computation. This guarantees that each node and edge is processed only once, resulting in a linear time complexity of
O(V + E).

Conclusion

This project demonstrates the practical application of graph algorithms, heuristic search, and dynamic programming to a realistic social network analysis problem, along with rigorous asymptotic complexity analysis.
