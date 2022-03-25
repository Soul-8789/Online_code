#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main()
{
   unordered_map<string,int> umap;
   umap["jay"]=22;
   umap["bheem"]=33;
   umap["Hero"]=44;
   umap["zio"]=42;
   for(auto x: umap)
   {
   	cout<< x.first<<" "<<x.second<<endl;
   }
   /*
   for(auto it=umap.begin();it!=umap.end();it++)
   {
   	cout<< it->first<<" "<< it->second<<"\n";
   }
   */
   if(umap.find())
   return 0;
}