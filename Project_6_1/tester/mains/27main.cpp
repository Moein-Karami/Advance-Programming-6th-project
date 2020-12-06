#include "JsonBuilder.hpp"
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> arr,ob;
ob.push_back(0);
JsonBuilder jsonBuilder;
arr.push_back(jsonBuilder.addContainerToObject(ob[0],"zz","array"));
jsonBuilder.addStringToArray(arr[0],"zy");
jsonBuilder.addIntegerToArray(arr[0],166);
jsonBuilder.addStringToObject(ob[0],"zw","zw");
jsonBuilder.addStringToArray(arr[0],"zv");
jsonBuilder.addIntegerToObject(ob[0],"zu",48);
jsonBuilder.addIntegerToObject(ob[0],"zt",409);
ob.push_back(jsonBuilder.addContainerToObject(ob[0],"zs","object"));
jsonBuilder.addStringToObject(ob[1],"zr","zr");
jsonBuilder.addIntegerToObject(ob[0],"zq",1050);
jsonBuilder.addIntegerToArray(arr[0],882);
jsonBuilder.print(ob[0]);
arr.push_back(jsonBuilder.addContainerToObject(ob[1],"zn","array"));
jsonBuilder.print(ob[1]);
jsonBuilder.print(ob[1]);
jsonBuilder.print(ob[0]);
jsonBuilder.addIntegerToObject(ob[0],"zj",1200);
ob.push_back(jsonBuilder.addContainerToObject(ob[1],"zi","object"));
arr.push_back(jsonBuilder.addContainerToObject(ob[2],"zh","array"));
ob.push_back(jsonBuilder.addContainerToObject(ob[1],"zg","object"));
ob.push_back(jsonBuilder.addContainerToObject(ob[2],"zf","object"));

}
