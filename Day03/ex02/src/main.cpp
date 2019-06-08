// #include "../includes/ClapTrap.hpp"
#include "../includes/FragTrap.hpp"
#include "../includes/ScavTrap.hpp"

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

    ScavTrap scav("DOOM");
    scav.meleeAttack("Dash");
    scav.rangeAttack("Dash");
    scav.takeDamage(43);
    scav.beRepaired(5);
    scav.challengeNewcomer("Dash");
    std::cout << std::endl;

    ScavTrap zhinScav("Zhin");
    std::cout << "Assigning ZhinScav to DOOM scave.\n";
    scav = zhinScav;
    scav.meleeAttack("Koga");
    scav.rangeAttack("Koga");
    scav.takeDamage(43);
    scav.beRepaired(5);
    scav.challengeNewcomer("Koga");
    std::cout << std::endl; 
   

    return 0;
}
