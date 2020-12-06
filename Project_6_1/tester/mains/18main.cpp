#include "JsonBuilder.hpp"
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> arr,ob;
ob.push_back(0);
JsonBuilder jsonBuilder;
jsonBuilder.print(ob[0]);
jsonBuilder.addStringToObject(ob[0],"zy","zy");
jsonBuilder.print(ob[0]);
ob.push_back(jsonBuilder.addContainerToObject(ob[0],"zw","object"));
jsonBuilder.print(ob[0]);
jsonBuilder.addIntegerToObject(ob[0],"zu",515);
ob.push_back(jsonBuilder.addContainerToObject(ob[0],"zt","object"));
jsonBuilder.print(ob[2]);
jsonBuilder.addIntegerToObject(ob[1],"zr",163);
jsonBuilder.addStringToObject(ob[2],"zq","zq");

}
