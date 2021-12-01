#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a("Nicco", 1);
        Bureaucrat b("Benjo", 149);
        Bureaucrat c("Gscala", 150);
        //Bureaucrat d("Valerio", 13545);
        //Bureaucrat e("Lalla", 0);
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << c << std::endl;
        std::cout << "\nDoing increments and decrements...\n" << std::endl;
        //a.increment(1);
        //c.decrement(1);
        a.decrement(1);
        b.increment(1);
        c.increment(1);
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << c << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}