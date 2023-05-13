
#include"HomePet.h"
#include"Dog.h"
#include"Cat.h"
#include"Bird.h"

int main()
{
	HomePet** pets = new HomePet * [3]
	{
		new Dog("Dog", "Bublyc", "Gav-gav", "Bone"),
			new Cat("Cat", "Sasha", "Mur-mur", "Milk"),
			new Ara("Bird", "Max", "Car-car", "Zerno"),
			
	};
	for (size_t i = 0; i < 3; i++)
	{
		pets[i]->about();
	}
	for (size_t i = 0; i < 3; i++)
	{
		delete pets[i];
	}

	return 0;
}
