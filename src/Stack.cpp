/*
 * Stack.cpp
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */

#include "Stack.h"

void Stack::push(Element* element)
{
	//TODO: Implement this method.
	if(_last == NULL)
			{
				_last = _element;
			}else{
				_element -> _next = _last;
				_last = _element;
			}
}

Element* Stack::pop()
{
	//TODO: Implement this method.
	if(_last == NULL){
		return NULL;
	}
	Element* element_return = _last;
	_last = element_return -> _next;
	return element_return;
	return NULL;
}

Stack::Stack(): _first(NULL), _last(NULL)
{

}

