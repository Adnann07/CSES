#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, x;
    cin >> n >> x;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    int i=0;
    int j=n-1;
    int c=0;
    while(i<=j)
    {
        if(v[i]+v[j]<=x)
        {
            i++;
        }
        c++;
        j--;
    }
    cout<<c<<endl;
}
