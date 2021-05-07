#pragma once

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		PowerFist();
		PowerFist(const PowerFist& rhs);
		virtual ~PowerFist();
		PowerFist&		operator=(const PowerFist& rhs);

		virtual void	attack() const;
};
