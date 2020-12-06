#include "Variable.hpp"


using namespace std;

void IntVariable::print(int number_of_needed_tabs)
{
	Thing::print(number_of_needed_tabs);
	cout<<value;
}

void StringVariable::print(int number_of_needed_tabs)
{
	Thing::print(number_of_needed_tabs);
	cout << QUOTATION_MARK << value << QUOTATION_MARK;
}

void StringVariable::initialize(string key, string _value)
{
	name = key;
	value = _value;
}

void IntVariable::initialize(string key, int _value)
{
	name = key;
	value = _value;
}