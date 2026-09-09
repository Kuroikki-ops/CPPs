
template <typename T>
Array<T>::Array(void) : _array(NULL), _len(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _len(n) {}

template <typename T>
Array<T>::Array(const Array<T>& other) {*this = other;}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other) {

	if (this != &other)
	{
		_len = other._len;
		delete[] _array;
		_array = new T[_len];
		for (unsigned int i = 0; i < _len; i++)
			_array[i] = other._array[i];
	}
	return (*this);
}

template <typename T>
Array<T>::~Array(void) {delete[] _array;}
