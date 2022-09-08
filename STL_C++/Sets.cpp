#include <iostream>
#include <set>
using namespace std;
void print(set<string> s)
{
    for(string values : s)
        cout << values << endl;
}
int main ()
{
    set<string> s;
    s.insert("abc"); // O(log(n))
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc");
    // auto it = s.find("abc"); // log(n)
    // if(it != s.end());
    //     s.erase(it);
    s.erase("abc");
    print(s);
    
return 0;
}