#include "../includes/FragTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/NinjaTrap.hpp"

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

    NinjaTrap ninja("Gin");
    ninja.meleeAttack("Kaname");
    ninja.rangeAttack("Kaname");
    ninja.takeDamage(100);
    ninja.beRepaired(75);

    std::cout << "\n";
    NinjaTrap assassin("Scar");
    assassin.meleeAttack("All Might");
    assassin.rangeAttack("All Might");
    std::cout << "\n";

    std::cout << "Assigning ninja to assassin.\n";
    assassin = ninja;
    assassin.meleeAttack("Lucass");
    assassin.rangeAttack("Lucass");
    std::cout << std::endl;

    std::cout << "Basic attacks:\n";
    ninja.basicAttack(assassin);
    assassin.basicAttack(scav);
    scav.basicAttack(assassin);
    fragaman.basicAttack(scav);
    scav.basicAttack(scav);
    fragaman.basicAttack(ninja);
    std::cout << std::endl;
    return 0;
}
