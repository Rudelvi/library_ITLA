/*
 * Element.h
 *
 *  Created on: May 23, 2016
 *      Author: raydelto
 */

#ifndef ELEMENT_H_
#define ELEMENT_H_
#include <string>
class Element
{
	private:
		std::string _name;
		std::string _author;
		std::string _publisher;
		std::string _date;
		std::string _category;
		Element* _next;

	public:
		Element(std::string name);
		const std::string& getName() const {
			return _name;
		}

		void setName(const std::string& name) {
			_name = name;
		}

		 Element* getNext()
		{		return _next;	}

		void setNext( Element*& next) {
			_next = next;
		}

	const std::string& getAuthor() const {
		return _author;
	}

	void setAuthor(const std::string& author) {
		_author = author;
	}

	const std::string& getCategory() const {
		return _category;
	}

	void setCategory(const std::string& category) {
		_category = category;
	}

	const std::string& getDate() const {
		return _date;
	}

	void setDate(const std::string& date) {
		_date = date;
	}

	const std::string& getPublisher() const {
		return _publisher;
	}

	void setPublisher(const std::string& publisher) {
		_publisher = publisher;
	}
	//This means that Stack can access directly to Element's private members
	friend class Stack;
};

#endif /* ELEMENT_H_ */
