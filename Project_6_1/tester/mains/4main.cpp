#include "JsonBuilder.hpp"
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> arr,ob;
ob.push_back(0);
JsonBuilder jsonBuilder;
ob.push_back(jsonBuilder.addContainerToObject(ob[0],"zz","object"));
arr.push_back(jsonBuilder.addContainerToObject(ob[0],"zy","array"));
jsonBuilder.addStringToObject(ob[0],"zx","zx");
jsonBuilder.addStringToArray(arr[0],"zw");
arr.push_back(jsonBuilder.addContainerToObject(ob[0],"zv","array"));
jsonBuilder.addIntegerToObject(ob[1],"zu",1145);
jsonBuilder.addStringToArray(arr[1],"zt");
jsonBuilder.addStringToObject(ob[0],"zs","zs");

}
