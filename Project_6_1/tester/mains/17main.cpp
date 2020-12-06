#include "JsonBuilder.hpp"
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> arr,ob;
ob.push_back(0);
JsonBuilder jsonBuilder;
jsonBuilder.addIntegerToObject(ob[0],"zz",821);
jsonBuilder.addIntegerToObject(ob[0],"zy",905);
jsonBuilder.print(ob[0]);
jsonBuilder.addStringToObject(ob[0],"zw","zw");
jsonBuilder.addStringToObject(ob[0],"zv","zv");
ob.push_back(jsonBuilder.addContainerToObject(ob[0],"zu","object"));
jsonBuilder.addStringToObject(ob[0],"zt","zt");
jsonBuilder.addStringToObject(ob[0],"zs","zs");
jsonBuilder.addStringToObject(ob[0],"zr","zr");
arr.push_back(jsonBuilder.addContainerToObject(ob[0],"zq","array"));
jsonBuilder.addIntegerToObject(ob[0],"zp",703);
ob.push_back(jsonBuilder.addContainerToObject(ob[1],"zo","object"));
ob.push_back(jsonBuilder.addContainerToArray(arr[0],"object"));
ob.push_back(jsonBuilder.addContainerToObject(ob[2],"zm","object"));
jsonBuilder.addIntegerToArray(arr[0],433);
jsonBuilder.addStringToObject(ob[4],"zk","zk");
jsonBuilder.addStringToArray(arr[0],"zj");
jsonBuilder.addStringToArray(arr[0],"zi");
arr.push_back(jsonBuilder.addContainerToArray(arr[0],"array"));
jsonBuilder.print(ob[3]);
jsonBuilder.print(ob[3]);
jsonBuilder.addIntegerToObject(ob[3],"ze",773);
jsonBuilder.addStringToObject(ob[0],"zd","zd");
jsonBuilder.addStringToObject(ob[4],"zc","zc");
jsonBuilder.print(ob[2]);

}
