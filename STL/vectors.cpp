#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <deque>
#include<stack>
#include<queue>
#include<set>
#include<map>
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
{ // Erase
    vector<int> v = {1, 2, 3, 4, 5};
    v.erase(v.end());
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    // Insert
    vector<int> c = {11, 22, 33, 44, 55};
    v.insert(v.begin(), 99);
    cout << "After insert : ";
    for (int x : c)
        cout << x << " ";
    cout << endl;

    // Copy
    vector<int> c2;
    copy(c.begin(), c.end(), back_inserter(c2));
    cout << "copied vector : ";
    for (int x : c2)
        cout << x << " ";
    c2.emplace_back(33);
    cout << endl;
    cout << "emplace back result : ";
    for (int x : c2)
        cout << x << " ";
    c2.push_back(33);
    cout << endl;
    cout << "Push back result : ";
    for (int x : c2)
        cout << x << " ";
    cout << endl;
}

void list_()
{
    list<int> one = {1, 2, 3, 4};
    one.push_front(0);
    one.push_back(5);
    cout << "List : ";

    for (int x : one)
        cout << x << " ";
    cout << endl;
    one.pop_back();
    one.pop_front();
    cout << "List : ";
    for (int x : one)
        cout << x << " ";
    cout << endl;
}
void Deque()
{
    deque<int> two = {5, 10, 15, 20, 25};
    two.push_front(11);
    two.push_back(22);
    cout << "List :";
    for (int x : two)
        cout << x << " ";
    cout << endl;
    two.pop_back();
    two.pop_front();
    cout << "List :";
    for (int x : two)
        cout << x << " ";
    cout << endl;
}

void Stack_()
{  //LIFO
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(4);
    st.emplace(5);
    
    cout<<"Stack : ";
    cout<<st.top()<<endl;
    st.pop();
    cout<<"size : ";
    cout<<st.size()<<endl;
    /* cout<<st.empty()<<" l"<<endl; */
    stack<int>st1,st2;
    st1.swap(st2);
}

void Queue_()
{  //FIFO
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.emplace(5);

    cout<<"queue :";
    
    q.back() += 5;
    cout<<q.back()<<endl;
    cout<<"queue :";
    
    cout<<q.front() <<endl;
    q.pop();
    cout<<"queue :";
    cout<<q.front();
}

void PQ(){
    //for the greatest value (Max heap)
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.push(10);
    
    cout<<"Priority Queue : ";
    cout<<pq.top()<<endl;
    
    pq.pop();
    cout<<"Priority Queue : ";
    cout<<pq.top()<<endl;

    //Minimum Heap--> Lowest number (minimum priority queue) Not a linear container
    priority_queue<int, vector<int>, greater<int>>pq_ ;
    pq_.push(5);
    pq_.push(2);
    pq_.push(8);
    pq_.push(10);

    cout<<"Priority Queue : ";
    cout<<pq_.top()<<endl;

    //Note; push/pop-->log n, top-->o(1);  time-complexity

}
 
    void SET(){
        //stores everything in the sorted order and stores unique; Not a linear container     
        set<int>st;
        st.insert(1);
        st.emplace(2);
        st.insert(2);//it won't add extra 2 ;
        st.insert(4);
        st.insert(3);
        auto it = st.find(3);
        it = st.find(6);
        st.erase(3);
        st.erase(4);
        //Iterator points to the address
        for (int x : st)
        cout<<x<<" ";
        cout<<endl; //represented in a sorted order
        
        set<int>st1;
        st1.insert(1);
        st1.insert(3);
        st1.insert(5);
        st1.insert(7);
        st1.insert(8);
        st1.insert(8);
        auto it1 = st1.find(1);
        auto it2 = st1.find(7);
        st1.erase(it1, it2);
        for (int x : st1)
        //Note erase format-->[first, last) ;
        cout<<x<<" ";
        cout<<endl;

        auto it3=st1.lower_bound(1);
        auto it4=st1.upper_bound(3);
        for (int x : st1)
        cout<<x<<" ";
        cout<<endl;

    }

    void Mutliset(){
    //Stores in a sorted order but not in a unique sense;

    multiset<int> ms;
    ms.insert(2);
    ms.insert(4);
    ms.insert(6);
    ms.insert(6);

    ms.erase(6);
    int cnt = ms.count(2);
    cout<<cnt<<endl;//count the occurence of 2;
    for (int x : ms)
    cout<<x<<" ";
    cout<<endl;
    multiset<int> ms1;
    ms1.insert(3);
    ms1.insert(3);
    ms1.insert(3);
    ms1.insert(3);
    ms1.insert(3);

   /*  ms1.erase(3); *///all 3s gonna get erased;

    ms1.erase(ms1.find(3));
    for(int x: ms1)
    cout<< x <<" ";
    cout<<endl;
   
    cout<<"Erasing at a range : ";
    auto it1=ms1.find(3);
    auto it2= it1;
    advance(it2,2);
    ms1.erase(it1,it2);
    for(int x: ms1)
    cout<< x <<" ";
    cout<<endl;

    //unordered set is same set;
    //unique but not sorted;
    //lower_bound 7 upper_bound function doesn't work in this;
    //
    }

    void Map(){
        //works like key-value pair
        //key is unique but value can be repeated
        //Map stores unique keys in sorted order
        map<int, int> mpp;
        mpp[1]=2;
        mpp[2]=3;
        for (auto x : mpp)
        cout<<x.first<<" ";
        cout<<endl;
        cout<<"Another : ";
        map<int, pair<int,int>> mpp1;
        mpp1[1]={10,20};
        mpp1[2]={11,22};
        for (auto x: mpp1)
        cout<<x.first<<" "<<x.second.first<<x.second.second<<endl;
        cout<<"Map : ";
        map< pair<int,int>,int>mpp2;
        mpp2[{1,2}]=10;
        mpp2[{1,3}]=11;
        for (auto x : mpp2)
        cout<<x.first.first<<" "<<x.first.second<<" "<<x.second<<endl;

        //multimap---> evertything same as map, but it can store multiple keys.
        //unordermap--->it gonna have unique keys, but not sorted
    }

int main()
{
    Map();
    return 0;
}