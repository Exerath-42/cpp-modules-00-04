#include <iostream>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";

	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "value by string:    " << string << std::endl;
	std::cout << "value by stringPTR: " << *stringPTR << std::endl;
	std::cout << "value by stringREF: " << stringREF << std::endl;

	std::cout << "adress by string:    " << &string << std::endl;
	std::cout << "adress by stringPTR: " << stringPTR << std::endl;
	std::cout << "adress by stringREF: " << &stringREF << std::endl;
}
