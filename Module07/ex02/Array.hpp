#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	public:
        Array() : _array(new T[0]()), _size(0) {}
        Array(unsigned int n) : _array(new T[n]()), _size(n) {}
		~Array() { delete [] this->_array; }
		Array(const Array& rhs) {
			*this = rhs;
		}
	
		Array&		operator=(const Array& rhs) {
			this->_size = rhs.getSize();
			if (this->_size)
			{
				this->_array = new T[this->_size];
				for (int i = 0; i < this->_size; i++) {
					this->_array[i] = rhs._array[i];
				}
			}
			return (*this);
		}
		T&			operator[](int n) {
			if (n >= this->_size)
				throw noSuchItem();
			return (this->_array[n]);
		}

		int			getSize() const { return (this->_size); }

		class noSuchItem : public std::exception {
			virtual const char* what() const throw() { return ("No such item"); };
		};

	private:
		T*		_array;
		int		_size;
};

#endif
