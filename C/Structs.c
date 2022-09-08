#include <stdio.h>
#include <string.h>

//for union just use union instead of struct
struct student{

int id;
char name[20];
char favchar;
int rollno;

};

int main()
{
struct student s1;

s1.id = 1;
strcpy(s1.name, "Some one");
s1.favchar = 'S';
s1.rollno = 1;

printf("s1's id is %d\nName is %s\nFavourite char is %c\nRoll No. is %d",s1.id,s1.name,s1.favchar,s1.rollno);

}