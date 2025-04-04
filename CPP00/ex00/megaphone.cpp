
#include <iostream>

int main(int argc, char **argv)
{
    if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int i = 1; i < argc; i++)
    {
        for (int u = 0; argv[i][u]; u++)
            std::cout << static_cast<char>(toupper(argv[i][u]));
        if (i <= argc)
            std::cout << " ";
    }
    std::cout << std::endl;
    return(0);
}
