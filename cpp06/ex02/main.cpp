// insert header

#include "Base.hpp"

Base* generate(void)
{
    std::srand(time(NULL)); //sets the seed for the 
                            //pseudo-random number generator used by std::rand()
                            //Otherwise the randomization wouldn't change for every program run

    int n = rand() % 3;
    switch (n)
    {
        case 0:
            std::cout << "A class has been generated" << std::endl;
            return (new A);
        case 1:
            std::cout << "B class has been generated" << std::endl;
            return (new B);
        case 2:
            std::cout << "C class has been generated" << std::endl;
            return (new C);
    }
    std::cout << "Fatal error" << std::endl;
	return NULL;
}

// dynamic casting a base class into derived class
// Identify the class of Base pointer using dynamic_cast.
// dynamic_cast returns nullptr if the cast is invalid (i.e., types do not match).
void    identify(Base* p)
{
    if (dynamic_cast<A*>(p) != nullptr)
        std::cout << "A class was identified" << std::endl;
    else if (dynamic_cast<B*>(p) != nullptr)
        std::cout << "B class was identified" << std::endl;
    else if (dynamic_cast<C*>(p) != nullptr)
        std::cout << "C class was identified" << std::endl;
    else
        std::cout << "Class was not identified" << std::endl;
}

// Identify the class of Base reference using dynamic_cast.
// dynamic_cast throws std::bad_cast exception if the cast is invalid.
void    identify(Base& p)
{
    try
    {
        A& temp = dynamic_cast<A&>(p);
        (void)temp;
        std::cout << "A class was identified" << std::endl;
        return ;
    }
    catch (std::bad_cast)
    {}

    try
    {
        B& temp = dynamic_cast<B&>(p);
        (void)temp;
        std::cout << "B class was identified" << std::endl;
        return ;
    }
    catch (std::bad_cast)
    {}

    try
    {
        C& temp = dynamic_cast<C&>(p);
        (void)temp;
        std::cout << "C class was identified" << std::endl;
        return ;
    }
    catch (std::bad_cast)
    {}
    std::cout << "Class was not identified" << std::endl;
}

int main(void)
{
    Base *base;
	base = generate();

	identify(base);
	identify(*base);

	return (0);  
}