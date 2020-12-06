#include "JsonBuilder.hpp"
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> arr,ob;
ob.push_back(0);
JsonBuilder jsonBuilder;
jsonBuilder.addIntegerToObject(ob[0],"zz",1134);
ob.push_back(jsonBuilder.addContainerToObject(ob[0],"zy","object"));
jsonBuilder.addStringToObject(ob[1],"zx","zx");
ob.push_back(jsonBuilder.addContainerToObject(ob[1],"zw","object"));
jsonBuilder.print(ob[1]);
jsonBuilder.print(ob[1]);
jsonBuilder.addIntegerToObject(ob[0],"zt",1114);
jsonBuilder.print(ob[2]);
jsonBuilder.print(ob[2]);
jsonBuilder.print(ob[1]);
jsonBuilder.print(ob[2]);
jsonBuilder.addStringToObject(ob[2],"zo","zo");
jsonBuilder.addStringToObject(ob[2],"zn","zn");
jsonBuilder.addIntegerToObject(ob[0],"zm",195);
jsonBuilder.print(ob[2]);
jsonBuilder.addIntegerToObject(ob[0],"zk",1104);
arr.push_back(jsonBuilder.addContainerToObject(ob[2],"zj","array"));
jsonBuilder.print(ob[1]);
jsonBuilder.print(ob[0]);
jsonBuilder.addIntegerToArray(arr[0],19);
ob.push_back(jsonBuilder.addContainerToArray(arr[0],"object"));

}
