#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <deque>
#include<stack>
#include<queue>
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

    //Minimum Heap
    priority_queue<int, vector<int>, greater<int>>pq_ ;
    pq_.push(5);
    pq_.push(2);
    pq_.push(8);
    pq_.push(10);

    cout<<"Priority Queue : ";
    cout<<pq_.top()<<endl;

}

int main()
{
    PQ();
}