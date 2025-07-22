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

int main ()
{
    int n;
    cout<<"Enter the number :  ";
    cin>>n;
    extraction_of_digit(n);
}