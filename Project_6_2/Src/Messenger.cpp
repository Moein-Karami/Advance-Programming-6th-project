#include "Messenger.hpp"
#include "Bot.hpp"
#include "Channel.hpp"
#include "MyException.hpp"

using namespace std;

void Messenger::add_channel(string channel_name)
{
	if(name_to_channel[channel_name] != NULL)
		throw DuplicateName(DUPLICATE_NAME);
	Channel* new_channel = new Channel;
	name_to_channel[channel_name] = new_channel;
	channels.push_back(new_channel);
}

void Messenger::add_echo_bot(string src_name, string dest_name)
{
	if(src_name == dest_name)
		throw EchoLoop(SAME_NAME);
	if(name_to_channel[src_name] == NULL || name_to_channel[dest_name] == NULL)
		throw WrongName(WRONG_NAME);
	EchoBot* new_bot = new EchoBot(name_to_channel[dest_name]);
	Bot* new_observer = new_bot;
	name_to_channel[src_name] -> add_observer(new_bot);
}

void Messenger::add_logger_bot(string file_path)
{
	LoggerBot* new_bot = new LoggerBot(file_path);
	Bot* new_observer = new_bot;
	for(auto channel : channels)
		channel -> add_observer(new_observer);
}

void Messenger::add_fred_bot(string src_name)
{
	if(name_to_channel[src_name] == NULL)
		throw WrongName(WRONG_NAME);
	FredBot* new_bot = new FredBot(name_to_channel[src_name]);
	Bot* new_observer = new_bot;
	name_to_channel[src_name] -> add_observer(new_observer);
}

void Messenger::add_librarian_bot(string src_name)
{
	if(name_to_channel[src_name] == NULL)
		throw WrongName(WRONG_NAME);
	LibrarianBot* new_bot = new LibrarianBot(name_to_channel[src_name]);
	Bot* new_observer = new_bot;
	name_to_channel[src_name] -> add_observer(new_observer);
}

void Messenger::tell(string channel_name, string messege)
{
	if(name_to_channel[channel_name] == NULL)
		throw WrongName(WRONG_NAME);
	name_to_channel[channel_name] -> write_messege(messege);
}