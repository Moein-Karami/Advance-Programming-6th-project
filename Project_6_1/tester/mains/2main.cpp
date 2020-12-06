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
arr.push_back(jsonBuilder.addContainerToArray(arr[0],"array"));
arr.push_back(jsonBuilder.addContainerToArray(arr[1],"array"));
jsonBuilder.addIntegerToArray(arr[2],520);
arr.push_back(jsonBuilder.addContainerToObject(ob[0],"zu","array"));
jsonBuilder.addStringToArray(arr[1],"zt");
jsonBuilder.addIntegerToObject(ob[0],"zs",894);
arr.push_back(jsonBuilder.addContainerToObject(ob[0],"zr","array"));
jsonBuilder.addStringToObject(ob[0],"zq","zq");

}
