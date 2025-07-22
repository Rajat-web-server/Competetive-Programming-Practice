#include<iostream>
using namespace std;

void extraction_of_digit(){
    int n;
    cout<<"Enter the number :  ";
    cin>>n;
    while(n>0)
    {   
        int lastDigit=n%10;
        n=n/10;
        cout<<n<<endl;
    }

}

int main ()
{
    extraction_of_digit();
}