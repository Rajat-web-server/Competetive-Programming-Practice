#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void vector1()
{
    // vector
    
    vector<int> v = {10, 20, 30, 40};
    v.emplace_back(11);
    v.push_back(50);

    cout << "vector: ";
    for (auto x : v)
        cout << x << " ";
    cout << "\n";

    // Edit and reverse

    v[1] = 25;
    reverse(v.begin(), v.end());
    cout << "reverse Vector :" << endl;
    for (auto x : v)
        cout << x << "\n";

    v[1] = 25;
    reverse(v.begin(), v.end());
    cout << "reverse Vector :" << endl;
    for (auto x : v)
        cout << x << "\n";

    v[3] = 46;
    /* for (auto x : v) */
    cout << "changed vector: " << v[3] << endl;

    // Auto

    for (auto it = v.end(); it != v.begin(); it--)
    {
        cout << "First element (auto) : " << *it << "\n";
    }
}

void vector2()
{   // Erase
    vector<int> v = {1, 2, 3, 4, 5};
    v.erase(v.end());
    for (int x : v)
    {
        cout << x << " ";
    }
    cout<<endl;
     //Insert 
     vector<int> c = {11,22,33,44,55};
     v.insert(v.begin(),99);
     cout<<"After insert : ";
     for (int x : c) 
     cout<< x <<" ";
     cout<<endl;

     //Copy
     vector <int> c2;
     copy(c.begin(), c.end(), back_inserter(c2));
     cout<<"copied vector : ";
     for (int x: c2) cout <<x<<" ";
     c2.emplace_back(33);
     cout<<endl;
     cout<<"emplace back result : ";
     for (int x : c2) cout << x << " ";
     c2.push_back(33);
     cout<<endl;
     cout<<"Push back result : ";
     for (int x : c2) cout << x << " ";
     cout<<endl;

}

int main()
{
    vector2();
}