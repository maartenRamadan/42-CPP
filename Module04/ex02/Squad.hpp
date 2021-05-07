#pragma once

# include <iostream>
# include <sstream>
# include "ISpaceMarine.hpp"
# include "ISquad.hpp"

class Squad : public ISquad
{
	struct Container {
		ISpaceMarine*	soldier;
		Container*		next;
	};
	
	protected:
		Container*			_head;
		int                 _count;

	public:
		Squad();
		Squad(const Squad& rhs);
		Squad(const ISquad& rhs);
		Squad&			operator=(const Squad& rhs);
		~Squad();

		int				getCount() const;
		ISpaceMarine*	getUnit(int nb) const;
		int				push(ISpaceMarine* noob);
};		
