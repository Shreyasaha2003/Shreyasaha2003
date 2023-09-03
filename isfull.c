#include <stdio.h>
int MAXSIZE = 8;
int stack[8];
int top = -1;

/* Check if the stack is full */
int isfull(){
   if(top == MAXSIZE)
      return 1;
   else
      return 0;
}

/* Main function */
int main(){
   printf("Stack full: %s\n" , isfull()?"true":"false");
   return 0;
}
