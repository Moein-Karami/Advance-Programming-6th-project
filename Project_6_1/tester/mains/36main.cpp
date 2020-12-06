#include "JsonBuilder.hpp"
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> arr,ob;
ob.push_back(0);
JsonBuilder jsonBuilder;
arr.push_back(jsonBuilder.addContainerToObject(ob[0],"zz","array"));
jsonBuilder.print(ob[0]);
jsonBuilder.addStringToArray(arr[0],"zx");
jsonBuilder.addIntegerToArray(arr[0],1201);
ob.push_back(jsonBuilder.addContainerToArray(arr[0],"object"));
jsonBuilder.addStringToObject(ob[0],"zu","zu");
jsonBuilder.print(ob[1]);
jsonBuilder.addStringToArray(arr[0],"zs");
jsonBuilder.print(ob[1]);
jsonBuilder.addIntegerToArray(arr[0],150);
jsonBuilder.addStringToObject(ob[1],"zp","zp");
jsonBuilder.addStringToArray(arr[0],"zo");
jsonBuilder.print(ob[0]);
jsonBuilder.addStringToObject(ob[0],"zm","zm");
jsonBuilder.print(ob[0]);
jsonBuilder.addStringToObject(ob[0],"zk","zk");
jsonBuilder.addStringToObject(ob[1],"zj","zj");
jsonBuilder.addIntegerToArray(arr[0],648);
arr.push_back(jsonBuilder.addContainerToObject(ob[0],"zh","array"));
jsonBuilder.addStringToArray(arr[1],"zg");
jsonBuilder.addIntegerToArray(arr[0],658);
jsonBuilder.addIntegerToArray(arr[1],848);
jsonBuilder.print(ob[1]);
jsonBuilder.addIntegerToArray(arr[0],173);
jsonBuilder.addStringToObject(ob[1],"zb","zb");
arr.push_back(jsonBuilder.addContainerToObject(ob[0],"za","array"));
jsonBuilder.addStringToArray(arr[2],"yz");
jsonBuilder.print(ob[1]);
jsonBuilder.print(ob[1]);
jsonBuilder.print(ob[0]);
jsonBuilder.addStringToArray(arr[2],"yv");
jsonBuilder.print(ob[1]);
ob.push_back(jsonBuilder.addContainerToArray(arr[2],"object"));
jsonBuilder.addStringToArray(arr[1],"ys");

}
