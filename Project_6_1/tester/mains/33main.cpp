#include "JsonBuilder.hpp"
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> arr,ob;
ob.push_back(0);
JsonBuilder jsonBuilder;
jsonBuilder.addIntegerToObject(ob[0],"zz",1231);
jsonBuilder.addIntegerToObject(ob[0],"zy",783);
jsonBuilder.addIntegerToObject(ob[0],"zx",585);
jsonBuilder.addStringToObject(ob[0],"zw","zw");
jsonBuilder.print(ob[0]);
jsonBuilder.addStringToObject(ob[0],"zu","zu");
ob.push_back(jsonBuilder.addContainerToObject(ob[0],"zt","object"));
jsonBuilder.print(ob[0]);
jsonBuilder.addStringToObject(ob[1],"zr","zr");

}
