
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    int sum2=0,sum3=0;
    sort(v.begin(),v.end());
    int mini = v[0];
    int maxi = v[n-1];
    int sum=mini+maxi;

    for(int i=1;i<n-1;i++)
    {
        sum2=sum2+v[i];
    }
    sum3=abs(sum-sum2);
    cout<<sum3<<endl;

}

