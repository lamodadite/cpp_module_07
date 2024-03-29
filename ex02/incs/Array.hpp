#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
	private:
		T *array;
		unsigned int cnt;
	public:
		Array();
		~Array();
		Array(const Array &obj);
		Array &operator=(const Array &obj);

		Array(unsigned int n);
		T &operator[](int const index);
		const T &operator[](int const index) const;
		unsigned int	size() const;
		T	*getArrAddr();
};

template <typename T>
Array<T>::Array() : array(NULL), cnt(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : array(NULL), cnt(n) {
	if (n > 0) {
		array = new T[n];
		for (unsigned int i = 0; i < n; i++) {
			array[i] = 0;
		}
	}
}

template <typename T>
Array<T>::Array(const Array<T> &obj) {
	*this = obj;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &obj) {
	if (obj.cnt == 0) {
		array = NULL;
	} else {
		array = new T[obj.cnt];
		for(unsigned int i = 0; i < obj.cnt; i++) {
			array[i] = obj.array[i];
		}
	}
	cnt = obj.cnt;
	return (*this);
}

template <typename T>
T &Array<T>::operator[](int const index) {
	if (index < 0 || index >= static_cast<int>(cnt))
		throw std::exception();
	return (array[index]);
}

template <typename T>
const T &Array<T>::operator[](int const index) const {
	if (index < 0 || index >= static_cast<int>(cnt))
		throw std::exception();
	return (array[index]);
}

template <typename T>
Array<T>::~Array() {
	if (array != NULL)
		delete[] array;
}

template <typename T>
unsigned int	Array<T>::size() const {
	return (cnt);
}

template <typename T>
T	*Array<T>::getArrAddr() {
	return (array);
}

#endif