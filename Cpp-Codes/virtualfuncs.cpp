#include <iostream>
using namespace std;

class entity
{
    public:
     virtual string getname() {return "entity";}
};

class player : public entity
{
    string m_name;
    public:
    player(const string& name) : m_name(name) //when the contructor is called whatever ia in name gets copied into m_name.
        {}
            string getname() { return m_name;}
};

int main ()
{
    entity* e = new entity();
    cout<< e->getname()<<endl;

    player* p = new player("cherno");
    cout<< p->getname()<<endl;
    
    entity* pl = p;
    cout<<pl->getname()<<endl;
return 0;
}