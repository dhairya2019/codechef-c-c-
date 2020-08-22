#include <bits/stdc++.h>
using namespace std;

int main()
{
int n=0;
int foo=0,bar=0;
cin>>n;
int arr[n]={0};
for(int j=0;j<n;j++){
scanf("%d",&arr[j]);
}
for(int i=0;i<n;i++)
{
 if(arr[i]%2==0)
    foo++;
 else
   bar++;
}
if(foo>bar)
  cout<<"READY FOR BATTLE"<<endl;
  
else  
cout<<"NOT READY";

    return 0;
}
