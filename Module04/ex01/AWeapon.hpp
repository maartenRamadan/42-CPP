#pragma once

# include <iostream>
# include <sstream>

class AWeapon
{
	protected:
		AWeapon() {}

		std::string		name;
		int				damage;
		int				APCost;

	public:
		AWeapon(const std::string& name, int damage, int APC);
		AWeapon(const AWeapon& rhs);
		virtual ~AWeapon();
		AWeapon&		operator=(const AWeapon& rhs);

		std::string		getName() const;
		int				getAPCost() const;
		int				getDamage() const;

		virtual void	attack() const = 0;
};

std::ostream&			operator<<(std::ostream& o, const AWeapon& rhs);
