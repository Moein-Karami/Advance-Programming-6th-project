#ifndef _MESSENGER_HPP_
#define _MESSENGER_HPP_

#include <iostream>
#include "Defines.hpp"
#include <map>
#include <string>
#include <vector>
class Channel;

class Messenger
{
	private :
		std::vector <Channel*> channels;
		std:: map <std::string, Channel*> name_to_channel;
	public :
		void add_channel(std::string channel_name);
		void add_echo_bot(std::string src_name, std::string dest_name);
		void add_logger_bot(std::string file_path);
		void add_fred_bot(std::string src_name);
		void add_librarian_bot(std::string src_name);
		void tell(std::string channel_name, std::string messege);
};


#endif