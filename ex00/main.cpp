#include "Zombie.hpp"

int main(){
    Zombie* z = newZombie("heap_zombie");
    z->announce();

    randomChump("stack_zombie");

    delete(z);
    return 0;
}
