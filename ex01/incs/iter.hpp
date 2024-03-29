#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

#include <iostream>

template <typename T, typename F>
void iter(T *arrayAdd, size_t arrayLength, F func) {
	for(size_t i = 0; i < arrayLength; i++) {
		func(arrayAdd[i]);
		if (i < arrayLength - 1)
			std::cout << ", ";
		else
			std::cout << std::endl;
	}
}

template<typename T>
void	printElement(T &element)
{
	std::cout << element;
}

#endif