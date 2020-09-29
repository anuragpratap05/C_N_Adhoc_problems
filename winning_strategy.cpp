# C_N_Adhoc_problems
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        b[i]=i+1;
    }
    string ans="YES";
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int x=a[i]-b[i];
        if(x>=3)
        {
            ans="NO";
         break;   
        }
        else if(x>0 && x<=2)
        {
            sum+=x;
        }
        
    }
    if(ans=="YES")
    {
        cout<<"YES"<<endl<<sum<<endl;
    }
    else
    cout<<"NO"<<endl;
}

