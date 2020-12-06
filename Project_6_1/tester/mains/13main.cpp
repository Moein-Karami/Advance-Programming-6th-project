#include "JsonBuilder.hpp"
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> arr,ob;
ob.push_back(0);
JsonBuilder jsonBuilder;
jsonBuilder.addIntegerToObject(ob[0],"zz",843);
jsonBuilder.print(ob[0]);
jsonBuilder.print(ob[0]);
jsonBuilder.print(ob[0]);
ob.push_back(jsonBuilder.addContainerToObject(ob[0],"zv","object"));
jsonBuilder.print(ob[0]);
jsonBuilder.addStringToObject(ob[1],"zt","zt");
jsonBuilder.addStringToObject(ob[0],"zs","zs");
jsonBuilder.print(ob[1]);
ob.push_back(jsonBuilder.addContainerToObject(ob[0],"zq","object"));
jsonBuilder.addIntegerToObject(ob[1],"zp",625);
jsonBuilder.addStringToObject(ob[2],"zo","zo");
jsonBuilder.print(ob[0]);
ob.push_back(jsonBuilder.addContainerToObject(ob[0],"zm","object"));
jsonBuilder.addStringToObject(ob[0],"zl","zl");
jsonBuilder.addIntegerToObject(ob[0],"zk",364);
jsonBuilder.addStringToObject(ob[3],"zj","zj");
jsonBuilder.addIntegerToObject(ob[3],"zi",782);
jsonBuilder.print(ob[0]);

}
