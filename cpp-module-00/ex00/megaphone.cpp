#include <string>
#include <iostream>

int main(int argc, char **argv)
{
    int i,j;

    i = 1;
    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    while(argc > 1 && argv[i])
    {
        j = 0;
        while(argv[i][j])
        {
            std::cout << (char)toupper(argv[i][j]);
            j++;
        }
        i++;
        argc--;
    }
    std::cout << std::endl;
}
