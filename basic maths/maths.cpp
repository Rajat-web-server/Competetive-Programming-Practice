#include<iostream>
using namespace std;

void extraction_of_digit(int n){
    /* int n;
    cout<<"Enter the number :  ";
    cin>>n; */
    int count=0;
    while(n>0)
    {   
        int lastDigit=n%10;
        
        n=n/10;
        count++;
        cout<<n<<endl;
        
    }
    cout<<"Digit count : "<<count;

}

void reverse(int n){
    int reverse=0;
    while(n>0)
    {
        int lastDigit=n%10;
        n=n/10;
        cout<<"lastdigit : "<<lastDigit<<endl;
        reverse=(reverse*10)+lastDigit;

    }
    cout<<reverse;
}


int main ()
{
    int n;
    cout<<"Enter the number :  ";
    cin>>n;
    reverse(n);
}