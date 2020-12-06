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
arr.push_back(jsonBuilder.addContainerToArray(arr[0],"array"));
ob.push_back(jsonBuilder.addContainerToObject(ob[0],"zw","object"));
jsonBuilder.addStringToArray(arr[1],"zv");

}
