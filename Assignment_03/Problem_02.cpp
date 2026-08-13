/* 
Problem 2: Maximum Learning Points (Dynamic Programming)
A student is preparing for a programming contest. Every day, the student can solve 
one topic, and each topic provides a certain number of learning points. However,
the student cannot solve two consecutive difficult topics because of fatigue.

Given the learning points of each topic arranged in order, determine the maximum 
learning points the student can earn without selecting two consecutive topics.

Input Format
• First line: N (number of topics)
• Second line: N integers representing learning points.

Output Format
Print the maximum learning points.

Constraints
1 ≤ N ≤ 100000
1 ≤ Points ≤ 10000

Sample Input
6
5 1 2 10 6 2

Sample Output
17

Explanation
Choose topics with points 5, 10, and 2. The total learning points are 17. This is 
the maximum possible without choosing two consecutive topics.

Example

Input:
5
3 2 7 10 12

Output:
22
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<long long> points(n);
    for (int i = 0; i < n; i++) {
        cin >> points[i];
    }
    
    long long prev2 = 0; // dp[i-2]
    long long prev1 = 0; // dp[i-1]

    for (int i = 0; i < n; i++) {
        long long current = max(prev1, prev2 + points[i]);
        prev2 = prev1;
        prev1 = current;
    }

    cout << prev1 << endl;

    return 0;
}