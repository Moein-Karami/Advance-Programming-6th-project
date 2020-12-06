#include "JsonBuilder.hpp"
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> arr,ob;
ob.push_back(0);
JsonBuilder jsonBuilder;
jsonBuilder.addStringToObject(ob[0],"zz","zz");
jsonBuilder.addIntegerToObject(ob[0],"zy",1143);
ob.push_back(jsonBuilder.addContainerToObject(ob[0],"zx","object"));
jsonBuilder.addIntegerToObject(ob[1],"zw",860);
arr.push_back(jsonBuilder.addContainerToObject(ob[0],"zv","array"));
jsonBuilder.addStringToArray(arr[0],"zu");
jsonBuilder.print(ob[0]);
jsonBuilder.addIntegerToObject(ob[1],"zs",670);
jsonBuilder.addStringToArray(arr[0],"zr");
arr.push_back(jsonBuilder.addContainerToObject(ob[0],"zq","array"));
jsonBuilder.print(ob[1]);
arr.push_back(jsonBuilder.addContainerToObject(ob[0],"zo","array"));
jsonBuilder.addStringToObject(ob[1],"zn","zn");

}
