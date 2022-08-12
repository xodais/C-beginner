#include<iostream>
#include<math.h>
using namespace std;
class areashape
{
float area;
public:
areashape(float radius)
{
area= 3.14*radius*radius;
}
areashape(int length, int breadth)
{
area=length*breadth;
}
areashape(float base, float height)
{
area=0.5*(base*height);
}
void display()
{
cout<<" area = \t"<<area<<endl;
}
};
int main()
{
int ch;
float radius , height , base;
int length, breadth;
do
{
cout<<" 1.area of circle"<<endl;
cout<<" 2.area of rectangle"<<endl;
cout<<" 3.area of triangle"<<endl;
cout<<" 4.exit"<<endl;
cout<<" enter your choice "<<endl;
cin>>ch;
switch(ch)
{
case1 :
{
cout<<"enter radius of circle=\t";
cin>>radius;
areashape area(radius);
area.display();
}
break;
case 2 :
{
cout<<" enter length and breadth of rectangle =\t";
cin>>length>>breadth;
areashape area(length, breadth);
area.display();
}
break;
case 3:
{
cout<<" enter base and height of triangle =\t";
cin>>base>>height;
areashape area(base, height);
area.display();
}
break;
case 4 :
exit(0);
default:
cout<<"invalid choice";
}
}while(ch !=4);
return 0;
}