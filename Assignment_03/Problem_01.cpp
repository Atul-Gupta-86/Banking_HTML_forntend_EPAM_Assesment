/*
Problem 1: Scholarship Distribution (Greedy)
A college has received a limited number of scholarships for students who participated
in a coding competition. Every student has a minimum scholarship amount they are
willing to accept. The college wants to award scholarships to as many students as
possible without exceeding the available budget.

Each student can receive at most one scholarship, and the college can decide the order
in which scholarships are awarded. Your task is to determine the maximum number of
students who can receive scholarships while staying within the total budget.

Input Format
• First line: N B (number of students and total budget)
• Second line: N integers representing the minimum scholarship required by each student.

Output Format
Print the maximum number of students who can receive scholarships.


Constraints
1 ≤ N ≤ 100000
1 ≤ B ≤ 10^9
1 ≤ Scholarship ≤ 10^6


Sample Input
5 20
4 8 2 6 5

Sample Output
4

Explanation
Sort the scholarship requirements in increasing order and award scholarships starting from
the smallest amount. Students requiring 2, 4, 5, and 6 can be selected within the budget of 20.

Example

Input:
4 10
3 5 7 2

Output:
3

*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    long long budget;
    cin >> n >> budget;

    vector<long long> amounts(n);
    for (int i = 0; i < n; i++) {
        cin >> amounts[i];
    }

    

    sort(amounts.begin(), amounts.end());

    long long total = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (total + amounts[i] <= budget) {
            total += amounts[i];
            count++;
        } else {
            break;
        }   
    }

    cout << count << endl;

    return 0;
}
