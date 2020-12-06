#include "JsonBuilder.hpp"
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> arr,ob;
ob.push_back(0);
JsonBuilder jsonBuilder;
jsonBuilder.addStringToObject(ob[0],"zz","zz");
jsonBuilder.print(ob[0]);
ob.push_back(jsonBuilder.addContainerToObject(ob[0],"zx","object"));
arr.push_back(jsonBuilder.addContainerToObject(ob[0],"zw","array"));
jsonBuilder.addStringToArray(arr[0],"zv");
jsonBuilder.addStringToObject(ob[0],"zu","zu");
jsonBuilder.addIntegerToArray(arr[0],417);
jsonBuilder.addStringToObject(ob[1],"zs","zs");
jsonBuilder.addIntegerToObject(ob[1],"zr",887);
arr.push_back(jsonBuilder.addContainerToObject(ob[1],"zq","array"));
jsonBuilder.addStringToArray(arr[0],"zp");
ob.push_back(jsonBuilder.addContainerToObject(ob[1],"zo","object"));
jsonBuilder.addStringToArray(arr[0],"zn");
ob.push_back(jsonBuilder.addContainerToArray(arr[1],"object"));
jsonBuilder.addStringToObject(ob[0],"zl","zl");
jsonBuilder.addIntegerToObject(ob[3],"zk",416);
ob.push_back(jsonBuilder.addContainerToArray(arr[0],"object"));

}
