
#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"

#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"
int main()
{
    
    const Animal* meta = new Animal();
    std::cout << "type : " BOLD << meta->getType() << R ", sound : ";
    meta->makeSound();
    delete meta;
    std::cout << "\n";

    const Animal* j = new Dog();
    std::cout << "type : " BOLD << j->getType() << R ", sound : ";
    j->makeSound();
    delete j;
    std::cout << "\n";

    const Animal* i = new Cat();
    std::cout << "type : " BOLD << i->getType() << R ", sound : ";
    i->makeSound();
    delete i;
    std::cout << "\n";
    
    const WrongAnimal* meta2 = new WrongAnimal();
    std::cout << "type : " BOLD << meta2->getType() << R ", sound : ";
    meta2->makeSound();
    delete meta2;
    std::cout << "\n";

    const WrongAnimal* i2 = new WrongCat();
    std::cout << "type : " BOLD << i2->getType() << R ", sound : ";
    i2->makeSound();
    delete i2;
    return 0;
}