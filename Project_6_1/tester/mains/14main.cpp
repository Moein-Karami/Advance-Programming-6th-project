#include "JsonBuilder.hpp"
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> arr,ob;
ob.push_back(0);
JsonBuilder jsonBuilder;
jsonBuilder.print(ob[0]);
jsonBuilder.addStringToObject(ob[0],"zy","zy");
jsonBuilder.print(ob[0]);
arr.push_back(jsonBuilder.addContainerToObject(ob[0],"zw","array"));
jsonBuilder.addIntegerToArray(arr[0],1075);
jsonBuilder.addIntegerToObject(ob[0],"zu",759);
jsonBuilder.addIntegerToObject(ob[0],"zt",195);
jsonBuilder.addIntegerToObject(ob[0],"zs",145);

}
