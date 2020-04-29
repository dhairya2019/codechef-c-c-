#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n=0,sum=0;
    scanf("%d\n",&n);
    int *arr = (int*)malloc(n * sizeof(int));
    for(int i=0;i<n;i++){
     scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++){
       sum=sum+arr[j]; 
    }
    printf("%d",sum);
   

    return 0;
}
