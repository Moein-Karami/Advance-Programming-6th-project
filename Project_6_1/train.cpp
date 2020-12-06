#include <iostream>
#include <vector>
#include <map>
using namespace std;

class A 
{
	private :
		int a;
	public :
		A(int x=0)
			:a(x)
		{}
	virtual void print() = 0 ;
};

class B : public A
{
	private :
		int b;
	public :
		//B():A(5) {b=5;}
};

class C : public B
{
	public :
		void print()
		{
			cout<<"SUCC"<<endl;
		}
};

int main()
{
	map<int,B*> mp;
	if(mp[0]==NULL)
		cout<<"YES"<<endl;
}
