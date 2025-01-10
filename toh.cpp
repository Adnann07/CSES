#include <bits/stdc++.h>
using namespace std;

// Function to perform Tower of Hanoi moves
void TOH(int n, int a, int b, int c, vector<pair<int, int>> &moves) {
    if (n > 0) {
        // Move n-1 disks from 'a' to 'b' using 'c' as auxiliary
        TOH(n - 1, a, c, b, moves);

        // Record the move of the nth disk from 'a' to 'c'
        moves.push_back({a, c});

        // Move n-1 disks from 'b' to 'c' using 'a' as auxiliary
        TOH(n - 1, b, a, c, moves);
    }
}

int main() {
    int n;
    cin >> n; // Number of disks

    vector<pair<int, int>> moves; // To store all the moves

    // Solve the Tower of Hanoi problem
    TOH(n, 1, 2, 3, moves);

    // Print the total number of moves
    cout << moves.size() << endl;

    // Print all the moves
    for (auto move : moves) {
        cout << move.first << " " << move.second << endl;
    }

    return 0;
}
