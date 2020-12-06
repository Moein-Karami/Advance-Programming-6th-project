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
jsonBuilder.addIntegerToObject(ob[0],"zx",244);
arr.push_back(jsonBuilder.addContainerToObject(ob[0],"zw","array"));
jsonBuilder.addStringToArray(arr[1],"zv");
jsonBuilder.addIntegerToArray(arr[1],682);
jsonBuilder.addStringToObject(ob[0],"zt","zt");
jsonBuilder.addIntegerToArray(arr[1],473);
jsonBuilder.print(ob[0]);
jsonBuilder.addStringToArray(arr[1],"zq");

}
