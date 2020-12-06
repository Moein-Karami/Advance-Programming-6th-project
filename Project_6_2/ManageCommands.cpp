#include "ManageCommands.hpp"
#include "Defines.hpp"
#include <string>
#include "MyException.hpp"

using namespace std;

void ManageCommands::add_chanel(Messenger& messenger)
{
	string name;
	cin>>name;
	messenger.add_channel(name);
}

void ManageCommands::add_bot(Messenger& messenger)
{
	string bot_type;
	cin>>bot_type;
	if(bot_type == ECHO_BOT)
		add_echo_bot(messenger);
	else if(bot_type == LOGGER_BOT)
		add_logger_bot(messenger);
	else if(bot_type == FRED_BOT)
		add_fred_bot(messenger);
	else if(bot_type == LIBRARIAN_BOT)
		add_librarian_bot(messenger);
	else
	{
		string to_be_ignord;
		getline(cin,to_be_ignord);
		throw WrongCommand(WRONG_COMMAND);
	}
}

void ManageCommands::add_echo_bot(Messenger& messenger)
{
	string src_name, dest_name;
	cin>>src_name>>dest_name;
	messenger.add_echo_bot(src_name, dest_name);
}

void ManageCommands::add_logger_bot(Messenger& messenger)
{
	string file_path;
	cin >> file_path;
	messenger.add_logger_bot(file_path);
}

void ManageCommands::add_fred_bot(Messenger& messenger)
{
	string src_name;
	cin>>src_name;
	messenger.add_fred_bot(src_name);
}

void ManageCommands::add_librarian_bot(Messenger& messenger)
{
	string src_name;
	cin>>src_name;
	messenger.add_librarian_bot(src_name);
}

void ManageCommands::tell(Messenger& messenger)
{
	string name;
	cin>>name;
	getchar();
	string messege;
	getline(cin, messege);
	messenger.tell(name, messege);
}

