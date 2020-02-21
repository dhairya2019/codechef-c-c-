//Sum of Digits 
//Codechef 
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
    int t=0,l=0;
    cin>>t;
    l=t;
    int arr[10000]={0};
    static int j=0;
    while(t--){
        string str;
        cin>>str;
        int sum=0;
        for(int i=0;i<str.length();i++){
          sum=sum+(int(str[i])-48);  
        }
       
       while(l--){
          
           arr[j]=sum;
           j++;
           break;
       }
        
    }
    for(int k=0;k<j;k++){
        cout<<arr[k]<<endl;
    }
    return 0;
}