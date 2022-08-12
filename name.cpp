#include<iostream>
using namespace std;

void swap(int &ix, int &iy);
void swap(float &fx, float &fy);
void swap(char &cx, char &cy);

int main(){
    int ix, iy;
    float fx , fy;
    char cx, cy;
    cout<<" enter 2 integers : \n";
    cin>>ix>>iy;
    cout<<" enter 2 integers : \n";
    cin>>ix>>iy;
    cout<<" enter 2 floating points number : \n";
    cin>>ix>>iy;
    cout<<" enter 2 integers : \n";
    cin>>fx>>fy;
    cout<<" enter 2 charactes  : \n";
    cin>>cx>>cy;
    cout<<" integers  : \n";
    cout<<" ix = "<<ix<<" iy"<<iy<<endl;

    swap(ix,iy);

    cout<<" after swaping ";
    cout<<"ix ="<<ix<<"iy ="<<iy<<endl;
    cout<<" floating point numbers :"<<endl;
    cout<<" fx= "<<fx<<" fy ="<<fy<<endl;

    swap(fx,fy);

    cout<<"after swaping "<<endl;
    cout<<"fx= "<<fx<<" fy "<<fy<<endl;
    cout<<" characters = "<<endl;
    cout<<" cx= "<<cx<<"cy ="<<cy<<endl;

    swap(cx, cy);

    cout<<" after swaping "<<endl;
    cout<<" cx ="<<cx<<" cy ="<<cy<<endl;

   return 0;
}

void swap( int &a, int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void swap(float &a , float &b)
{
     float temp;
    temp=a;
    a=b;
    b=temp;
}

void swap(char &a , char &b)
{
    char temp;
    temp=a;
    a=b;
    b=temp;
}