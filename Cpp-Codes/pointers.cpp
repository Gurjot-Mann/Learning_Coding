#include <iostream>
using namespace std;
int main()
{
    char *buffer = new char[8];
    buffer[0]='a';
    for (int i = 0; i < 8; i++)
    {
        cout << buffer[i] << endl;
    }
    //a pointer to a pointer
    char** ptr = &buffer;
    delete[] buffer;

    return 0;
}