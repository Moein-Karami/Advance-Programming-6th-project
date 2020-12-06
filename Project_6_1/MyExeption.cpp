#include "MyExeption.hpp"

using namespace std;

MyExeption::MyExeption(string error)
	: error_description(error) {}

const char* MyExeption::what() const throw ()
{
	return error_description.c_str();
}

WrongId::WrongId(string error)
	: MyExeption(error) {}

DuplicatedKey::DuplicatedKey(string error)
	: MyExeption(error) {}

WrongType::WrongType(string error)
	: MyExeption(error) {}