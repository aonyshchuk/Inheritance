#include"HomePet.h"
#include"Dog.h"
#include"Cat.h"


int main()
{
	Alina::HomePet** pets = new Alina::HomePet * [3]
	{
		new Dog("Dog", "Bublyc", "Gav-gav", "Bone"),
		new Cat("Cat", "Abrykos", "Mur-mur", "Milk")

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