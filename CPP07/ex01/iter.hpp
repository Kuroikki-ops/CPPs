
#ifndef ITER_HPP
# define ITER_HPP

template <typename T, typename F>
void	iter(T* array, const int value, F func) {

	for (int i = 0; i < value; i++)
		func(array[i]);
}

template <typename T, typename F>
void	iter(const T* array, const int value, F func) {

	for (int i = 0; i < value; i++)
		func(array[i]);
}

#endif
