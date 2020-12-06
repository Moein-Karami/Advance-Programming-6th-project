#include "JsonBuilder.hpp"
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> arr,ob;
ob.push_back(0);
JsonBuilder jsonBuilder;
jsonBuilder.addIntegerToObject(ob[0],"zz",1021);
jsonBuilder.addIntegerToObject(ob[0],"zy",13);
ob.push_back(jsonBuilder.addContainerToObject(ob[0],"zx","object"));

}
