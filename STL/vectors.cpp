#include<iostream>
#include<vector>
using namespace std ;

int main () 
{
   // vector
   int x;
   vector<int> v = {10,20,30,40};
   v.push_back(50);
   cout<<"vector: ";
   for (auto x: v)
    cout<<x <<" ";
   cout<<"\n";


}