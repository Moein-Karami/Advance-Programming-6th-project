#include<bits/stdc++.h>
#include <chrono>
#include <thread>
using namespace std;

int main()
{
	using namespace std::this_thread;
	using namespace std::chrono;
	sleep_for(nanoseconds(1000000000));
	cout<<"#include \"JsonBuilder.hpp\""<<endl<<"#include<bits/stdc++.h>\nusing namespace std;\n"<<"int main()\n{\n";
	cout<<"vector<int> arr,ob;"<<endl<<"ob.push_back(0);\n";
	cout<<"JsonBuilder jsonBuilder;"<<endl;
	int arr=0,ob=1;
	vector<string> names;
	for(char i='a';i<='z';i++)
	{
		for(char j='a';j<='z';j++)
		{
			string s="\"";
			s+=i;
			s+=j;
			s+="\"";
			names.push_back(s);
		}
	}
	srand(time(0));
	int n=rand()%30+5;
	for(int i=0;i<=n;i++)
	{
		int type=rand()%7;
		if(type==0)
		{
			int rn=rand()%ob;
			cout<<"jsonBuilder.addStringToObject("<<"ob["<<rn<<"]"<<","<<names.back()<<","<<names.back()<<");\n";
		}
		else if(type==1)
		{
			int rn=rand()%ob;
			cout<<"jsonBuilder.addIntegerToObject("<<"ob["<<rn<<"]"<<","<<names.back()<<","<<rand()%1234<<");\n";
		}
		else if(type==2)
		{

			int rn=rand()%ob;
			int tp=rand()%2;
			if(tp)
			{
				arr++;
				cout<<"arr.push_back(jsonBuilder.addContainerToObject("<<"ob["<<rn<<"]"<<","<<names.back()<<","<<"\"array\""<<"));\n";
			}
			else
			{
				ob++;
				cout<<"ob.push_back(jsonBuilder.addContainerToObject("<<"ob["<<rn<<"]"<<","<<names.back()<<","<<"\"object\""<<"));\n";
			}
		}
		else if(type==6)
		{
			int rn=rand()%ob;
			cout<<"jsonBuilder.print(ob["<<rn<<"]);\n";
		}
		else
		{
			if(arr==0)
				continue;
			if(type==3)
			{
				int rn=rand()%arr;
				cout<<"jsonBuilder.addStringToArray("<<"arr["<<rn<<"]"<<","<<names.back()<<");\n";
			}
			else if(type==4)
			{
				int rn=rand()%arr;
				cout<<"jsonBuilder.addIntegerToArray("<<"arr["<<rn<<"]"<<","<<rand()%1234<<");\n";
			}
			else
			{
				int rn=rand()%arr;
				int tp=rand()%2;
				if(tp)
				{
					arr++;
					cout<<"arr.push_back(jsonBuilder.addContainerToArray("<<"arr["<<rn<<"]"<<","<<"\"array\""<<"));\n";
				}
				else
				{
					ob++;
					cout<<"ob.push_back(jsonBuilder.addContainerToArray("<<"arr["<<rn<<"]"<<","<<"\"object\""<<"));\n";
				}
			}
		}
		names.pop_back();
	}

	cout<<"\n}"<<endl;
}