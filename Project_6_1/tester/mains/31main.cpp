#include "JsonBuilder.hpp"
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> arr,ob;
ob.push_back(0);
JsonBuilder jsonBuilder;
arr.push_back(jsonBuilder.addContainerToObject(ob[0],"zz","array"));
jsonBuilder.addIntegerToObject(ob[0],"zy",1070);
jsonBuilder.print(ob[0]);
jsonBuilder.addIntegerToObject(ob[0],"zw",339);
jsonBuilder.print(ob[0]);
jsonBuilder.addIntegerToObject(ob[0],"zu",883);
jsonBuilder.print(ob[0]);
jsonBuilder.addStringToObject(ob[0],"zs","zs");
jsonBuilder.addStringToObject(ob[0],"zr","zr");
arr.push_back(jsonBuilder.addContainerToArray(arr[0],"array"));
jsonBuilder.addStringToArray(arr[1],"zp");
jsonBuilder.addIntegerToArray(arr[1],141);
jsonBuilder.print(ob[0]);
jsonBuilder.addStringToArray(arr[0],"zm");

}
