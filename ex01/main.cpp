#include "iter.hpp"

int main( void ) {
	std::cout << "<int array test>" << std::endl;
	int	intArr[5] = {1, 2, 3, 4, 5};
	iter(intArr, 5, printElement<int>);

	std::cout << std::endl << "<char array test>" << std::endl;
	char	charArr[7] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
	iter(charArr, 7, printElement<char>);
	
	std::cout << std::endl << "<string array test>" << std::endl;
	std::string	stringArr[3]= {"hello", "world", "!"};
	iter(stringArr, 3, printElement<std::string>);

}