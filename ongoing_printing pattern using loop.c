#include<stdio.h>
int main()
{
  int m=0,n=0;
  scanf("%d",&m);
  n=m;
 
  for(int i=1;i<=((2*n)-1);i++){
    for(int j=1;j<=((2*n)-1);j++){
      if(i==1 || (i==(2*n)-1) || j==1 || j==((2*n)-1)){
        printf("%d",m);
      }
      else if(i==n && j==n)
      printf("1");
      
      
      else
       printf(" ");
    }
    printf("\n");
  }
  
 return 0;
}
