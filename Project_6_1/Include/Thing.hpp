#ifndef _THING_
#define _THING_


#include <iostream>
#include <string>
#include "GeneralDefines.hpp"

class Thing 
{
	protected :
		std::string name;
	public :
		virtual void print(int number_of_needed_tabs);
		void printTabs(int number_of_needed_tabs);
};

#endif