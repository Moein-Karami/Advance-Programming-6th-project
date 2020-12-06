#include "Channel.hpp"
#include "Bot.hpp"

using namespace std;

void Channel::write_messege(string messege)
{
	for(auto observer : observers)
		observer -> update(messege);
}

void Channel::add_observer(Bot* observer)
{
	observers.push_back(observer);
}