#include <iostream>
using namespace std;
int main ()
{
    int** a2d = new int*[5];//2d array in heap.//Cherno says to avoid 2d arrays like this. Instead use the example given blew of one d array.
    for(int i=0;i<50;i++)
    {
        a2d[i] = new int[5];
    }
    /*int*** a3d = new int**[5];//3d array
    for(int i = 0; i<5;i++)
    {
        a3d[i] = new  int*[5];
        for(int j =0 ; j<5;j++)
        {
            a3d[i][j] = new int[5];
        }
    }*/
    for (int i = 0; i < 5; i++)
    {
        delete[] a2d[i];
    }
    delete[] a2d;


    int* array = new int[5 * 5];//Example of one d array as 2d style;
    for (int y = 0; y < 5; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            array[x+y * 5] = 2;
        }
        
    }
    
return 0;
}