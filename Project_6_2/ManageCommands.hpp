#ifndef _MANAGECOMMANDS_HPP_
#define _MANAGECOMMANDS_HPP_

#include <iostream>
#include "Messenger.hpp"

class ManageCommands
{
	public :
		void add_chanel(Messenger& messenger);
		void add_bot(Messenger& messenger);
		void tell(Messenger& messenger);
		void add_echo_bot(Messenger& messenger);
		void add_logger_bot(Messenger& messenger);
		void add_fred_bot(Messenger& messenger);
		void add_librarian_bot(Messenger& messenger);
};

#endif