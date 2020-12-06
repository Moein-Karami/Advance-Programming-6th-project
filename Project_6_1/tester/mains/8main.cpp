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
jsonBuilder.addStringToObject(ob[0],"zx","zx");
arr.push_back(jsonBuilder.addContainerToObject(ob[0],"zw","array"));

}
