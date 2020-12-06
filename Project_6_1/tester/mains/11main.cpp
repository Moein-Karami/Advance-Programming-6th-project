#include "JsonBuilder.hpp"
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> arr,ob;
ob.push_back(0);
JsonBuilder jsonBuilder;
jsonBuilder.addIntegerToObject(ob[0],"zz",973);
jsonBuilder.addStringToObject(ob[0],"zy","zy");
jsonBuilder.addStringToObject(ob[0],"zx","zx");
jsonBuilder.addStringToObject(ob[0],"zw","zw");
jsonBuilder.print(ob[0]);
jsonBuilder.addStringToObject(ob[0],"zu","zu");
jsonBuilder.addIntegerToObject(ob[0],"zt",1182);
jsonBuilder.print(ob[0]);

}
