#include "MyException.hpp"

using namespace std;

MyException::MyException(string error)
	: error_description(error) {}

const char* MyException::what() const throw ()
{
	return error_description.c_str();
}

DuplicateName::DuplicateName(string error)
	: MyException(error) {} 

WrongName::WrongName(string error)
	: MyException(error) {}

EchoLoop::EchoLoop(string error)
	: MyException(error) {}

WrongCommand::WrongCommand(string error)
	: MyException(error) {}