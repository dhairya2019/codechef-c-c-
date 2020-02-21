#include<stdio.h>
#include<math.h>
int main(){
    int t=0;
    scanf("%d",&t);
     int arr[1000];
      static int j=0;
    for(int i=0;i<t;i++){
        int num=0,c=0;
       
        scanf("%d",&num);
       
        arr[j]=sqrt(num);
        j++;
        
    }
    for(int k=0;k<j;k++){
            printf("%d\n",arr[k]);
        }
    
        return 0;
}