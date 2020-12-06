#include "JsonBuilder.hpp"
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> arr,ob;
ob.push_back(0);
JsonBuilder jsonBuilder;
jsonBuilder.addStringToObject(ob[0],"zz","zz");
arr.push_back(jsonBuilder.addContainerToObject(ob[0],"zy","array"));
jsonBuilder.addStringToArray(arr[0],"zx");
ob.push_back(jsonBuilder.addContainerToArray(arr[0],"object"));
jsonBuilder.addIntegerToArray(arr[0],756);
jsonBuilder.addIntegerToArray(arr[0],720);
arr.push_back(jsonBuilder.addContainerToObject(ob[0],"zt","array"));
jsonBuilder.addIntegerToArray(arr[0],1143);
jsonBuilder.addStringToObject(ob[0],"zr","zr");
arr.push_back(jsonBuilder.addContainerToArray(arr[0],"array"));
jsonBuilder.addStringToArray(arr[2],"zp");
jsonBuilder.addIntegerToArray(arr[0],599);
ob.push_back(jsonBuilder.addContainerToObject(ob[1],"zn","object"));
jsonBuilder.addIntegerToArray(arr[2],218);
jsonBuilder.addIntegerToObject(ob[1],"zl",596);

}
