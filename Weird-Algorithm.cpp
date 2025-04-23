#include<iostream>
using namespace std;

int main ()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
   
    if(n%2==0)
    {
       float result = n/2;
       cout<<result;
        
    }
    else{
        float result1=(n*3)+1;
        cout<<result1;
  
    }
}