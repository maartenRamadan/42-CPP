#pragma once

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator rev_iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_rev_iterator;

		MutantStack() : std::stack<T>() {}
		MutantStack(const MutantStack& rhs) { *this = rhs; }
		virtual ~MutantStack() {}
	
		MutantStack&		operator=(const MutantStack& rhs)
		{ 
			if (*this == rhs)
				return (*this);
			std::stack<T>::operator=(rhs);
			return (*this);
		}
	
	iterator			end() 			{ return (std::stack<T>::c.end()); }
	const_iterator		end() const 	{ return (std::stack<T>::c.end()); }

	rev_iterator		rend() 			{ return (std::stack<T>::c.rend()); }
	const_rev_iterator	rend() const 	{ return (std::stack<T>::c.rend()); }

	iterator			begin() 		{ return (std::stack<T>::c.begin()); }
	const_iterator		begin() const	{ return (std::stack<T>::c.begin()); }

	rev_iterator		rbegin()		{ return (std::stack<T>::c.rbegin()); }
	const_rev_iterator	rbegin() const 	{ return (std::stack<T>::c.rbegin()); }
};
