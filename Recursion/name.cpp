#include<iostream>
using namespace std;

void name(int i,int n)
{
    if(i>n)//Base condition
    {
      return ;  
    }
        
   cout<<"Henry"<<endl;
   name(i+1,n);
}

int main ()
{
    int n;
    cin>>n;
    name(1,n);
    return 0;
}

/* Here :
time Complexity-->O(n)
Space Complexity-->O(n) */