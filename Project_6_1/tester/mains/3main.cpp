#include "JsonBuilder.hpp"
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> arr,ob;
ob.push_back(0);
JsonBuilder jsonBuilder;
jsonBuilder.addStringToObject(ob[0],"zz","zz");
ob.push_back(jsonBuilder.addContainerToObject(ob[0],"zy","object"));
jsonBuilder.addIntegerToObject(ob[0],"zx",431);
jsonBuilder.print(ob[1]);
jsonBuilder.addIntegerToObject(ob[1],"zv",547);
jsonBuilder.print(ob[1]);
jsonBuilder.print(ob[0]);

}
