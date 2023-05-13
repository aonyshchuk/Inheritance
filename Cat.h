class Cat : public HomePet
{
protected:
	string type;
	string show;
	string sound;
	string food; 
public:
	Cat()
	{
		type = "Uknown";
		show = "Uknown";
		sound = "Uknown";
		food = "Uknown";
	};
	Cat(string type, string show, string sound, string food)
	{

		this->type = type;
		this->show = show;
		this->sound = sound;
		this->food = food;
	}
	virtual ~Cat()
	{
		type.clear();
		show.clear();
		sound.clear();
		food.clear();
	};
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
	void about() override
	{
		cout << "Type: " << this->type << endl;
		cout << "Name: " << this->show << endl;
		cout << "Sound: " << this->sound << endl;
		cout << "Food: " << this->food << endl;
		cout << "*****" << endl;
	}
};
