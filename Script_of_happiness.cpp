#include <iostream>

int main()
{
	int happy;

	std::cout << "Everything okay?" << std::endl;
	std::cout << "Yes - 1, No - 2" << std::endl;
	std::cin >> happy;

	switch (happy)
	{
	case 1:
		std::cout << "Are you happy.";
		break;
	case 2:
		std::cout << "Don't worry, all will good!";
		break;
	}
		
}