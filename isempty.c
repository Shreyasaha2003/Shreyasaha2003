#include <stdio.h>
int MAXSIZE = 8;
int stack[8];
int top = -1;

/* Check if the stack is empty */
int isempty() {
   if(top == -1)
      return 1;
   else
      return 0;
}

/* Main function */
int main() {
   printf("Stack empty: %s\n" , isempty()?"true":"false");
   return 0;
}
