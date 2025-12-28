#include <iostream>
#include <string>

int main()
{
    std::string str("HI THIS IS BRAIN");
    std::string *stringPTR = &str;
    std::string& stringREF = str;

	std::cout << "The memory address of the string variable: " << &str << std::endl;
    std::cout << "The memory address of the string held by the stringPTR: " << stringPTR << std::endl;
    std::cout << "The memory address of the string held by the stringREF: " << &stringREF << std::endl;
    
	std::cout << "The value of the string variable: " << str << std::endl;
	std::cout << "The value pointed to by the stringPTR: " << *stringPTR << std::endl;
    std::cout << "The value pointed to by the stringREF: " << stringREF << std::endl;
    return 0;
}