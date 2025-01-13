#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m;
    cin >> n >> m;

    multiset<long long> tickets;
    vector<long long> customers(m);

    // Read ticket prices
    for (int i = 0; i < n; i++) {
        long long price;
        cin >> price;
        tickets.insert(price);
    }

    for (int i = 0; i < m; i++) {
        cin >> customers[i];
    }

    for (int i = 0; i < m; i++) {
        auto it = tickets.upper_bound(customers[i]);
        if (it == tickets.begin()) {

            cout << -1 << "\n";
        } else {
            --it;
            cout << *it << "\n";
            tickets.erase(it);
        }
    }

    return 0;
}
