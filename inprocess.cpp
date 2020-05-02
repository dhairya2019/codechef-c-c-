#include<stdio.h>
int main(){
   char str[9][10];
  int n=0;
  scanf("%d",&n);
  for(int l=0;l<n;l++){
    scanf("%s",&str[l]);
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      for(int k=0;k<n;k++){
        if(i!=j && j!=k && k!=i){
          printf("%s\t%s\t%s\n",str[i],str[j],str[k]);
        }
       
        
      }
    }
  }
  
  return 0;
}
