#include <iostream>

int main()
{
	char msg[6]{"Hello"}; 
	//c string terminater and size decleared
	 std::cout<<"message : ";
	 for(auto c : msg)
	 {
	 	std::cout<<c;
	 }
     std::cout<<std::endl;
	 std::cout<<msg<<std::endl;

	 msg[1]='a';
	 std::cout<<"message : ";
	 for(auto c : msg)
	 {
	 	std::cout<<c;
	 }
	std::cout<<std::endl;
	std::cout<<msg<<std::endl;
	std::cout<<"size of msg array :"<<sizeof(msg)<<std::endl;

	char msg1[]{'H','e','g','l','o'};//not a c string bcaz its both non terminating and size isn't decleared
	std::cout<<"message :"<<msg1<<std::endl;
	//will stop when it reach first terminating char array

    //string literals
	//break the string into character and store it in string
	char message4[]{"hello"};
	//size will be 6 bcaz the double quotes represent null terminating \0
	std::cout<<"message 4:"<<message4<<std::endl;
	std::cout<<"size of message4 array :"<<sizeof(message4)<<std::endl;

	int number[]{1,2,3,4,5};
	std::cout<<"number :"<<number<<std::endl;


    return 0;
}
