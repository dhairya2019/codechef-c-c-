#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>





int main() {
    int n, k;
    int maxAnd=0,maxOr=0,maxXor=0;
    scanf("%d %d", &n, &k);
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(maxAnd<(i&j) && (i&j)<k)
            maxAnd=i&j;
           
          
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
    if(maxOr<(i|j) && (i|j)<k)
            maxOr=i|j;
        }
    }
        for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(maxXor<(i^j) && (i^j)<k)
            maxXor=i^j;
        }
        } 

printf("%d\n",maxAnd);
printf("%d\n",maxOr);
printf("%d\n",maxXor);
    return 0;
}
