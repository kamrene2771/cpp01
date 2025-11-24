#include "Zombie.hpp"

Zombie::Zombie()
{
    this->name = "smiya";
}

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << "zombie " << name << " created" << std::endl;
}

Zombie::~Zombie() {
    std::cout << this->name << " has been destroyed." << std::endl;
}

void Zombie::setName(std::string name) {
    this->name = name;
}

void Zombie::announce(void) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
