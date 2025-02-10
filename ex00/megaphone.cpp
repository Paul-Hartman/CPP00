
#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
	if(argc > 1)
	{
		std::string str;
		for(int i = 1; i < argc; i++)
			str += argv[i];
		for (size_t i = 0; i < str.length(); i++)
			str[i] = std::toupper(str[i]);
		std::cout << str;
	}
	else
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	std::cout << std::endl;
	return 0;
}
