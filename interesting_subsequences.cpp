# C_N_Adhoc_problems
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l;
    cin>>n>>k>>l;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    sort(a,a+n);
    
   int min_ele=a[0];
   int max_ele=a[n-1];
   //cout<<min_ele<<endl;
   //cout<<max_ele<<endl;
   
   long ans=2147483647;
   
   for(int i=min_ele;i<=max_ele;i++)
   {
       int inc_sum=0;
       int dec_sum=0;
       int m=0;
       for(int j=0;j<n;j++)
       {
           int x=i-a[j];
           if(x>0)
           inc_sum=inc_sum+x;
           else
           dec_sum=dec_sum+abs(x);
           
           
          
       }
       if(inc_sum>=dec_sum)
           {
               m=(dec_sum*k)+(inc_sum-dec_sum)*l;
               if(m<ans)
               ans=m;
               
           }
       //cout<<"inc_sum="<<inc_sum<<" "<<"dec_sum="<<dec_sum<<endl;
       //cout<<m<<endl;
   }
   cout<<ans;
   
}


