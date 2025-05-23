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
    for (int j = i; j < 5; j++)   /* for (int j =0;j<n-i+1;j++)  alternate*/
    {
      cout <<"* ";
    }
    cout << endl;
  }
}

void Pattern_6()
{
  for (int i = 1; i < 5; i++)
  {
    for (int j = i; j < 5; j++)   /* for (int j =0;j<n-i+1;j++)  alternate*/
    {
      cout <<j<<" ";
    }
    cout << endl;
  }
}

int main()
{
  Pattern_6();
}
