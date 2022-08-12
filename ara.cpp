#include <iostream>
using namespace std;

int main()
{
    /*
    int ara[3][2][2] = {{{1,2},{3,4}},{{5,6},{7,8}},{{9,10},{11,12}}};

    cout << ara [2][1][0] <<endl;
            
    for(int i{0} ; i < 3 ; i++)
    {
        for(int j{0} ; j < 2 ; j++)
        {
            for(int z{0} ; z < 2 ; z++)
            {
                cout << ara[i][j][z] << " ";
            }
        }

    }
*/
    //Transpose of an Array

    int ara1[4][4] = {{1,2,3,4},     
                      {5,6,7,8},
                      {9,10,11,12},
                      {13,14,15,16}};
    
    cout<< ara1[0][3];
    cout<<endl;

    for(int i{0} ; i < 4 ; i++)
    {
        for(int j{0} ; j < 4 ; j++)
        {
            cout << ara1[j][i] << " ";
        }
        cout << endl ; 
    }

    return 0;
}