#include <iostream>

int main()
{
    // POINTER 1

/*    int* p_number;
    int number=100;
    p_number=&number;

    std::cout<<p_number<<std::endl;//o/p Address in which value is stored
    std::cout<<*p_number<<std::endl;//o/p value stored in that address
    std::cout<<&number<<std::endl;//o/p address of number variable

    //writing through uninitialized pointer is bad bcaz it contain junk
    //address that could hold anything 
    //for example:

    //int* pntr=22; this is bad don't do this 
    //compler will stop compling when it reach this part

    //nullptr
    //int* p_num1{nullptr}; also works
    // int* p_num1{};  //nullptr=an address that has no data in it
                       //nullptr=pointer pointing nowhere
                       //also don't write data into nullptr like pointer
*/

    //POINTER 2

    //dynamically allocating memory form HEAP mempry

/*  int* p_num1{nullptr};
    p_num1=new int; //Dynamically allocating space for single int on heap
                      //this memory will only belong to our program from
                      //now on.The system can't use it for anything else
                      //[red flag]:until we return it<== 

    *p_num1=77;       //can write into dynamically allocated memory
                      //now as it is allocated on Heap memory
                      //this data isn't stored on the stack just  
                      //like normal data we play with
                      //this data will be stored on the Heap memory              
  
    std::cout<<"Dynamically allocated memry  "<<std::endl;
    std::cout<<"p_num4: "<<*p_num1<<std::endl;

    //releasing meomery from the Heap

    delete p_num1;    //if we don't release it then it will be stored
                      //on the system memroy forever untill we 
                      //return it
                      //it got deleted form heap not from stack
                      //memory so we can still use it or again 
                      //can allocate it to heap
    p_num1=nullptr;   //should reset it after deleting it from heap 
                      //memory bcaz it will make your life easy it 
                      //mean this pntr is empthy.initialize it 
                      //before using it again
*/

    //POINTER 3
/*   
    //it is also possible to initialize the pointer with a valid 
    //address during decleration
    
    int* p_num2{ new int };    //will contain junk value
    int* p_num3{ new int(44)}; //use direct initialization
    int* p_num4{ new int{55}}; //use uniform initialization

    std::cout<<std::endl;
    std::cout<<"p_num2:  "<<p_num2<<std::endl;
    std::cout<<"*p_num2: "<<*p_num2<<std::endl; //junk value

    std::cout<<"p_num3:  "<<p_num3<<std::endl;
    std::cout<<"*p_num3: "<<*p_num3<<std::endl;

    std::cout<<"p_num4:  "<<p_num4<<std::endl;
    std::cout<<"*p_num4: "<<*p_num4<<std::endl;

    //remember to delete or return the memory to heap
    delete p_num2;
    p_num2=nullptr;

    delete p_num3;
    p_num3=nullptr;

    delete p_num4;
    p_num4=nullptr;

    //reusing pointer after deleting em
    p_num2 = new int (75); //p_num2 was uninitialized at first
    std::cout<<"*p_num2 after deleting: "<<*p_num2<<std::endl;

    delete p_num2;
    p_num2=nullptr; 

    //deleting pointer twice is bad
*/
    //POINTER 4

    //Dangling pointers
    //a pointer that does not point to any valid 
    //memory.derefrecing a dangling pointer will
    //result in undifined behavior.Types are
    //1:Uninitialized pointers
    //2:Deleted pointrs
    //3:Multiple pointers pointing to same memory
/*
    int * p_num5{new int{82}};
    int * p_num6{p_num5};

    std::cout<<"p_number5: "<<*p_num5<<std::endl;
    std::cout<<"p-num6: "<<*p_num6<<std::endl;

    delete p_num5;
*/
    //now p_num6 pointed to deleted memory dereferencing 
    //it will lead to an undifined behavior

    //std::cout<<"p_num6: "<<p_num6<<std::endl;
    //undifined behavior=bad

    //initialize pointer
    //reset pointer after deleting them
    //for multiple pointer to same address make  
    //sure the owner pointer is very clear
/*
    int *p_num7{new int{47}};

    if(p_num7!=nullptr)
    {
        std::cout<<"*p_num7: "<<*p_num7<<std::endl;
    }
*/
/*
    //safely allocating lots of arrays in heap
    //don't know alot<== 
    for (size_t i{0} ; i < 100 ; i++)
    {
        try{
            int* data=new int[100000000];
        }catch(std::exception& ex){
            std::cout<<"something went wrong : "<<ex.what()<<std::endl;
        }
    }

*/
/*
    //Pointer 5
    //Dynamically allocated Arrays
    
    const size_t size{10};
     
    double *p_salaries { new double[size]}; //salary array will contain
                                             //garbage values

    int *p_student { new(std::nothrow) int[size]{}}; //all value 
                                                     //initialized to
                                                     //zero
    
    double *p_score { new(std::nothrow) double[size]{1,2,3,4,5}};
    //allocating memory space for an array of size double vars. First 5
    //will be initialized with 1,2,3,4,5 and the reset will be 0's.
    
    //nullptr check and use the allcated array
    if(p_score)
    {
        std::cout<<"size of score(it's a regular pointer) : "<<sizeof(p_score)<<std::endl;
        std::cout<<"Successfully allocated memory for scores."<<std::endl;

        for( size_t i{}; i < size ; i++)
        {
            std::cout<< " value : "<<p_score[i]<< " : "<< *(p_score + i)<<std::endl;
        }
    }

    delete [] p_salaries;
    p_salaries = nullptr;

    delete [] p_score;
    p_score = nullptr;

    delete [] p_student;
    p_student = nullptr;

*/
/*
    //Static arrays Vs dynamic arrays

    int scores[10] {1,2,3,4,5,6,7,8,9,10}; //Lives on the stack

    std::cout<<"score size : "<< std::size(scores)<<std::endl;
    for( auto s : scores)
    {
        std::cout<<"value : "<< s <<std::endl;
    }

    int* p_score1 = new int[10] {1,2,3,4,5,6,7,8,9,10};//Live on heap
    //std::cout<< "p_score size : "<< std::size(p_scores1)<<std::endl;
    //can't use size with dynamic arrays bcaz array here decayed into 
    //a pointer
    // for( auto s : p_scores1) p_score isn't an array it's just a pntr
    // {                        that point to some location in memory
    //     std::cout<<"value : "<< s <<std::endl;
    // }
*/




                                                              
   return 0;
}