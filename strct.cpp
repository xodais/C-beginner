#include <iostream>
#include <conio.h>
using namespace std;

struct dist
{
    int feet;
    float inches;
};

struct room
{
    dist length;
    dist width;
};

//enum week{ A, B, C, D, E, F, G};
enum itsAword { Yes, NO };

int main()
{
/*    
    room gaming;

    gaming.length.feet = 0;
    gaming.length.inches = 0;

    gaming.width.feet = 0;
    gaming.width.inches= 0;

    cout<<"Enter your gaming room length "<<endl;

    cin>>gaming.length.feet;
    cin>>gaming.length.inches;

    cout<< "Enter your gaming room width "<<endl;

    cin>>gaming.width.feet;
    cin>>gaming.width.inches;

    float l = gaming.length.feet*12 + gaming.length.inches;
    float w = gaming.width.feet*12 + gaming.width.inches;

    float lF = gaming.length.feet + gaming.length.inches/12;
    float wF = gaming.width.feet + gaming.width.inches/12;

    cout << "Your gaming room area is " << l*w << " square inches \n";
    cout << "Your gaming room area is " << lF*wF << " square feet \n";


    room gaming = {{13,6.5},{10,0.0}};

    cout<<gaming.length.feet<<endl;
    cout<<gaming.width.feet<<endl;
*/
    //Enum
/*    week L1, L2;

    L1 = A;
    L2 = D;

    int diff = L2 - (L1 + 1);

    cout<< "L btwn = "<< diff <<endl;
*/
    itsAword word = NO;
    
    char ch = 'b';
    
    int wordcount = 1 ;

    cout<< "Enter a phrase : \n";
    
    do
    {
        ch = getche();

        //if(ch == ' ' || ch == '\r')  // Escape sequnce always begin with
                                       // \.
        if( ch == ' ' || ch == '\r' )
        {

        }

        else
        {
            if( word == Yes)
            {
                wordcount++;
                word = NO;
            }
            if( word == NO)
            {
                word = Yes;
            }
        }

    } while (ch !='\r');
    
    cout<< " \n----word count is " << wordcount;

    return 0;

}