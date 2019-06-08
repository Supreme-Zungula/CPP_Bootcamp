#include "../includes/FragTrap.hpp"

int main()
{
    srand(time(NULL));

    FragTrap fragster("Fragster");
    FragTrap fragaman("Fragman");
    std::cout << std::endl;

    fragster.meleeAttack("Fraggie");
    fragster.rangeAttack("Fraggie");
    fragster.takeDamage(45);
    fragster.beRepaired(30);
    fragster.vaulthunter_dot_exe("Fraggie");
    std::cout << std::endl;

    FragTrap fragHero(fragaman);
    fragHero.vaulthunter_dot_exe("Fragster");
    std::cout << std::endl;

    std::cout << "Assigning Fragster to Fragamn.\n";
    fragaman = fragster;
    fragaman.meleeAttack("Fraggie");
    fragaman.rangeAttack("Fraggie");
    fragaman.takeDamage(45);
    fragaman.beRepaired(30);
    fragaman.vaulthunter_dot_exe("Fraggie");

    return 0;
}
