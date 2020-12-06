#include <iostream>
#include "Messenger.hpp"
#include <string>
#include "MyException.hpp"
#include "ManageCommands.hpp"
using namespace std;

int main()
{
	string command, to_be_ignored;
	Messenger messenger;
	ManageCommands manager;
	while(cin>>command)
	{
		try
		{
			if(command == ADD_CHANNEL_COMMAND)
				manager.add_chanel(messenger);
			else if(command == ADD_BOT_COMMAND)
				manager.add_bot(messenger);
			else if(command == TELL_COMMAND)
				manager.tell(messenger);
			else
			{
				cerr<<WRONG_COMMAND;
				getline(cin, to_be_ignored);
			}
		}
		catch(WrongName& error)
		{
			cerr<<error.what();
		}
		catch(DuplicateName& error)
		{
			cerr<<error.what();
		}
		catch(EchoLoop& error)
		{
			cerr<<error.what();
		}
		catch(WrongCommand& error)
		{
			cerr<<error.what();
		}
		catch(exception& error)
		{
			cerr<<error.what();
		}
	}
	return ZERO;
}