#include <iostream>
#include <string>
#include <memory>
using namespace std;

class entity
{
    public:
        entity()
        {
            cout<<"created entity"<<endl;
        }
        ~entity()
        {
            cout<<"destroyed entity"<<endl;
        }
        void print()
        {
            cout<<"hello"<<endl;
        }
};

int main ()
{
    {   weak_ptr<entity> e2;
        shared_ptr<entity> e1;//using shared ptr we can copy it.
    {// first a scope is made for a unique pointer when this scope ends the memory is freed to which the pointer is pointing.
    unique_ptr<entity> Entity = make_unique<entity>();//this is the preffered way.// this is the other way-> unique_ptr<entity> Entity(new entity());
    //unique_ptr<entity>e0 = Entity; // we cannot copy the unique pointer
    shared_ptr<entity> sharedentity= make_shared<entity>();//this is an example of shared pointer.//we can also make it using new same as above.//but using this method we can construct both cotrol block and enetity both together but this is not same in new.
    e1 = sharedentity;//the shared entity won't die until second scope ends because e1 is keeping it alive.
    e2 = sharedentity;//weak pointer wont keep it alive but we can ask weak pointer that are expired or are you still valid.
    Entity->print();
    }//first scope end
    }//second scope end
return 0;
}