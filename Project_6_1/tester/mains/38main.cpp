#include "JsonBuilder.hpp"
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> arr,ob;
ob.push_back(0);
JsonBuilder jsonBuilder;
jsonBuilder.print(ob[0]);
jsonBuilder.print(ob[0]);
jsonBuilder.addStringToObject(ob[0],"zx","zx");
jsonBuilder.print(ob[0]);
ob.push_back(jsonBuilder.addContainerToObject(ob[0],"zv","object"));
jsonBuilder.print(ob[0]);
jsonBuilder.print(ob[1]);
arr.push_back(jsonBuilder.addContainerToObject(ob[0],"zs","array"));
jsonBuilder.addIntegerToObject(ob[1],"zr",826);
arr.push_back(jsonBuilder.addContainerToArray(arr[0],"array"));
jsonBuilder.addStringToArray(arr[1],"zp");
jsonBuilder.print(ob[0]);
jsonBuilder.addStringToObject(ob[0],"zn","zn");
jsonBuilder.print(ob[1]);
jsonBuilder.addStringToObject(ob[1],"zl","zl");
arr.push_back(jsonBuilder.addContainerToArray(arr[0],"array"));
jsonBuilder.addIntegerToObject(ob[1],"zj",1187);
jsonBuilder.addStringToObject(ob[1],"zi","zi");
arr.push_back(jsonBuilder.addContainerToArray(arr[2],"array"));
arr.push_back(jsonBuilder.addContainerToObject(ob[1],"zg","array"));
ob.push_back(jsonBuilder.addContainerToArray(arr[4],"object"));
arr.push_back(jsonBuilder.addContainerToObject(ob[0],"ze","array"));
jsonBuilder.addStringToObject(ob[1],"zd","zd");
ob.push_back(jsonBuilder.addContainerToArray(arr[1],"object"));

}
