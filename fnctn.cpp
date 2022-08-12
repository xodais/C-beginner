#include <iostream>
#include <string>
using namespace std;

/*
struct part
{
    int modelnumber;
    int partnumbber;
    float cost;

};
*/
// struct dist
// {
//     int feet;
//     float inches;

// };

void max_str(int input1,int input2,int& output)
{
    if(input1 > input2)
    output = input1; 
    else
    output = input2;
}

int main()
{
/*
    part partona = {420,3,69};
    part partona2;
    // partona.modelnumber = 420;
    // partona.partnumbber = 3;
    // partona.cost = 69;

    cout<< partona.modelnumber <<endl;
    cout<< partona.partnumbber<< endl;

    partona2=partona;

    partona2.partnumbber++;

    cout<< partona2.modelnumber<<endl;
    cout<< partona2.partnumbber << endl;

    dist d1,d3;
    dist d2 ;
    cout<< "Enter feet 1  " ; cin >>d2.feet;
    cout<< "Enter inches 1  " ; cin >> d2.inches;
    cout<< "\nEnter feet 2  ";cin >> d1.feet;
    cout<< "\nEnter inches 2  ";cin >> d1.inches;

    d3.inches =d1.inches + d2.inches;

    cout<<d3.inches<<endl;
    
    d3.feet = 0 ;

    if( d3.inches >= 12.0 )
    {
        d3.inches-=12.0;
        d3.feet++;
    }

    d3.feet += d1.feet + d2.feet;

    cout<<d1.feet <<" - " <<d1.inches << " + ";
    cout<<d2.feet <<" - " <<d2.inches << " = ";
    cout<<d3.feet <<" - " << d3.inches <<"\n";
*/

    // std::string out_str;
    // std::string string1=("dabiiii");
    // std::string string2=("fire");
    // max_str(string1,string2,out_str);
    // std::cout<<"max_str : " << out_str << std::endl;

    int out_int;
    int in1{45};
    int in2{55};
    max_str(in1,in2,out_int);
    std::cout<< "max : " << out_int <<std::endl;
    

    return 0;

}