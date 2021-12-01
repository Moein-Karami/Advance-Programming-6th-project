#ifndef _BOT_HPP_
#define _BOT_HPP_

#include <iostream>
#include "Defines.hpp"

class Channel;

class Bot
{
	public :
		virtual void update(std::string messege) = ZERO;
};

class EchoBot : public Bot
{
	private :
		Channel* dest_channel;
	public :
		EchoBot(Channel* _dest_channel);
		void update(std::string messege);
};

class LoggerBot : public Bot
{
	private :
		std::string file_path;
	public :
		LoggerBot(std::string _file_path);
		void update(std::string messege);
};

class FredBot : public Bot
{
	private :
		Channel* source_channel;
	public :
		FredBot(Channel* _source_channel);
		void update(std::string messege);

};

class LibrarianBot : public Bot
{
	private :
		Channel* source_channel;
		int messege_received;
	public :
		LibrarianBot(Channel* _source_channel);
		void update(std::string messege);
};



#endif