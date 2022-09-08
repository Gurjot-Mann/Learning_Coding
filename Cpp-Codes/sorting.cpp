#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;
int main ()
{
    std::vector<int> values = {5, 3, 1, 4, 2};
    //std::sort(values.begin(), values.end(), greater<int>());
    std::sort(values.begin(), values.end(), [](int a, int b)
    {
        if( a== 1)
        return false;
        if (b==1)
        return true;

        return a<b;
    });//using this lambda we are providing the rules to sort. Here we are setting rule to put 1 at end.
    for(int value : values)
        std::cout<<value<<endl;
return 0;
}