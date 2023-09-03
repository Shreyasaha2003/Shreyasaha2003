#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 10
int top=-1;
char stack[MAX];
char p[MAX];
void push(char item)
{
top=top+1;
stack[top]=item;
}
char pop()
{
    char x;
    x=stack[top];
    top=top-1;
    return x;
}
int precedence(char O)
{
    switch (O)
    {
        case '-':
    return 1;
    case '+':
    return 1;
    break;
    case '*':
    return 2;
    case '/':
    return 2;
    break;
    }
    }
int main()
{
    char in[20];
    int x,z,i=0,j=0;
    char l;
    printf("Enter the infix expression:\n");
    scanf("%s",in);
    while(in[i]!='\0')
    {
        if(in[i]=='(')
        push(in[i]);
        else if(isalpha(in[i]))
        {
            p[j]=in[i];
            j++;
        }
        else if (in[i]=='+'|| in[i]=='-'|| in[i]=='*'|| in[i]=='/')
        {
            z=precedence(in[i]);
            x=precedence(stack[top]);
            if(stack[top]=='+'|| stack[top]=='-'|| stack[top]=='*'|| stack[top]=='/')
            {
                if (z==x)
                p[j++]=pop();
                else if(z<x)
                push(in[i]);
                else
                {
                    p[j++]=pop();
                    push(in[i]);
                }
            }
            else
            push(in[i]);
        }
        else
        {
            while(stack[top]!='(')
            {
                p[j++]=pop();
            }
            l=pop();
            }
            i++;
        }
        p[j]='\0';
        printf("Required expression:%s",p);
    }
