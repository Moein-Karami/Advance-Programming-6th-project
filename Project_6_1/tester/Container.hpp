#ifndef _CONTAINER_
#define _CONTAINER_


#include <iostream>
#include <vector>
#include <map>
#include <string>
#include "Thing.hpp"
#include "GeneralDefines.hpp"

class Container : public Thing
{
	protected :
		int id;
		std::vector<Thing*> contents;
	public :
		Container(int _id, std::string _key);
		void showContents(int number_of_needed_tabs);
		virtual void printAsFirstContainer() = ZERO;
		virtual void addString(std::string key, std::string value) = ZERO;
		virtual void addInt(std::string key, int value) = ZERO;
		virtual Container* addContainer(int id, std::string key, std::string type) = ZERO;
		void checkDuplicateKey(std::string key);
};

class Object : public Container
{
	protected :
		std::map<std::string, bool> name_exists;
	public :
		Object(int _id, std::string _key);
		void print(int number_of_needed_tabs);
		void printAsFirstContainer();
		void addString(std::string key, std::string value);
		void addInt(std::string key, int value);
		Container* addContainer(int id, std::string key, std::string type);
		void checkDuplicateKey(std::string key);
};

class Array : public Container
{
	public :
		Array(int _id, std::string _key);
		void print(int number_of_needed_tabs);
		void printAsFirstContainer();
		void addString(std::string key, std::string value);
		void addInt(std::string key, int value);
		Container* addContainer(int id, std::string key, std::string type);
};

#endif