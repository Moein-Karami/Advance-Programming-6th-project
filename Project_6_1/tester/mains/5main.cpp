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
arr.push_back(jsonBuilder.addContainerToObject(ob[0],"zx","array"));
ob.push_back(jsonBuilder.addContainerToArray(arr[0],"object"));
jsonBuilder.addStringToArray(arr[0],"zv");
arr.push_back(jsonBuilder.addContainerToObject(ob[0],"zu","array"));
jsonBuilder.addStringToObject(ob[0],"zt","zt");
jsonBuilder.addStringToArray(arr[1],"zs");
jsonBuilder.addIntegerToObject(ob[1],"zr",1);
jsonBuilder.addIntegerToObject(ob[1],"zq",683);

}
