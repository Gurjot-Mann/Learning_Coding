#include <iostream>
using namespace std;
int main ()
{
    string s = "hello";
    const char* name1 = "Gurjot";
    const wchar_t* name2 = L"cherno";

    const char16_t* name3 = u"cherno";
    const char32_t* name4 = U"cherno";
    
    cout<< s<<endl;
return 0;
}