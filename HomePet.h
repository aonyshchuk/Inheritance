#include<iostream>
using namespace std;

#ifndef hp_class
#define hp_class
namespace Alina
{
	class HomePet abstract
	{
	protected:
		string type;
		string show;
		string sound;
		string food;

	public:
		HomePet()
		{
			type = "Uknown";
			show = "Uknown";
			sound = "Uknown";
			food = "Uknown";
		};
		HomePet(string type, string show, string sound, string food)
		{
			cout << "HomePet(string type, string show, string sound, string food)" << endl;
			this->type = type;
			this->show = show;
			this->sound = sound;
			this->food = food;
		}
		~HomePet()
		{
			type.clear();
			show.clear();
			sound.clear();
			food.clear();
		};
		virtual void about() = 0;

		void setType(string type)
		{
			this->type = type;
		}
		string getType()
		{
			return this->type;
		}
		void setShow(string show)
		{
			this->show = show;
		}
		string getShow()
		{
			return this->show;
		}
		void setSound(string sound)
		{
			this->sound = sound;
		}
		string getSound()
		{
			return this->sound;
		}
		void setFood(string food)
		{
			this->food = food;
		}
		string getFood()
		{
			return this->food;
		}
	};
}
#endif
