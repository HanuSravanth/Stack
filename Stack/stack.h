/*
 * stack.h
 *
 *  Created on: Dec 3, 2020
 *      Author: hanus
 */

#ifndef STACK_H_
#define STACK_H_

#include <stdint.h>

typedef struct _stack_ Stack;
struct _stack_
{
	int32_t stack[];
	int32_t top = -1;
};


#endif /* STACK_H_ */
