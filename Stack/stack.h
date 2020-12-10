/*
 * stack.h
 *
 *  Created on: Dec 3, 2020
 *      Author: hanus
 */

#ifndef STACK_H_
#define STACK_H_

#include "APP_CONSTANTS.h"
#include <stdint.h>

typedef struct _stack_ Stack;
struct _stack_
{
	int32_t data[MAX_DEPTH];
	int32_t top;
	uint32_t size;
};

typedef struct _stack_result_ StackResult;
struct _stack_result_
{
	float data;
	uint8_t status;
};

Stack stack_new(uint32_t size);
uint8_t stack_full(const Stack *stk);
uint8_t stack_empty(const Stack *stk);
Stack*  stack_push(Stack *stk,float ele,StackResult *res);
Stack*  stack_pop(Stack *stk,StackResult *res);
Stack*  stack_peek(Stack *stk,StackResult *res);
int8_t  isMatchingPair(char character1, char character2);
int8_t  areParenthesBalanced(char* exp);

#endif /* STACK_H_ */
