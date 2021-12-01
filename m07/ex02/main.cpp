#include "Array.hpp"
#include <iostream>

int main()
{
	std::cout << "################ARRINT################" << std::endl;
    unsigned int n = 5;

    std::cout << "Constructing an array with no parameters and printing out length: " << std::endl;
    Array<int>array0;
    std::cout << "length: " << array0.sizeA() << std::endl;


    std::cout << "Constructing array with unsigned int as parameter and printing out lenght: " << std::endl;
    Array<int> ar(n);
    std::cout << "length: " << ar.sizeA() << std::endl;

	ar[3] = 42;
	
    std::cout << "Constructing new_array with = operator overload: " << std::endl;
    Array<int> new_array = ar;
    std::cout << "length: " << new_array.sizeA() << std::endl;

    std::cout << "Using copy constructor: " << std::endl;
    Array<int>copy_array(ar);
    std::cout << "length: " << copy_array.sizeA() << std::endl;
    std::cout << "Trying to access elements in array with [] using wrong index:" << std::endl;
    try{
        std::cout << ar.operator[](6);
    }
    catch (std::exception & e){
        std::cout << e.what() << std::endl;
    }
    std::cout << "Trying to access elements in array with [] using right index:" << std::endl;
    try{
        std::cout << ar.operator[](3) << std::endl;
    }
    catch (std::exception & e){
        std::cout << e.what() << std::endl;
    }

	std::cout << "############ARRSTRING################" << std::endl;
	unsigned int m = 4;

    std::cout << "Constructing an array with no parameters and printing out length: " << std::endl;
    Array<std::string>array00;
    std::cout << "length: " << array0.sizeA() << std::endl;


    std::cout << "Constructing array with unsigned int as parameter and printing out lenght: " << std::endl;
    Array<std::string> ar0(m);
    std::cout << "length: " << ar0.sizeA() << std::endl;

	ar0[3] = "Benjo Bello";

    std::cout << "Constructing new_array with = operator overload: " << std::endl;
    Array<std::string> new_array0 = ar0;
    std::cout << "length: " << new_array0.sizeA() << std::endl;

    std::cout << "Using copy constructor: " << std::endl;
    Array<std::string>copy_array0(ar0);
    std::cout << "length: " << copy_array0.sizeA() << std::endl;
    std::cout << "Trying to access elements in array with [] using wrong index:" << std::endl;
    try{
        std::cout << ar0.operator[](6);
    }
    catch (std::exception & e){
        std::cout << e.what() << std::endl;
    }
    std::cout << "Trying to access elements in array with [] using right index:" << std::endl;
    try{
        std::cout << ar0.operator[](3) << std::endl;
    }
    catch (std::exception & e){
        std::cout << e.what() << std::endl;
    }
}