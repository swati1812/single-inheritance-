
#include<iostream.h>
#include<stdio.h>

class base
{
float a,b,c;
public :
void read_add()
{
cout<<"For addition";
cout<<"Enter the value of a :";
cin>>a;
cout<<"Enter the value of b :"; 
cin>>b;
c =a+b;
}

void show_add()
{
cout<<"The value of c is "<<c<<endl;
}
};


class drived : public base
{
float a,b,c;
public :
void read_sub()
{read_add();
cout<<"For Subtraction "<<endl;
cout<<"Enter the value of a :";
cin>>a;
cout<<"Enter the value of b :"; 
cin>>b;
c =a-b;
}

void show_sub()
{show_add();
cout<<"The value of c is "<<c<<endl;
}
}d;

void main()
{
cout<<"Enter the all values "<<endl;
d.read_div();
cout<<"Show the result "<<endl;
d.show_div();
getch();
}

