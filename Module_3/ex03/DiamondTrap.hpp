
#ifndef DIAMONTRAP_HPP
# define DIAMONTRAP_HPP

# include "FragTrap.hpp"
# include  "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	name;
	public:
		DiamondTrap();
		DiamondTrap(std::string name_);
		DiamondTrap(DiamondTrap const &obj);
		DiamondTrap&	operator=(const DiamondTrap &obj);
		~DiamondTrap();

		void	whoAmI();
		void	Attack(const std::string& target);
};

#endif