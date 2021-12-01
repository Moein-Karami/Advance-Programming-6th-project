#include "Thing.hpp"
#include "GeneralDefines.hpp"

using namespace std;

void Thing::print(int number_of_needed_tabs)
{
	printTabs(number_of_needed_tabs);
	if(name != BLANK)
		cout << QUOTATION_MARK << name << QUOTATION_MARK << COLON;
}

void Thing::printTabs(int number_of_needed_tabs)
{
	for(int i = ZERO; i < number_of_needed_tabs; i++)
		cout << TAB;
}