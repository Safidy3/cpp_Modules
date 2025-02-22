#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->hit_point = 100;
	this->energy = 5;
	this->attackDamage = 20;
	std::cout << "* " << "ScavTrap default constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string name_) : ClapTrap(name_)
{
	this->name = name_;
	this->hit_point = 100;
	this->energy = 5;
	this->attackDamage = 20;
	std::cout << "* " << this->name << " ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &obj) : ClapTrap(obj)
{
	this->name = obj.name;
	this->hit_point = obj.hit_point;
	this->energy = obj.energy;
	this->attackDamage = obj.attackDamage;
	std::cout << "* ScavTrap Copy constructor called\n";
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &obj)
{
	if (this == &obj)
		return (*this);
	ClapTrap::operator=(obj);
	this->name = obj.name;
	this->hit_point = obj.hit_point;
	this->energy = obj.energy;
	this->attackDamage = obj.attackDamage;
	std::cout << "* ScavTrap copy assignment operator called\n";
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "~ " << this->name << " ScavTrap has been deleted." << std::endl;
}

void	ScavTrap::Attack(const std::string& target)
{
	if (this->energy <= 0 || this->hit_point <= 0)
		return ;
	std::cout << this->name << " ScavTrap attack " << target << std::endl;
	this->energy--;
	if (this->energy <= 0)
		this->energy = 0;
}

void	ScavTrap::guardGate()
{
	if (this->energy <= 0 || this->hit_point <= 0)
		return ;
	std::cout << this->name << " ScavTrap is now in Gate keeper mode.\n";
}