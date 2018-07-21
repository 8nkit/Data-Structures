#include  <stdio.h>
#include  <stdlib.h>
#include  <string.h>
#define SIZE 100
// global declation
int top = -1; //  Top of Stack
char Q[SIZE],P[SIZE],Stack[SIZE];//Q isinfixandPispostfixexpressionarray
void push(char  item)
{
// Place Your Code Here

}
char pop( )
{
    // Place Your Code Here
    }
int is_operator(char symbol)
{
    if(symbol == '^'||symbol == '*'||symbol == '/'||symbol == '+'||symbol == '-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int precedence(char symbol)
{
    if(symbol == '^')
    {
        return(3);

    }
    else if(symbol == '*'||symbol == '/')
    {
        return(2);
    }
    else if(symbol == '+'||symbol == '-')
    {
        return(1);
    }
    else
    {
        return(0);
    }
}

void Infix_to_Postfix()
{
     //Olace your code here
}
int main()
{
    printf("\nEnter Infix expression within parentheses:\n\n");
    gets(Q);
    Infix_to_Postfix();
    printf("\n\nPostfix Expression is %s\n\n",P);
    return 0;
} //END OF MAIN FUNCTION
