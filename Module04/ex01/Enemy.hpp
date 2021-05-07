#pragma once

# include <iostream>
# include <sstream>

class Enemy
{
	protected:
		Enemy();
		
		int			hp;
		std::string	type;

	public:
		Enemy(int hp, const std::string& type);
		Enemy(const Enemy& rhs);
		virtual ~Enemy();
		Enemy&			operator=(const Enemy& rhs);

		std::string		virtual getType() const;
		int				getHP() const;
		bool			checkPulse() const;

		virtual void	takeDamage(int damage);

};

std::ostream&			operator<<(std::ostream& o, const Enemy& rhs);
