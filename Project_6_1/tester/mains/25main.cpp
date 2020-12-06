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
jsonBuilder.addStringToArray(arr[0],"zx");
jsonBuilder.print(ob[0]);
jsonBuilder.addIntegerToObject(ob[0],"zv",352);
jsonBuilder.print(ob[0]);
jsonBuilder.addIntegerToArray(arr[0],528);
jsonBuilder.addStringToArray(arr[0],"zs");
jsonBuilder.addStringToArray(arr[0],"zr");
jsonBuilder.addStringToObject(ob[0],"zq","zq");
jsonBuilder.addStringToArray(arr[0],"zp");
jsonBuilder.addIntegerToArray(arr[0],286);
jsonBuilder.addStringToObject(ob[0],"zn","zn");
ob.push_back(jsonBuilder.addContainerToObject(ob[0],"zm","object"));
jsonBuilder.addStringToArray(arr[0],"zl");
jsonBuilder.addIntegerToArray(arr[0],574);
jsonBuilder.addStringToArray(arr[0],"zj");
ob.push_back(jsonBuilder.addContainerToArray(arr[0],"object"));
arr.push_back(jsonBuilder.addContainerToObject(ob[1],"zh","array"));
ob.push_back(jsonBuilder.addContainerToObject(ob[2],"zg","object"));
jsonBuilder.addIntegerToArray(arr[1],538);

}
