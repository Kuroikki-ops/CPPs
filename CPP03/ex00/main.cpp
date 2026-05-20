

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	robot("Larry");

	robot.attack("Bullymong");
	robot.takeDamage(5);
	robot.beRepaired(5);

	robot.attack("King Mong");
	robot.takeDamage(15);
	robot.attack("King Mong");
	robot.beRepaired(5);

	return (0);
}
