/*
 * Stack.h
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */

#ifndef STACK_H_
#define STACK_H_
#include "Element.h"
class Stack
{
	private:
		Element* _last;
		Element* _first;
	public:
		void push(Element*);
		Element* pop();
		Stack();

		 Element* getFirst()
			 {		return _first;	}

			 Element* getLast()
			 {		return _last;	}

};

#endif /* STACK_H_ */
