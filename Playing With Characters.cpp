#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
char ch;
char str[100];
char str1[100];
scanf("%c",&ch);
scanf("\n");
scanf("%s", &str);
scanf("\n");
  scanf("%[^\n]%*c", str1); 
   
 
 printf("%c\n", ch);
 printf("%s\n", str);
 printf("%s", str1); 
   


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
