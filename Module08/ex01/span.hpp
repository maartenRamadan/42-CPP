#pragma once

# include <exception>
# include <iostream>
# include <vector>
# include <array>
# include <utility>

class Span
{
	private:
		Span() {}

		int						_size;
		std::vector<int>		_cont;

	public:
		Span(unsigned int N);
		Span(const Span& rhs);
		~Span();
		Span&		operator=(const Span& rhs);

		void		addNumber(unsigned int nb);

		template<typename T>
		void		addNumber(typename T::iterator it, typename T::iterator ite) {
			try	{
				if (static_cast<int>(this->_cont.size()) == this->_size)
					throw full();
				for (; it != ite; it++) {
					_cont.push_back(*it);
				}
				std::cout << "Range stored" << std::endl;
			}
			catch (const std::exception& e)	{
				std::cerr << e.what() << std::endl;
			}
		}

		int			shortestSpan();
		int			longestSpan();

		class full : public std::exception {
			virtual const char*		what() const throw() { return ("Storage is full"); };
		};
		class noSpan : public std::exception {
			virtual const char*		what() const throw() { return ("No span to be found"); };
		};
};
