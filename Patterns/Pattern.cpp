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

void p2()
{
  for (int i = 0; i < 4; i++)

  {

    // space
    for (int m = i; m < 4; m++)
    {
      cout << " ";
    }

    // star
    for (int j = 0; j < (2 * i) + 1; j++)
    {
      cout << "*";
    }

    // space
    for (int m = i; m < 4; m++)
    {
      cout << " ";
    }
    cout << endl;
  }
}

void Pattern_2()
{
  for (int i = 0; i < 4; i++)
  {
    for (int j = i; j <= 4; j++)
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
  for (int i = 0; i < 5; i++)
  {
    // space
    for (int j = 0; j < 5 - i - 1 + 1; j++)
    {
      cout << " ";
    }
    // Stars
    for (int j = 1; j <= 2 * i + 1; j++)
    {
      cout << "*";
    }
    // space
    for (int j = 0; j < 5 - i - 1 + 1; j++)
    {
      cout << " ";
    }
    cout << endl;
  }
}

void pattern8()
{
  for (int i = 0; i < 5; i++)
  {
    // space
    for (int j = 0;j<i;j++)
    {
      cout<<" ";
    }
    
    
    // Stars
    for (int j = 0; j < 2*5 - (2*i+1); j++)
    {
      cout << "*";
    }
    // space
    for (int j = 0; j <i; j++)
    {
      cout << " ";
    }
    cout << endl; 
  }
}

void pattern9()
{
  for(int i=0; i<9;i++)

   if(i>5){
    // space
    for (int j = 0; j < 5 - i - 1 + 1; j++)
    {
      cout << " ";
    }
    // Stars
    for (int j = 1; j <= 2 * i + 1; j++)
    {
      cout << "*";
    }
    // space
    for (int j = 0; j < 5 - i - 1 + 1; j++)
    {
      cout << " ";
    }
    cout << endl;

   }
   else{
    // space
    for (int j = 0;j<i;j++)
    {
      cout<<" ";
    }
    
    
    // Stars
    for (int j = 0; j < 2*5 - (2*i+1); j++)
    {
      cout << "*";
    }
    // space
    for (int j = 0; j <i; j++)
    {
      cout << " ";
    }
    cout << endl; 
   }
  
}

int main()
{
   pattern9();
}
