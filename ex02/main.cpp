#include "Array.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
	std::cout << "<< OCCF test >>" << std::endl;
	std::cout << std::endl << "default constructor test" << std::endl;
	Array<int> intArr0;
	std::cout << intArr0.getArrAddr() << std::endl;

	std::cout << std::endl << "constructor test" << std::endl;
	Array<int> intArr(10);
	std::cout << intArr.getArrAddr() << std::endl;

	std::cout << std::endl << "copy constructor test" << std::endl;
	Array<int> copiedIntArr(intArr);
	std::cout << copiedIntArr.getArrAddr() << std::endl;
	copiedIntArr[0] = 3;
	std::cout << "copied intArr[0] : " << copiedIntArr[0] << std::endl;
	std::cout << "original intArr[0]: " << intArr[0] << std::endl;

	std::cout << std::endl << "<< size test >>" << std::endl;
	std::cout << "intArr0's size : " << intArr0.size() << std::endl;
	std::cout << "intArr's size : " << intArr.size() << std::endl;
	std::cout << "copiedIntArr's size : " << copiedIntArr.size() << std::endl;

	std::cout << std::endl << "<< operator [] test >>" << std::endl;
	for (int i = 0; i < 10; i++) {
		intArr[i] = i;
	}

	try
	{
		std::cout << "intArr: ";
		for(int i = 0; i < 10; i++) {
			std::cout << intArr[i];
			if (i < 9)
				std::cout << ", ";
			else
				std::cout << std::endl;
		}
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << intArr[11];
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << intArr[-3];
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "<< const test >>" << std::endl;
	const Array<int> arr(5);
	std::cout << arr[0] << std::endl;
}