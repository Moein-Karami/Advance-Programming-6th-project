#include "JsonBuilder.hpp"
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> arr,ob;
ob.push_back(0);
JsonBuilder jsonBuilder;
jsonBuilder.addStringToObject(ob[0],"zz","zz");
jsonBuilder.print(ob[0]);
arr.push_back(jsonBuilder.addContainerToObject(ob[0],"zx","array"));
ob.push_back(jsonBuilder.addContainerToObject(ob[0],"zw","object"));
jsonBuilder.print(ob[1]);
jsonBuilder.addIntegerToObject(ob[1],"zu",246);
jsonBuilder.addIntegerToArray(arr[0],1144);
jsonBuilder.print(ob[1]);
jsonBuilder.print(ob[1]);
jsonBuilder.addStringToObject(ob[0],"zq","zq");
arr.push_back(jsonBuilder.addContainerToObject(ob[1],"zp","array"));
jsonBuilder.addIntegerToArray(arr[0],833);
jsonBuilder.addIntegerToArray(arr[0],909);
jsonBuilder.addIntegerToArray(arr[0],1087);
arr.push_back(jsonBuilder.addContainerToArray(arr[0],"array"));
jsonBuilder.addStringToArray(arr[1],"zk");
arr.push_back(jsonBuilder.addContainerToArray(arr[2],"array"));
arr.push_back(jsonBuilder.addContainerToObject(ob[0],"zi","array"));
jsonBuilder.addIntegerToObject(ob[0],"zh",397);
jsonBuilder.addIntegerToArray(arr[4],1217);
jsonBuilder.addStringToArray(arr[3],"zf");
jsonBuilder.addIntegerToArray(arr[2],139);
jsonBuilder.print(ob[1]);
jsonBuilder.print(ob[0]);
jsonBuilder.addIntegerToObject(ob[0],"zb",1019);
arr.push_back(jsonBuilder.addContainerToArray(arr[3],"array"));
jsonBuilder.addIntegerToObject(ob[1],"yz",54);
jsonBuilder.addIntegerToArray(arr[3],604);

}
