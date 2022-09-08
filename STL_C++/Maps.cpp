#include <iostream>
#include <map>
using namespace std;
void print(map<int, string> &m)
{
    cout << "size: " << m.size() << endl;
    for (auto &values : m)
    {
        cout << values.first << " " << values.second << endl;
    }
}
int main()
{
    map<int, string> m; // normal map stores the values in a sorted manner w.r.t key.
    m[1] = "abc";       // Insertion: O(log(n))
    m[5] = "cdc";
    m[3] = "acd";
    m[5] = "aaa";// as every key in map is unique it using same key again will change the value of existing key.
    m.insert({4, "afg"}); //another way of inserting in map as a pair.
    auto it = m.find(3);  // O(log(n)) // if there is no 3 it will return m.end() means no value.
    // if(it == m.end())
    //     cout<< "No value";
    // else
    //     cout<< it->first << " " << it->second << endl;
    m.erase(3); // it will erase 3.  // can also use iterator to erase like m.erase(it);
    //m.clear(); // will clear the entire map.
    print(m);

    map<int, int> m1;
    m[6]; // as map is of type int, int it will store value as zero if not initialized.
    
    return 0;
}