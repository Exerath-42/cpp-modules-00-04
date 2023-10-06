#include "Harl.hpp"

static int get_number(char *argv)
{
	std::string av = argv;
	std::string levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR",
	};

	for (int i = 0; i < 4; ++i)
	{
		if (levels[i] == av)
			return (i);
	}

	return (1337);
}

std::string level_choose(int i)
{
	if (i == 0)
		return ("DEBUG");
	else if (i == 1)
		return ("INFO");
	else if (i == 2)
		return ("WARNING");
	else
		return ("ERROR");
}

void harlFilter(int level)
{
	Harl harl;
	
	while (level <= 3)
	{
		harl.complain(level_choose(level));
		level++;
	}
}

int main(int argc, char**argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong argument number." << std::endl;
		return (1);
	}

	switch (get_number(argv[1]))
	{
	case 0:
		harlFilter(0);
		break;
	case 1:
		harlFilter(1);
		break;
	case 2:
		harlFilter(2);
		break;
	case 3:
		harlFilter(3);
		break;
	
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}

	return (0);
}
