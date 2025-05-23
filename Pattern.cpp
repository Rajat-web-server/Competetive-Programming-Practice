#include <iostream>
using namespace std;

void Pattern_1()
{
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      cout << "*" << " ";
    }
    cout << endl;
  }
}

void Pattern_2()
{
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}

void Pattern_3()
{
  for (int i = 1; i < 5; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << j << " ";
    }
    cout << endl;
  }
}

void Pattern_4()
{
  for (int i = 1; i < 5; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << i << " ";
    }
    cout << endl;
  }
}

void Pattern_5()
{
  for (int i = 1; i < 5; i++)
  {
    for (int j = i; j < 5; j++) /* for (int j =0;j<n-i+1;j++)  alternate*/
    {
      cout << "* ";
    }
    cout << endl;
  }
}

void Pattern_6()
{
  for (int i = 1; i < 5; i++)
  {
    for (int j = i; j < 5; j++) /* for (int j =0;j<n-i+1;j++)  alternate*/
    {
      cout << j << " ";
    }
    cout << endl;
  }
}

void Pattern_7()
{
  for (int n = 0; n<5; n++)
  {
    //space
    for (int m=0;m<n-1+1;m++)
    {
      cout<<" ";
    }
      //Stars
      for (int j = 1; j <= 2 * n - 1; j++)
      {
        cout << "* ";
      }
      //space
    for (int o=0;o<n-1+1;o++)
    {
      cout<<" ";
    }
    
  }
  
}

int main()
{
  Pattern_7();
}
