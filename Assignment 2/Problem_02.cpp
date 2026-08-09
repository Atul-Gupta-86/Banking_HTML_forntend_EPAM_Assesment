/*
Problem 2: Emergency Route Validation

A country's transportation department models its highway system as a connected undirected graph.
Each city is represented by a vertex, while highways are represented by edges. During emergencies,
rescue teams need to travel from the capital city (City 1) to all other cities. However, not every
city is considered safely reachable because some routes may contain too many intermediate cities.

A city is called efficiently reachable if the length of the shortest path from City 1 to that city
is less than or equal to D roads. Determine the total number of efficiently reachable cities, 
including the capital. Unreachable cities are not counted.

Input Format
First line: N M D
Next M lines: u v (roads)

Output Format
Print the number of efficiently reachable cities.

Constraints
1 ≤ N ≤ 10^5
0 ≤ M ≤ 2×10^5
0 ≤ D ≤ N
No self-loops

Sample Input

7 8 2
1 2
1 3
2 4
2 5
3 6
6 7
5 7
4 6

Sample Output
6

Explanation
Run BFS from City 1 to compute the shortest distance to every city. Count cities whose distance is at most D.

Example

Input:
6 5 1
1 2
2 3
1 4
4 5
5 6

Output:
3
*/

#include <bits/stdc++.h>
using namespace std;

int fun(int& count, queue<int>& q, int& d, int& anscount, vector<int>& visited, vector<vector<int>>& adj) {
    while (!q.empty() && count < d) {
        int sz = q.size();
        for (int i = 0; i < sz; i++) {
            int temp = q.front(); q.pop();
            for (auto el : adj[temp]) {
                if (!visited[el]) {
                    visited[el] = 1;
                    anscount++;
                    q.push(el);
                }
            }
        }
        count++;
    }
    return anscount;
}

int countEfficientlyReachable(int n, int d, vector<vector<int>>& adj) {
    int count = 0;
    queue<int> q;
    q.push(1);
    int anscount = 1;
    vector<int> visited(n + 1, 0);
    visited[1] = 1;
    return fun(count, q, d, anscount, visited, adj);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, d;
    cin >> n >> m >> d;

    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout << countEfficientlyReachable(n, d, adj) << endl;

    return 0;
}
