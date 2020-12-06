#include "JsonBuilder.hpp"
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> arr,ob;
ob.push_back(0);
JsonBuilder jsonBuilder;
jsonBuilder.addIntegerToObject(ob[0],"zz",558);
jsonBuilder.print(ob[0]);
jsonBuilder.addIntegerToObject(ob[0],"zx",640);
jsonBuilder.addIntegerToObject(ob[0],"zw",465);
jsonBuilder.print(ob[0]);
jsonBuilder.print(ob[0]);
ob.push_back(jsonBuilder.addContainerToObject(ob[0],"zt","object"));
jsonBuilder.print(ob[0]);
jsonBuilder.addStringToObject(ob[0],"zr","zr");
jsonBuilder.addStringToObject(ob[1],"zq","zq");
jsonBuilder.addStringToObject(ob[1],"zp","zp");
ob.push_back(jsonBuilder.addContainerToObject(ob[0],"zo","object"));
jsonBuilder.addIntegerToObject(ob[2],"zn",479);
jsonBuilder.addIntegerToObject(ob[0],"zm",752);
ob.push_back(jsonBuilder.addContainerToObject(ob[1],"zl","object"));
jsonBuilder.addIntegerToObject(ob[2],"zk",1134);

}
