#include<iostream>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    for(int k=0;k<t;k++){
    int i=0,j=0;
    cin>>i>>j;
        int sum=0;
    for(int l=1;l<=i;l++){
        sum=0;
        for(int m=1;m<=j;m++){
            sum=sum+m;
        }
       j=sum;
      
    }
      cout<<sum<<endl;  
    }

    
    return 0;
}
