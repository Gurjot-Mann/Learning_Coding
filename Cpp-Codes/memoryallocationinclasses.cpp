#include <iostream>
using namespace std;

class shop{

int counter;
int itemid[100];
int itemprice[100];

public:
void initcounter(void) {counter=0;}
void setprice(void);
void displayprice(void);

};

void shop :: setprice(void){
cout<<"Enter id of your item no "<<counter<<endl;
cin>>itemid[counter];
cout<<"Enter Price of your item "<<endl;
cin>>itemprice[counter];
counter++;
}

void shop::displayprice(void){

for (int i = 0; i < counter; i++)
{
    cout<<"The price of item with Id "<<itemid[i]<<" is "<<itemprice[i]<<endl;
}
counter = 0;

}

int main ()
{
    
    shop dukan;
    dukan.initcounter();
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.displayprice();

return 0;
}