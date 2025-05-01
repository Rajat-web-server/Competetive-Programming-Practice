#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // vector
    int x;
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

        v[3]=46;
        /* for (auto x : v) */
        cout<<"changed vector: "<<v[3];

        //
}