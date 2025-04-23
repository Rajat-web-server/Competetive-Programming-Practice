#include<iostream>
using namespace std;

void explain_pair()
{
    pair <int, int> p={1,4};
    cout<< p.first <<" "<<p.second<<endl;

}
void another_pair(){//nested
    pair<int, pair<int,int>> p={1,{24,33}};
    cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;
}

void third_pair(){
    pair<int,int> arr[]= { {1,2} , {3,4} , {5,6} , {7, 8}};
    cout<<arr[1].first<<" "<<arr[2].second<<endl;
}

void last_pair(){
    pair<string,char> c={"ram", 'b'};
    cout<<c.first<<" "<<c.second;
}


int main ()
{
    explain_pair();
    another_pair();
    third_pair();
    last_pair();
    return 0;
}