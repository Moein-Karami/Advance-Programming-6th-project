#ifndef _CHANNEL_HPP_
#define _CHANNEL_HPP_

#include <iostream>
#include "Channel.hpp"
#include "Defines.hpp"
#include <vector>
#include <string>

class Bot;

class Channel 
{
	private :
		std::vector<Bot*> observers;
	public :
		void write_messege(std::string messege);
		void add_observer(Bot* observer);
};
#endif