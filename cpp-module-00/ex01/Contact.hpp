#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>


class Contact{

private:
	std::string name;
	std::string first_name;
	std::string nickname;
	std::string number;
	std::string dark_secret;

public:
    
	void add_contact(void);
    void show_contact(void);
	void print_contact(int index);
	void print_column(std::string string);
	void clear(std::string str);
};

#endif