#include "Bot.hpp"
#include "Channel.hpp"
#include <fstream>

using namespace std;

EchoBot::EchoBot(Channel* _dest_channel)
	: dest_channel(_dest_channel) {}

void EchoBot::update(string messege)
{
	dest_channel -> write_messege(messege);
}

LoggerBot::LoggerBot(string _file_path)
	: file_path(_file_path) {}

void LoggerBot::update(string messege)
{
	ofstream output(file_path, ios::app);
	output << messege << endl;
	output.close();
}

FredBot::FredBot(Channel* _source_channel)
	: source_channel(_source_channel) {}

void FredBot::update(string messege)
{
	if(messege != FRED_INPUT)
		return ;
	source_channel -> write_messege(FRED_OUTPUT);
}

LibrarianBot::LibrarianBot(Channel* _source_channel)
	: source_channel(_source_channel), messege_received(ZERO) {} 

void LibrarianBot::update(string messege)
{
	messege_received ++;
	if(messege_received >= LIBRARIAN_MAX_MESSEGE)
	{
		messege_received = ZERO;
		source_channel -> write_messege(LIBRARIAN_MESSEGE);
	}
}