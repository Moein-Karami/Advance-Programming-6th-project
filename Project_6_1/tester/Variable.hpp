#ifndef _Variable_
#define _Variable_


#include <iostream>
#include "Thing.hpp"


class IntVariable : public Thing
{
	protected :
		int value;
	public :
		void initialize(std::string key, int _value);
		void print(int number_of_needed_tabs);
};

class StringVariable : public Thing
{
	protected :
		std::string value;
	public :
		void initialize(std::string key, std::string _value);
		void print(int number_of_needed_tabs);
};

#endif