#include<iostream>
using namespace std;
int main()
{
 int t=0;
 cin>>t;
 for(int i=0;i<t;i++){
    int n=0,foo=0;
    cin>>n;
    int a[6]={1,2,5,10,50,100};
    for(int j=5;j>=0;j--)
    {
       foo=foo+(n/a[j]);
       n=n%a[j];
       if(n==0)
       break;
       else
       continue;
       
        
    }
    cout<<foo<<endl;
    
     
     
 }
