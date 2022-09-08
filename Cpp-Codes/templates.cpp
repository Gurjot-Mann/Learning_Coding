#include <iostream>
using namespace std;
template<typename T>//we can also write class instsead of type name.
void print(T value)
{
    cout<< value<<endl;
}

template<typename T,int N>
class array_
{
    private:
    T m_array[N];
    public:
    int getsize() const {return N;}
};

int main ()
{
    print<int>(5);
    print("hello");
    print(5.5);
    array_<int, 5> Array;
    cout<<Array.getsize()<<endl;
return 0;
}