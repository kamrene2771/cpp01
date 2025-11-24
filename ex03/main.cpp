#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    return 0;
}

// int main() {
//         Weapon sword("longsword");
//         HumanA said("said", sword);

//         said.attack();
//         sword.setType("katana");
//         said.attack();

//         Weapon sword2("Gladius");
//         HumanB jim("Jim");

//         jim.attack();            
//         jim.setWeapon(sword2);     
//         jim.attack();
//         sword2.setType("another type of swords");
//         jim.attack();


//     return 0;
// }
