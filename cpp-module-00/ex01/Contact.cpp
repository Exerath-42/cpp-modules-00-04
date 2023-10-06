# include "Contact.hpp"

void Contact::add_contact(void)
{
    std::cout << "Name:" << std::endl;
    std::cin >> name;
    std::cout << "First name:" << std::endl;
    std::cin >> first_name;
    std::cout << "Nickname:" << std::endl;
    std::cin >> nickname;
    std::cout << "Number:" << std::endl;
    std::cin >>  number;
    std::cout << "Dark secret:" << std::endl;
    std::cin >> dark_secret;
}

void Contact::print_column(std::string string)
{
    if (string.length() <= 10)
        std::cout << std::right << std::setw(10) << string;
    else
    {
        string =  string.substr(0,9) + ".";
        std::cout << std::right << std::setw(10) << string;
    }
}

void Contact::print_contact(int _index)
{
    print_column(std::to_string(_index));
    std::cout << "|";
    print_column(name);
    std::cout << "|";
    print_column(first_name);
    std::cout << "|";
    print_column(nickname);
    std::cout << "|";
    print_column(number);
    std::cout << "|";
    print_column(dark_secret);
    std::cout << std::endl;
}

void Contact::show_contact(void)
{
    std::cout << "Name: " + name << std::endl;
    std::cout << "First name: " + first_name << std::endl;
    std::cout << "Nickname: " + nickname << std::endl;
    std::cout << "Phone number: " + number << std::endl;
    std::cout << "Dark secret : " + dark_secret << std::endl;
}