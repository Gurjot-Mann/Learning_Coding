#include <iostream>
#include <stdlib.h>
#include <unistd.h>

using namespace std;
int main ()
{
    int hr=0,min=0,sec=0;
    while(true)
    {
        system("cls");
        cout<<         "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ"<<endl;
        cout<<"          "<<hr<<" : "<<min<<" : "<<sec<<endl;
        cout<<         "ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ"<<endl;
        sec++;
        if(sec == 59)
       {    min++;
            sec=0;
        
            if(min == 59)
            {
                hr++;
                min=0;

                if (hr== 12)
                {
                    hr=0;
                }
                
            }
        }
        sleep(1);
    }
 return 0;
}