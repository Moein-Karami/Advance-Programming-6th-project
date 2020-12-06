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
jsonBuilder.addStringToObject(ob[0],"zx","zx");
jsonBuilder.addStringToObject(ob[0],"zw","zw");
jsonBuilder.addIntegerToObject(ob[0],"zv",560);
jsonBuilder.addIntegerToObject(ob[0],"zu",404);
arr.push_back(jsonBuilder.addContainerToArray(arr[0],"array"));
jsonBuilder.addStringToObject(ob[0],"zs","zs");
arr.push_back(jsonBuilder.addContainerToArray(arr[0],"array"));
ob.push_back(jsonBuilder.addContainerToArray(arr[1],"object"));
jsonBuilder.print(ob[0]);
jsonBuilder.addStringToArray(arr[1],"zo");
ob.push_back(jsonBuilder.addContainerToObject(ob[0],"zn","object"));
jsonBuilder.addStringToArray(arr[2],"zm");
ob.push_back(jsonBuilder.addContainerToObject(ob[0],"zl","object"));
jsonBuilder.addStringToArray(arr[2],"zk");
jsonBuilder.print(ob[3]);
jsonBuilder.addIntegerToObject(ob[1],"zi",522);

}
