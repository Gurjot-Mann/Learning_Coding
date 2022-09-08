#include <iostream>
using namespace std;

class hello
{ 
    int a;
    friend class bye;
};

class bye : public hello
{ public:
    bye(){
    cout<< a <<endl;
    }
};

int main ()
{
   bye b; 
return 0;
}