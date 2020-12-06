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
ob.push_back(jsonBuilder.addContainerToObject(ob[0],"zx","object"));
jsonBuilder.addStringToObject(ob[1],"zw","zw");
jsonBuilder.print(ob[1]);
jsonBuilder.addStringToObject(ob[0],"zu","zu");
ob.push_back(jsonBuilder.addContainerToObject(ob[0],"zt","object"));
jsonBuilder.addStringToObject(ob[2],"zs","zs");
jsonBuilder.print(ob[0]);
jsonBuilder.addStringToObject(ob[2],"zq","zq");
jsonBuilder.addStringToObject(ob[2],"zp","zp");
jsonBuilder.addStringToObject(ob[2],"zo","zo");
ob.push_back(jsonBuilder.addContainerToObject(ob[0],"zn","object"));
arr.push_back(jsonBuilder.addContainerToObject(ob[0],"zm","array"));
jsonBuilder.addStringToObject(ob[0],"zl","zl");
arr.push_back(jsonBuilder.addContainerToObject(ob[1],"zk","array"));
jsonBuilder.addIntegerToArray(arr[1],359);
arr.push_back(jsonBuilder.addContainerToObject(ob[1],"zi","array"));
ob.push_back(jsonBuilder.addContainerToArray(arr[0],"object"));
jsonBuilder.addStringToArray(arr[1],"zg");

}
