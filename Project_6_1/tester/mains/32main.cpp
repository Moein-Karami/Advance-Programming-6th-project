#include "JsonBuilder.hpp"
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> arr,ob;
ob.push_back(0);
JsonBuilder jsonBuilder;
jsonBuilder.print(ob[0]);
ob.push_back(jsonBuilder.addContainerToObject(ob[0],"zy","object"));
jsonBuilder.addIntegerToObject(ob[1],"zx",1011);
jsonBuilder.addIntegerToObject(ob[0],"zw",1193);
arr.push_back(jsonBuilder.addContainerToObject(ob[1],"zv","array"));
arr.push_back(jsonBuilder.addContainerToObject(ob[0],"zu","array"));
jsonBuilder.addIntegerToObject(ob[0],"zt",678);
jsonBuilder.addIntegerToObject(ob[1],"zs",747);
jsonBuilder.print(ob[0]);
ob.push_back(jsonBuilder.addContainerToArray(arr[0],"object"));
arr.push_back(jsonBuilder.addContainerToObject(ob[1],"zp","array"));
jsonBuilder.print(ob[0]);
jsonBuilder.print(ob[1]);
jsonBuilder.addIntegerToArray(arr[1],478);
ob.push_back(jsonBuilder.addContainerToObject(ob[0],"zl","object"));
jsonBuilder.print(ob[1]);
jsonBuilder.addIntegerToObject(ob[2],"zj",19);
jsonBuilder.addIntegerToArray(arr[2],891);
jsonBuilder.addStringToArray(arr[2],"zh");
jsonBuilder.addIntegerToArray(arr[0],337);
arr.push_back(jsonBuilder.addContainerToObject(ob[1],"zf","array"));

}
