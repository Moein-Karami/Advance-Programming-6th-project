#ifndef _MYEXEPTION_
#define _MYEXEPTION_


#include <iostream>
#include <exception>

class MyExeption : public std::exception
{
	protected :
		std::string error_description;
	public :
		MyExeption(std::string error);
		virtual const char* what() const throw ();
};

class  WrongId : public MyExeption
{
	public :
		WrongId(std::string error);
};

class DuplicatedKey : public MyExeption
{
	public :
		DuplicatedKey(std::string error);
};

class WrongType : public MyExeption
{
	public :
		WrongType(std::string error);
};

#endif