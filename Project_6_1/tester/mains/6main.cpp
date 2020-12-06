#include "JsonBuilder.hpp"
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> arr,ob;
ob.push_back(0);
JsonBuilder jsonBuilder;
ob.push_back(jsonBuilder.addContainerToObject(ob[0],"zz","object"));
ob.push_back(jsonBuilder.addContainerToObject(ob[0],"zy","object"));
jsonBuilder.addIntegerToObject(ob[1],"zx",708);
jsonBuilder.addIntegerToObject(ob[1],"zw",646);
jsonBuilder.print(ob[0]);
ob.push_back(jsonBuilder.addContainerToObject(ob[2],"zu","object"));
jsonBuilder.print(ob[2]);
ob.push_back(jsonBuilder.addContainerToObject(ob[3],"zs","object"));
jsonBuilder.addIntegerToObject(ob[0],"zr",1153);
jsonBuilder.addStringToObject(ob[1],"zq","zq");

}
