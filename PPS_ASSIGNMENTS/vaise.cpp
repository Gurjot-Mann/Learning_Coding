#include <iostream>
using namespace std;

class name
{
   char* m_name;
   public:
    void setname ( char* n)
    {
        m_name = n;
    }
    void print()
    {
        cout<<m_name<<endl;
    }
};

int main ()
{
    
    char* m;
    name nm;
    nm.setname(m);
    nm.print();

return 0;
}