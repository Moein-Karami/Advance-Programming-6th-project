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
arr.push_back(jsonBuilder.addContainerToObject(ob[0],"zx","array"));
jsonBuilder.print(ob[0]);
jsonBuilder.addStringToArray(arr[0],"zv");
jsonBuilder.addIntegerToArray(arr[0],1222);
arr.push_back(jsonBuilder.addContainerToObject(ob[0],"zt","array"));
jsonBuilder.addIntegerToObject(ob[0],"zs",287);
jsonBuilder.print(ob[0]);
jsonBuilder.addIntegerToObject(ob[0],"zq",754);
arr.push_back(jsonBuilder.addContainerToObject(ob[0],"zp","array"));
jsonBuilder.print(ob[0]);
ob.push_back(jsonBuilder.addContainerToArray(arr[0],"object"));
jsonBuilder.addIntegerToArray(arr[1],1209);
ob.push_back(jsonBuilder.addContainerToArray(arr[1],"object"));
jsonBuilder.print(ob[1]);
jsonBuilder.addIntegerToArray(arr[1],52);
jsonBuilder.print(ob[1]);
ob.push_back(jsonBuilder.addContainerToArray(arr[0],"object"));
jsonBuilder.addStringToObject(ob[3],"zg","zg");
jsonBuilder.addStringToObject(ob[3],"zf","zf");
jsonBuilder.addStringToObject(ob[1],"ze","ze");
arr.push_back(jsonBuilder.addContainerToObject(ob[0],"zd","array"));
jsonBuilder.addStringToObject(ob[0],"zc","zc");

}
