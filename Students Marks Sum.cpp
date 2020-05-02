#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.
int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
  int sum=0;
  if(gender=='g')
  {
   for (int student = 1; student < number_of_students; student+=2) {
        sum += marks[student];
    }
  }
  else{
    for (int student = 0; student < number_of_students; student+=2) {
        sum += marks[student];
    }
}
    return sum;  
    
 
  
}


int main() {
