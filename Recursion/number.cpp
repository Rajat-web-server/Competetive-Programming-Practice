#include<iostream>
using namespace std;

void numb(int i, int n)
{
    if(i>n)
    {
        return;
    }
    cout<<i<<endl;
    numb(i+1,n);
}

int main ()
{
    int n;
    cin>>n;
    numb(1,n);
    return 0;
}

/* Here :
Time complexity : O(n);
Space complexity : O(n); */