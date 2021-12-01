#include "JsonBuilder.hpp"
#include "GeneralDefines.hpp"
#include "Container.hpp"
#include "Variable.hpp"
#include "Thing.hpp"
#include "MyExeption.hpp"

using namespace std;

JsonBuilder::JsonBuilder()
{
	last_id = ZERO ;
	containers.push_back(new Object(last_id, MOTHER_OBJECT));
	id_to_object[last_id] = containers[ZERO];
}

int JsonBuilder::nextId()
{
	last_id ++;
	return last_id;
}

void JsonBuilder::checkValidObjectId(int parent_id)
{
	if(id_to_object[parent_id] == NULL)
		throw WrongId(INVALID_ID);
}

void JsonBuilder::checkValidArrayId(int parent_id)
{
	if(id_to_array[parent_id] == NULL)
		throw WrongId(INVALID_ID);
}


void JsonBuilder::addStringToObject(int parent_id, string key, string value)
{
	checkValidObjectId(parent_id);
	id_to_object[parent_id] -> addString(key, value);
}

void JsonBuilder::addIntegerToObject(int parent_id, string key, int value)
{
	checkValidObjectId(parent_id);
	id_to_object[parent_id] -> addInt(key, value);
}

int JsonBuilder::addContainerToObject(int parent_id, string key, string type)
{
	checkValidObjectId(parent_id);
	Container* new_container = id_to_object[parent_id] -> addContainer(nextId(), key, type);
	if(type == OBJECT)
		id_to_object[last_id] = new_container;
	else
		id_to_array[last_id] = new_container;
	return last_id;
}

void JsonBuilder::addStringToArray(int parent_id, string value)
{
	checkValidArrayId(parent_id);
	id_to_array[parent_id] -> addString(BLANK, value);
}

void JsonBuilder::addIntegerToArray(int parent_id, int value)
{
	checkValidArrayId(parent_id);
	id_to_array[parent_id] -> addInt(BLANK, value);
}

int JsonBuilder::addContainerToArray(int parent_id, string type)
{
	checkValidArrayId(parent_id);
	Container* new_container = id_to_array[parent_id] -> addContainer(nextId(), BLANK, type);
	if(type == OBJECT)
		id_to_object[last_id] = new_container;
	else
		id_to_array[last_id] = new_container;
	return last_id;
}

void JsonBuilder::print(int id)
{
	checkValidObjectId(id);
	id_to_object[id] -> printAsFirstContainer();
}