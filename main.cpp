#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(99);
    v.push_back(-23);
    v.push_back(6);

    // cout << v[0] << endl;

    for(auto i = v.begin(); i != v.end(); i++)      // Auto figures out the type
    {
        cout << *i << " ";
    }
    cout << endl;

    // Using index notation
    for(unsigned int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // Using directly an iterator
    for(auto item:v)
    {
        cout << item << " ";
    }
    cout << endl;

    // Reverse iterator
    for(auto i = v.rbegin(); i != v.rend(); i++)      // Auto figures out the type
    {
        cout << *i << " ";
    }
    cout << endl;

    // Display the max, min, and sort your array.
    sort(begin(v), end(v));
    for(auto item:v)
    {
        cout << item << " ";
    }
    cout << endl;

    auto result = max_element(begin(v), end(v));
    cout << "max element at: " << v[distance(v.begin(), result)] << '\n';

    result = min_element(begin(v), end(v));
    cout << "min value is " << *result << endl;


    return 0;
}