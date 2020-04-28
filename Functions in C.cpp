
#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int function(int,int,int,int);
int function(a,b,c,d){
 if(a>b && a>c && a>d)
   return a;
   else if(b>a && b>c && b>d)
   return b;
   else if(c>a && c>b && c>d)
   return c;
   else 
   return d;
}



int main(){
  int a,b,c,d;
  scanf("%d %d %d %d",&a, &b, &c, &d);
  int sum=function(a,b,c,d);
  printf("%d",sum);
  return 0;
}

