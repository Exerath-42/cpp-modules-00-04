#include <iostream>
#include <fstream>
#include <string>

char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int main(int argc, char** argv)
{
	if (argc != 4)
	{
		std::cout << "ERROR: Wrong argument number!" << std::endl;
		return (0);
	}

	std::ifstream fin;
	fin.open(argv[1]);

	if(!fin.is_open())
	{
		std::cout << "ERROR: File not open!" << std::endl;
		return (0);
	}

	std::string file;
	std::string tmp_string;

	while (!fin.eof())
	{
		tmp_string = "";
		std::getline(fin, tmp_string);
		file.append(tmp_string);
		file.append("\n");
	}
	file.erase((file.size() - 1), 1);

	int i, size;
	i = 0;
	size = file.size();
	std::string s1 = std::string(argv[2]);
	std::string s2 = std::string(argv[3]);
	
	while(i <= size)
	{
		if (file.find(s1, i) != std::string::npos)
		{
			i = file.find(s1, i);
			file.erase(i, s1.size());
			file.insert(i, s2);
		}
		else
			i++;
	}
	fin.close();

	
	std::ofstream fout;
	char *new_file = argv[1];

	ft_strcat(argv[1], (char *)".replace");

	fout.open(new_file);

	fout << file;
	fout.close();
}
