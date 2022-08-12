#include <iostream>
using namespace std;

int max(int a, int b); //Function declaration ,prototype
                       //Signature doesn't include return 
int min(int c, int d);

void say_age(int* age);

void rf_age(int& age);

int main()
{
 /* int x = 3;
    int y =9;
    int result = max(x,y);
    int men = min(x,y);
    cout<<result<<" is greater "<<endl;
    cout<<men << " is less ";
  */ 
    
    int age = 23;

    //cout<<"age before calling the function "<< age <<endl;

   // say_age(&age);

    //cout<<"your age is : "<< age <<endl;
     
    rf_age(age);

    cout<<"your rf age is : "<< age <<endl;

    return 0;
}

void rf_age(int& age)
{
    ++age ;
}

void say_age(int* age)
{
    ++(*age);
    cout<< "rfrnc age : "<< *age <<endl;
}

int max(int a, int b)
{
    if(a>b)
    return a;
    else
    return b;
}

int min(int c, int d)
{
    if(c<d)
    return c;
    else
    return d;
}

 