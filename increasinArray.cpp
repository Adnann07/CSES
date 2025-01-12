#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin >> n;

    vector<long long int> v;
    for(int i=0;i<n;i++)
    {
        long long int x;
        cin>>x;
        v.push_back(x);
    }
    long long int sum=0;

    for(int i=1;i<n;i++)
    {


        if(v[i-1]>v[i])
        {
            sum+=(v[i-1]-v[i]);
            v[i]=v[i-1];

        }
    }
    cout<<sum<<endl;

}

