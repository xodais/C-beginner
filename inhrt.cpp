#include <iostream>
using namespace std;

class Fatherproperty
{
    public:
    string propValue{"10 cror"};

    public:   
    void getProperty()
    {
        cout<<"Father Property "<<propValue<<endl;
    }

};

class Son:protected Fatherproperty 
{
    public:
    void getProperty()
    {
        cout<<"Inherited Property "<<propValue<<endl;
    }

};

class grandSon:public Son
{
    public:
    void getProperty()
    {
        cout<<"Inherited Property "<<propValue<<endl;
    }
};

int main()
{
    Son son1;
    son1.getProperty();

    grandSon gSon;
    gSon.getProperty();

    // Son son2;
    // cout<<son2.propValue<<endl;

    return 0; 

}