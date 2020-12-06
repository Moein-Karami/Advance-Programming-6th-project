#include "JsonBuilder.hpp"
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> arr,ob;
ob.push_back(0);
JsonBuilder jsonBuilder;
jsonBuilder.addIntegerToObject(ob[0],"zz",56);
jsonBuilder.addIntegerToObject(ob[0],"zy",55);
ob.push_back(jsonBuilder.addContainerToObject(ob[0],"zx","object"));
jsonBuilder.addStringToObject(ob[1],"zw","zw");
arr.push_back(jsonBuilder.addContainerToObject(ob[0],"zv","array"));
ob.push_back(jsonBuilder.addContainerToObject(ob[1],"zu","object"));
arr.push_back(jsonBuilder.addContainerToArray(arr[0],"array"));
jsonBuilder.addStringToObject(ob[2],"zs","zs");
jsonBuilder.addIntegerToObject(ob[0],"zr",334);
jsonBuilder.addIntegerToArray(arr[0],726);
ob.push_back(jsonBuilder.addContainerToArray(arr[0],"object"));
jsonBuilder.print(ob[1]);
arr.push_back(jsonBuilder.addContainerToObject(ob[3],"zn","array"));
jsonBuilder.addIntegerToArray(arr[0],105);
jsonBuilder.addIntegerToArray(arr[2],840);
jsonBuilder.addIntegerToArray(arr[0],1035);
jsonBuilder.print(ob[0]);
jsonBuilder.addStringToObject(ob[2],"zi","zi");
jsonBuilder.addStringToArray(arr[0],"zh");
jsonBuilder.addStringToArray(arr[0],"zg");
jsonBuilder.addStringToObject(ob[1],"zf","zf");
jsonBuilder.addStringToArray(arr[1],"ze");
ob.push_back(jsonBuilder.addContainerToArray(arr[0],"object"));
arr.push_back(jsonBuilder.addContainerToObject(ob[1],"zc","array"));
jsonBuilder.addIntegerToArray(arr[3],566);
jsonBuilder.addStringToArray(arr[1],"za");
jsonBuilder.addIntegerToArray(arr[3],450);
jsonBuilder.print(ob[1]);
jsonBuilder.addIntegerToArray(arr[1],410);
ob.push_back(jsonBuilder.addContainerToObject(ob[3],"yw","object"));

}
