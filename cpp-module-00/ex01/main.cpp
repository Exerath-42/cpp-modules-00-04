#include "Phonebook.hpp"

void    show_preview(Phonebook phonebook)
{
    int i;

    i = 0;
    std::cout << std::right << std::setw(10) << "Index";
    std::cout << "|";
    std::cout << std::right << std::setw(10) << "Name";
    std::cout << "|";
    std::cout << std::right << std::setw(10) << "First Name";
    std::cout << "|";
    std::cout << std::right << std::setw(10) << "Nick Name";
    std::cout << "|";
    std::cout << std::right << std::setw(10) << "Number";
    std::cout << "|";
    std::cout << std::right << std::setw(10) << "Dark Secret";
    std::cout << std::endl;
    while(i < 8)
    {
        phonebook.contact[i].print_contact(i);
        i++;
    }
}

void show_by_index(Phonebook phonebook)
{
    int index;
    std::string input_index;
    std::stringstream ss;

    std::cout << "Select index : ";
    std::cin >> input_index;
    ss << input_index;
    ss >> index;
    
    if (0 <= index && index <= 7 && ss.fail() == false)
        phonebook.contact[index].show_contact();
    else
        std::cout << "ERROR: Invalid index." << std::endl;
}

int main(void)
{
    Phonebook phonebook;
    int index;
    std::string command;

    index = 0;
    while(1)
    {
        std::cout << "Type any command: " << std::endl;
        std::cin >> command;
        
        if (command == "exit")
        {
            exit(0);
        }
        else if (command == "search")
        {
            show_preview(phonebook);
            show_by_index(phonebook);            
        }
        else if (command == "add")
        {
            index = index % 8;
            phonebook.contact[index].add_contact();
            index++;
        }
        else
            std::cout << "ERROR: Try another command." << std::endl;
    }
}
