#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include "Person.h"
#include "Resource.h"
#include "accum.h"

using namespace std;

int main()
{
    vector<int> v;
    v.push_back(3);     // Add a member
    v.push_back(99);
    v.push_back(-23);
    v.push_back(6);

    // cout << v[0] << endl;

    // Using auto iterator with a range
    // System figures out type
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

    // Vector of objects
    vector<Person> vp;
    Person Waldo("Waldo", "Weber", 123);
    Person Vandy("Vandy", "Vanderbilt", 678);
    vp.push_back(Waldo);
    vp.push_back(Vandy);

    // Use iterator to get objects
    for(auto ip = vp.begin(); ip != vp.end(); ip++)
    {
        cout << *ip << endl;
    }
    cout << Waldo << endl;

    // Now let's talk about MAPs
    map<int, Person> people;

    //      key<int>        = value<Person>
    people[Waldo.getArNum()] = Waldo;
    // If the key exist, you update the value
    // Else you create the value
    people[Vandy.getArNum()] = Vandy;

    for(auto ip = people.begin(); ip != people.end(); ip++)
    {
        // The two components of my map are:
        // key->first                       value->second
        cout << ip->first << " " << ip->second.getFirstName();
    }
    Person Elmo("Elmo", "Street", 100);
    people[123] = Elmo;
    for(auto item:people)
    {
        // The two components of my map are:
        // key->first                       value->second
        cout << item.first << " " << item.second.getFirstName();
    }
    return 0;
}