/*stack.h - header file of stack.h */
#include <stdio.h>
#define STK_ERROR 32000 

int stk_size ();
void stk_push(int item);
int stk_pop();
int stk_top();
int stk_error();
