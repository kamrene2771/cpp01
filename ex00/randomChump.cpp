#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie zzombie(name);
    zzombie.announce();
}