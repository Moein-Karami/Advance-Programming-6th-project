#include "JsonBuilder.hpp"
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> arr,ob;
ob.push_back(0);
JsonBuilder jsonBuilder;
ob.push_back(jsonBuilder.addContainerToObject(ob[0],"zz","object"));
ob.push_back(jsonBuilder.addContainerToObject(ob[1],"zy","object"));
jsonBuilder.print(ob[0]);
jsonBuilder.addStringToObject(ob[0],"zw","zw");
jsonBuilder.print(ob[1]);
jsonBuilder.addIntegerToObject(ob[1],"zu",103);
jsonBuilder.print(ob[1]);

}
