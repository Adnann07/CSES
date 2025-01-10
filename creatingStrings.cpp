#include<bits/stdc++.h>
using namespace std;

void permute(string s,int start,int end, set<string>& results)
{


    if(start==end)
    {
         results.insert(s);
        return;
    }
    for(int i=start;i<=end;i++)
    {

        swap(s[start],s[i]);
        permute(s,start+1,end,results);
        swap(s[start],s[i]);

    }


}

int main()
{
    string s;
    cin>>s;
    set<string> results;
    permute(s,0,s.length()-1,results);

    cout<<results.size()<<endl;

    for(auto result:results)
    {
        cout<<result<<endl;
    }
}
