#ifndef _MYEXCEPTION_
#define _MYEXCEPTION_


#include <iostream>
#include <exception>

class MyException : public std::exception
{
	protected :
		std::string error_description;
	public :
		MyException(std::string error);
		virtual const char* what() const throw ();
};

class DuplicateName : public MyException
{
	public :
		DuplicateName(std::string error);
};

class WrongName : public MyException
{
	public : 
		WrongName(std::string error);
};

class EchoLoop : public MyException
{
	public :
		EchoLoop(std::string error);
};

class WrongCommand : public MyException
{
	public :
		WrongCommand(std::string error);
};

#endif