#ifndef _JSONBUILDER_
#define _JSONBUILDER_

#include <iostream>
#include <map>
#include <vector>
#include <string>

class Container;
class Array;
class Object;

class JsonBuilder 
{
	protected :
		std::vector<Container*> containers;
		std::map<int, Container*> id_to_array;
		std::map<int, Container*> id_to_object;
		int last_id;
	public :
		JsonBuilder();
		void addStringToObject(int parent_id, std::string key, std::string value);
		void addIntegerToObject(int parent_id, std::string key, int value);
		int addContainerToObject(int parent_id, std::string key, std::string type);
		void addStringToArray(int parent_id, std::string value);
		void addIntegerToArray(int parent_id, int value);
		int addContainerToArray(int parent_id, std::string type);
		void print(int id);
		int nextId();
		void checkValidObjectId(int parent_id);
		void checkValidArrayId(int parent_id);
};

#endif