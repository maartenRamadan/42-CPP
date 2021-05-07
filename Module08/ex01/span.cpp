#include "span.hpp"

Span::Span(unsigned int N) : _size(N) {}

Span::~Span() {}

Span::Span(const Span& rhs)
{
	*this = rhs;
	return ;
}

Span&
Span::operator=(const Span& rhs)
{
	if (rhs._size)
	{
		this->_size = rhs._size;
		this->_cont = rhs._cont;
	}
	return (*this);
}

void
Span::addNumber(unsigned int nb)
{
	if (static_cast<int>(this->_cont.size()) == this->_size)
		throw full();
	this->_cont.push_back(nb);
}

int
Span::shortestSpan()
{
	int res = -1;

	if (this->_cont.size() < 2)
		throw noSpan();
	if (!std::is_sorted(this->_cont.begin(), this->_cont.end()))
		std::sort(this->_cont.begin(), this->_cont.end());
	for (std::vector<int>::iterator it = this->_cont.begin()+1; it != this->_cont.end(); it++) {
		if (res == -1 || *it - *(it-1) <= res)
			res = *it - *(it-1);
	}
	return (res);
}

int
Span::longestSpan()
{
	if (this->_cont.size() < 2)
		throw noSpan();
	return (*std::max_element(this->_cont.begin(), this->_cont.end()) -
		*std::min_element(this->_cont.begin(), this->_cont.end()));
}
