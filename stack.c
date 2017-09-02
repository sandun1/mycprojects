/* stack.c - this is the implementation of stack */

#include <stdio.h>
#include "stack.h"

#define MAX_SIZE 10

static int stk[MAX_SIZE];
static int ptr;
static int error = 0;

int stk_size(){
	return ptr;
}

void stk_push(int x){
	if(ptr < MAX_SIZE){
		stk[ptr++] = x;
		error = 0;
	} else {
		error = 1;
	}
		
}

int stk_pop(){
	if(ptr > 0){
		error = 0;
		int temp = stk[--ptr];
		return temp;;
	} else {
		error = 1;
		return STK_ERROR;
	}
}

int stk_top(){
	if(ptr > 0){
		error = 0;
		return stk [ptr-1];
	} else {
		error = 1;
		return STK_ERROR;
	}
}

int stk_error(){
	return error;
}
