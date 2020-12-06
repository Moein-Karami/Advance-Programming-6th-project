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
arr.push_back(jsonBuilder.addContainerToObject(ob[0],"zx","array"));
ob.push_back(jsonBuilder.addContainerToObject(ob[0],"zw","object"));
jsonBuilder.addStringToArray(arr[0],"zv");
jsonBuilder.addIntegerToObject(ob[0],"zu",583);
jsonBuilder.print(ob[0]);
jsonBuilder.addStringToObject(ob[1],"zs","zs");
jsonBuilder.addIntegerToObject(ob[1],"zr",407);
jsonBuilder.addStringToArray(arr[0],"zq");
jsonBuilder.addIntegerToArray(arr[0],1022);
jsonBuilder.addStringToObject(ob[0],"zo","zo");
jsonBuilder.addIntegerToObject(ob[1],"zn",214);
jsonBuilder.print(ob[0]);
jsonBuilder.addStringToArray(arr[0],"zl");
jsonBuilder.print(ob[0]);
jsonBuilder.addStringToArray(arr[0],"zj");
jsonBuilder.addStringToObject(ob[0],"zi","zi");
jsonBuilder.addIntegerToArray(arr[0],674);
ob.push_back(jsonBuilder.addContainerToObject(ob[1],"zg","object"));
jsonBuilder.addStringToArray(arr[0],"zf");
jsonBuilder.addStringToArray(arr[0],"ze");
jsonBuilder.addStringToObject(ob[0],"zd","zd");
jsonBuilder.addStringToArray(arr[0],"zc");
ob.push_back(jsonBuilder.addContainerToArray(arr[0],"object"));
arr.push_back(jsonBuilder.addContainerToArray(arr[0],"array"));
jsonBuilder.addStringToArray(arr[1],"yz");

}
