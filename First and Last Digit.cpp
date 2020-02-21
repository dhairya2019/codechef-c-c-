//First and Last Digit
//Codechef
#include <stdio.h>
#include<string.h>
int main() {
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        char s[1000];
        scanf("%s",&s);
        int sum=((int)s[0])-48+((int)s[strlen(s)-1])-48;
        printf("%d\n",sum);
    }
	return 0;
}