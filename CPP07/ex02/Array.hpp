
#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array {

	private:
		T*				_array;
		unsigned int	_len;

	public:
		Array(void);
		Array(unsigned int n);
		Array(const Array<T>& other);
		Array<T>& operator=(const Array<T>& other);
		~Array(void);
};

# include "Array.tpp"
#endif
