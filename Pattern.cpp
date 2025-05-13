#include<iostream>
using namespace std;

void Pattern_1 ()
{
  for (int i=0;i<4;i++)
  {
    for (int j=0;j<4;j++)
    {
        cout<<"*"<<" ";
    }
    cout<<endl;
  }
}

void Pattern_2 ()
{
  for (int i=0;i<4;i++)
  {
    for (int j=0;j<=i;j++)
    {
      cout<<"* ";
    }
    cout<<endl;
  }
}

void Pattern_3 ()
{
  for (int i=1;i<5;i++)
  {
    for (int j=1;j<=i;j++)
    {
      cout<<j<<" ";
    }
    cout<<endl;
  }
}
int main ()
{
    Pattern_3();
}
