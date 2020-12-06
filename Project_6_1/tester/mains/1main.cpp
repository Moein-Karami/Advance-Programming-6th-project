#include "JsonBuilder.hpp"
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> arr,ob;
ob.push_back(0);
JsonBuilder jsonBuilder;
arr.push_back(jsonBuilder.addContainerToObject(ob[0],"zz","array"));
jsonBuilder.addStringToObject(ob[0],"zy","zy");
ob.push_back(jsonBuilder.addContainerToObject(ob[0],"zx","object"));
jsonBuilder.addStringToObject(ob[0],"zw","zw");
jsonBuilder.addIntegerToObject(ob[0],"zv",776);
jsonBuilder.addStringToArray(arr[0],"zu");
jsonBuilder.addIntegerToObject(ob[1],"zt",462);
jsonBuilder.addStringToObject(ob[1],"zs","zs");
jsonBuilder.print(ob[1]);
jsonBuilder.addIntegerToArray(arr[0],151);
ob.push_back(jsonBuilder.addContainerToObject(ob[0],"zp","object"));
arr.push_back(jsonBuilder.addContainerToArray(arr[0],"array"));
jsonBuilder.addIntegerToObject(ob[0],"zn",1137);
jsonBuilder.addIntegerToObject(ob[0],"zm",745);
jsonBuilder.addStringToArray(arr[1],"zl");
jsonBuilder.print(ob[0]);
jsonBuilder.addIntegerToArray(arr[0],703);
jsonBuilder.addStringToObject(ob[0],"zi","zi");
jsonBuilder.addIntegerToArray(arr[1],96);
ob.push_back(jsonBuilder.addContainerToArray(arr[0],"object"));
jsonBuilder.addStringToObject(ob[2],"zf","zf");
jsonBuilder.addStringToArray(arr[1],"ze");
arr.push_back(jsonBuilder.addContainerToArray(arr[0],"array"));
jsonBuilder.addIntegerToArray(arr[2],985);
ob.push_back(jsonBuilder.addContainerToArray(arr[2],"object"));
jsonBuilder.addIntegerToArray(arr[0],399);
ob.push_back(jsonBuilder.addContainerToArray(arr[2],"object"));
jsonBuilder.addIntegerToArray(arr[0],924);
ob.push_back(jsonBuilder.addContainerToObject(ob[2],"yx","object"));
jsonBuilder.print(ob[2]);
jsonBuilder.addIntegerToArray(arr[1],937);
arr.push_back(jsonBuilder.addContainerToObject(ob[3],"yu","array"));
jsonBuilder.addIntegerToArray(arr[0],1018);

}
