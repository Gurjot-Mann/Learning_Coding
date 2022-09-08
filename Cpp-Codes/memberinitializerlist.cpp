#include <iostream>
using namespace std;

class entity 
{
    string m_name;
    public:
    entity() : m_name("unknown")//member initializer list.
    {
       
    }

    entity(const string& name)
    {
        m_name= name;
    }
    void getname()
    {
        cout<<m_name<<endl;
    }

};

int main ()
{

    entity e,e2("hello");
    e.getname();
    entity e1("Cherno");
    e1.getname();

return 0;
}