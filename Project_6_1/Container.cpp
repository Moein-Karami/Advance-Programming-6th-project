#include "Container.hpp"
#include "Variable.hpp"
#include "MyExeption.hpp"

using namespace std;

Container::Container(int _id, string key)
{
	id = _id;
	name = key;
}

Object::Object(int _id, string key)
	:Container(_id, key) {}

Array::Array(int _id, string key)
	:Container(_id, key) {}

void Container::showContents(int number_of_needed_tabs)
{
	if(contents.size())
		cout<<endl;
	for(int i = ZERO; i < contents.size(); i++)
	{
		contents[i] -> print(number_of_needed_tabs);
		if(i != contents.size() - ONE)
			cout<<COMMA;
		cout<<endl;
	}
	if(contents.size())
		printTabs(number_of_needed_tabs - ONE);
}

void Array::print(int number_of_needed_tabs)
{
	Thing::print(number_of_needed_tabs);
	cout << OPEN_BRACKET;
	showContents(number_of_needed_tabs + ONE);
	cout << CLOSE_BRACKET;
}

void Object::print(int number_of_needed_tabs)
{
	Thing::print(number_of_needed_tabs);
	cout << OPEN_CURLY_BRACKET;
	showContents(number_of_needed_tabs + ONE);
	cout << CLOSE_CURLY_BRACKET;
}

void Object::printAsFirstContainer()
{
	cout << OPEN_CURLY_BRACKET;
	showContents(ONE);
	cout << CLOSE_CURLY_BRACKET<<endl;
}

void Array::printAsFirstContainer()
{
	cout << OPEN_BRACKET << endl;
	showContents(ONE);
	cout << CLOSE_BRACKET<<endl;
}

void Object::addString(string key, string value)
{
	checkDuplicateKey(key);
	StringVariable* new_varible = new StringVariable;
	new_varible -> initialize(key, value);
	Thing* new_content = new_varible;
	contents.push_back(new_content);
}

void Object::addInt(string key, int value)
{
	checkDuplicateKey(key);
	IntVariable* new_varible = new IntVariable;
	new_varible -> initialize(key, value);
	Thing* new_content = new_varible;
	contents.push_back(new_content);
}

void Object::checkDuplicateKey(string key)
{
	if(name_exists[key])
		throw DuplicatedKey(DUPLICATE_KEY);
	name_exists[key] = true;
}

Container* Object::addContainer(int id, string key, string type)
{
	checkDuplicateKey(key);
	Thing* new_content;
	Container* return_container;
	if(type == OBJECT)
		return_container = new Object(id, key);
	else if(type == ARRAY)
		return_container = new Array(id, key);
	else
		throw WrongType(UNDEFINED_TYPE);
	new_content = return_container;
	contents.push_back(new_content);
	return return_container;
}

void Array::addString(string key, string value)
{
	StringVariable* new_varible = new StringVariable;
	new_varible -> initialize(key, value);
	Thing* new_content = new_varible;
	contents.push_back(new_content);
}

void Array::addInt(string key, int value)
{
	IntVariable* new_varible = new IntVariable;
	new_varible -> initialize(key, value);
	Thing* new_content = new_varible;
	contents.push_back(new_content);
}


Container* Array::addContainer(int id, string key, string type)
{
	Thing* new_content;
	Container* return_container;
	if(type == OBJECT)
		return_container = new Object(id, key);
	else if(type == ARRAY)
		return_container = new Array(id, key);
	else
		throw WrongType(UNDEFINED_TYPE);
	new_content = return_container;
	contents.push_back(new_content);
	return return_container;
}