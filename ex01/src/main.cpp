
#include "../include/Animal.hpp"
#include "../include/Dog.hpp"
#include "../include/Cat.hpp"

#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"
int main()
{
    Animal *animals[10];

    for (int i = 0; i < 5; i++)
        animals[i] = new Dog();
    for (int i = 5; i < 10; i++)
        animals[i] = new Cat();

    for (int i = 0; i < 10; i++)
        delete animals[i];


    //deep copy
    Cat cat = Cat();
    Cat copy = Cat();
    cat.setIdea(0, "eat");
    std::cout << cat.getIdea(0) << std::endl;
    std::cout << copy.getIdea(0) << std::endl;;
    copy = cat;
    std::cout << copy.getIdea(0) << std::endl;;

    //PDF
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;

    system("leaks a.out");
    return 0;
}