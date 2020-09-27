#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s,t;
    cin>>s;
    cin>>t;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]==t[i])
        {
           continue; 
        }
        if(s[i]!=t[i] && s[i+1]!=s[i] )
        {
            c+=1;
            i++;
        }
        
        else
        {
            c+=1;
        }
    }
    cout<<c<<endl;
}
