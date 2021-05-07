#pragma once

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle();
		PlasmaRifle(const PlasmaRifle& rhs);
		virtual ~PlasmaRifle();
		PlasmaRifle&	operator=(const PlasmaRifle& rhs);
		
		virtual void	attack() const;
};
