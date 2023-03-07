#include<bits/stdc++.h>
using namespace std;
int main()
{

    //array STL
    // array<int,4> a={1,2,3,4};
    // cout<<"STL created."<<endl;
    // int size= a.size();
    // cout<<size<<endl;

    // for (int i = 0; i < size; i++)
    // {
    //     /* code */
    //     cout<<a[i]<<endl;
    // }
    

    // cout<<"Element at index 2 :\t"<<a.at(2)<<endl;
    // cout<<"Empty or not\t"<<a.empty()<<endl;
    // cout<<"front of the array "<<a.front()<<endl;
    // cout<<"Back of the array "<<a.back()<<endl;





    //vectors
    vector<int> v;
    vector<int> a(5,1);  //---> initialises a vector of size 5 elements with all elements as 1
    cout<<v.size()<<endl;
    v.push_back(1);
    cout<<"Capacity :"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity :"<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity :"<<v.capacity()<<endl;

    v.push_back(4);
    cout<<"Capacity :"<<v.capacity()<<endl;

    v.push_back(5);
    cout<<"Capacity :"<<v.capacity()<<endl;

    cout<<"Size :";
    cout<<v.size()<<endl;

    //pop_back, front and back functions

    cout<<"Front "<<v.front()<<endl;
    cout<<"Back "<<v.back()<<endl;

    cout<<endl;
    cout<<"Before pop : "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout<<v[i]<<" ";
    }

    v.pop_back();

    cout<<"after pop : "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        /* code */
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Before clear Size :\t"<<v.size()<<endl;

    v.clear();
    cout<<"after clear Size :\t"<<v.size()<<endl;


    cout<<endl<<endl;

    for (int i = 0; i < a.size(); i++)
    {
        /* code */
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<endl;
    //to copy al the elements of a vector in another vector
    vector<int> last(a);
    for(int i:last)
    {
        cout<<last[i]<<" ";
    }
    cout<<endl;

    return 0;
}
