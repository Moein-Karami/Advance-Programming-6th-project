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
jsonBuilder.addStringToObject(ob[1],"zv","zv");
ob.push_back(jsonBuilder.addContainerToArray(arr[0],"object"));
jsonBuilder.print(ob[1]);
ob.push_back(jsonBuilder.addContainerToObject(ob[2],"zs","object"));
jsonBuilder.addStringToArray(arr[0],"zr");
jsonBuilder.addIntegerToArray(arr[0],176);
jsonBuilder.addIntegerToArray(arr[0],906);
arr.push_back(jsonBuilder.addContainerToArray(arr[0],"array"));
jsonBuilder.addStringToObject(ob[0],"zn","zn");
jsonBuilder.addIntegerToArray(arr[0],696);
jsonBuilder.addIntegerToArray(arr[1],125);
jsonBuilder.addIntegerToArray(arr[1],45);
jsonBuilder.addIntegerToObject(ob[0],"zj",798);
jsonBuilder.addStringToArray(arr[1],"zi");
jsonBuilder.addStringToObject(ob[1],"zh","zh");
jsonBuilder.addIntegerToArray(arr[1],235);
jsonBuilder.addStringToObject(ob[0],"zf","zf");
arr.push_back(jsonBuilder.addContainerToArray(arr[1],"array"));
jsonBuilder.addStringToArray(arr[1],"zd");
jsonBuilder.print(ob[3]);
jsonBuilder.addIntegerToArray(arr[0],1200);
jsonBuilder.print(ob[1]);
ob.push_back(jsonBuilder.addContainerToArray(arr[0],"object"));
jsonBuilder.addIntegerToArray(arr[2],846);
jsonBuilder.addStringToArray(arr[0],"yx");
jsonBuilder.addStringToArray(arr[2],"yw");
ob.push_back(jsonBuilder.addContainerToObject(ob[1],"yv","object"));
jsonBuilder.print(ob[2]);
jsonBuilder.addIntegerToArray(arr[0],197);
jsonBuilder.addStringToArray(arr[0],"ys");

}
