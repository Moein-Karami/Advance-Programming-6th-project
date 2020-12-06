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
ob.push_back(jsonBuilder.addContainerToArray(arr[0],"object"));
arr.push_back(jsonBuilder.addContainerToArray(arr[0],"array"));
jsonBuilder.print(ob[0]);
jsonBuilder.addIntegerToArray(arr[0],4);
ob.push_back(jsonBuilder.addContainerToObject(ob[0],"zt","object"));
jsonBuilder.addStringToObject(ob[2],"zs","zs");
ob.push_back(jsonBuilder.addContainerToObject(ob[0],"zr","object"));
jsonBuilder.print(ob[1]);
jsonBuilder.addIntegerToObject(ob[2],"zp",529);
arr.push_back(jsonBuilder.addContainerToArray(arr[0],"array"));
jsonBuilder.addStringToObject(ob[1],"zn","zn");
jsonBuilder.addIntegerToArray(arr[2],562);
jsonBuilder.print(ob[0]);
jsonBuilder.addStringToObject(ob[3],"zk","zk");
arr.push_back(jsonBuilder.addContainerToArray(arr[1],"array"));
arr.push_back(jsonBuilder.addContainerToObject(ob[2],"zi","array"));
arr.push_back(jsonBuilder.addContainerToArray(arr[3],"array"));
jsonBuilder.addStringToArray(arr[1],"zg");
arr.push_back(jsonBuilder.addContainerToArray(arr[5],"array"));
ob.push_back(jsonBuilder.addContainerToObject(ob[3],"ze","object"));
jsonBuilder.addStringToObject(ob[4],"zd","zd");
jsonBuilder.addStringToArray(arr[0],"zc");
jsonBuilder.addStringToObject(ob[2],"zb","zb");

}
