#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class bank
{

    public:
    int acno;
int amt;
char name[100];


void assign();

//void deposit();
void withdrawl(int);
void display();
};
void bank::assign( )
{

cout<<"\n Enter Account number :";
cin>>acno;
cout<<"\n Enter Amount :";
cin>>amt;
cout<<"\n Enter Name :";
cin>>name;
cout<<" \n ASSIGNED \n";
}
void bank::display()
{
cout<<"\nAcno is : "<<acno<<"\nAmoumt is : "<<amt<<"\n User name : "<<name;
}
void bank::withdrawl(int abs)
{int a;
    a=amt-abs;
    cout<<"\nAmount now is : "<<a;
}
int y;
int main()
{
    bank b[100];
    char ch='y';
    int y;
int a;
do
{

cout<<"\n1. Enteries ";
cout<<"\n2. Display ";
cout<<"\n3. Withdrawl \n ";
cin>>a;
switch(a)
{

case 1:
    cout<<"How many entries u waana Have :";
    int k;
    cin>>k;
    y=k;

    for(int i=0;i<k;i++)
    {
       b[i].assign();
    }
     break ;

case 2:
    cout<< " \n which entry u waana display";
    int c;
     cin>>c;
     b[c-1].display();
     break;
case 3:
     cout<<"Enter account number : ";
     int l,m;
     cin>>l;
     cout<<"\n Enter amount to be withdrawl";
     cin>>m;
    for(int i=0;i<y;i++)
    {
      if( b[i].acno==l)
         {
            b[i].withdrawl(m);
         }
    }
    break;
default:
cout<<"\n\n Wrong choice HURRRRRRRRR ";
break;
}
cout<<"\n Do u waana continue :";
cin>>ch;
}while(ch=='y');


return 0;
}
