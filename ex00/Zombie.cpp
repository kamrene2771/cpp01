#include "Zombie.hpp"

Zombie::~Zombie()
{
    std::cout << "zombie " << this->name << " destroyed" << std::endl;
}

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << "zombie " << name << " created" << std::endl;
}
void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}