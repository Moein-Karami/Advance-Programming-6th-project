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
arr.push_back(jsonBuilder.addContainerToObject(ob[0],"zw","array"));
jsonBuilder.addStringToArray(arr[0],"zv");
jsonBuilder.addStringToArray(arr[0],"zu");
jsonBuilder.addStringToObject(ob[0],"zt","zt");
jsonBuilder.addStringToArray(arr[0],"zs");
jsonBuilder.addStringToObject(ob[0],"zr","zr");
jsonBuilder.addStringToArray(arr[0],"zq");
jsonBuilder.addIntegerToArray(arr[0],409);
jsonBuilder.addIntegerToArray(arr[0],945);
jsonBuilder.addStringToArray(arr[0],"zn");
ob.push_back(jsonBuilder.addContainerToArray(arr[0],"object"));
jsonBuilder.addStringToObject(ob[1],"zl","zl");
jsonBuilder.print(ob[0]);
jsonBuilder.addIntegerToObject(ob[1],"zj",233);
ob.push_back(jsonBuilder.addContainerToArray(arr[0],"object"));
jsonBuilder.addIntegerToObject(ob[0],"zh",1187);
jsonBuilder.print(ob[0]);
jsonBuilder.addIntegerToArray(arr[0],406);
jsonBuilder.addStringToObject(ob[2],"ze","ze");
jsonBuilder.print(ob[2]);
arr.push_back(jsonBuilder.addContainerToArray(arr[0],"array"));
jsonBuilder.addIntegerToArray(arr[1],1099);
jsonBuilder.addStringToObject(ob[0],"za","za");
jsonBuilder.addIntegerToObject(ob[2],"yz",892);
jsonBuilder.addStringToObject(ob[2],"yy","yy");

}
