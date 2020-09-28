# C_N_Adhoc_problems
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    long x,y;
    cin>>n>>x>>y;
    string s;
    cin>>s;
    if(s[0]=='0')
    c+=1;
    
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='1' && s[i+1]=='0')
        c+=1;
    }
    
    if(c==0)
    {
        cout<<"0"<<endl;
    }
    else
    {
    long ans= ((c-1)*min(x,y))+y;
    cout<<ans<<endl;
    }
}
