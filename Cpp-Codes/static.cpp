#include <iostream>
using namespace std;

class emp
{
    int empid[100];
   static int count;

public:
    void setemp(void)
    {
        cout << "enter the employee id " << endl;
        cin >> empid[count];
    }
    void getemp(void)
    {
        cout << "the emp id is " << empid[count] << endl;
    }
};

int emp:: count= 100;

int main()
{
    emp pr;
    pr.setemp();
    pr.getemp();
    return 0;
}