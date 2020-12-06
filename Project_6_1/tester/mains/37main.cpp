#include "JsonBuilder.hpp"
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> arr,ob;
ob.push_back(0);
JsonBuilder jsonBuilder;
jsonBuilder.addIntegerToObject(ob[0],"zz",946);
arr.push_back(jsonBuilder.addContainerToObject(ob[0],"zy","array"));
jsonBuilder.addIntegerToArray(arr[0],138);
jsonBuilder.addStringToObject(ob[0],"zw","zw");
jsonBuilder.addIntegerToArray(arr[0],176);
arr.push_back(jsonBuilder.addContainerToArray(arr[0],"array"));
jsonBuilder.addStringToArray(arr[0],"zt");
jsonBuilder.addIntegerToObject(ob[0],"zs",471);

}
