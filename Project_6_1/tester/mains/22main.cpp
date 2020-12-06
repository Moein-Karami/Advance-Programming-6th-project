#include "JsonBuilder.hpp"
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> arr,ob;
ob.push_back(0);
JsonBuilder jsonBuilder;
jsonBuilder.addIntegerToObject(ob[0],"zz",444);
jsonBuilder.addIntegerToObject(ob[0],"zy",226);
jsonBuilder.addStringToObject(ob[0],"zx","zx");
jsonBuilder.addIntegerToObject(ob[0],"zw",1096);
ob.push_back(jsonBuilder.addContainerToObject(ob[0],"zv","object"));
jsonBuilder.addStringToObject(ob[0],"zu","zu");
jsonBuilder.addIntegerToObject(ob[0],"zt",954);
ob.push_back(jsonBuilder.addContainerToObject(ob[1],"zs","object"));

}
