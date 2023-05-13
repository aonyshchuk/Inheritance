class Dog : public Alina::HomePet
{
protected:
	string type;
	string show;
	string sound;
	string food;
public:
	Dog()
	{
		type = "Uknown";
		show = "Uknown";
		sound = "Uknown";
		food = "Uknown";
	};
	Dog(string type, string show, string sound, string food)
	{
		this->type = type;
		this->show = show;
		this->sound = sound;
		this->food = food;
	}
	virtual ~Dog()
	{
		type.clear();
		show.clear();
		sound.clear();
		food.clear();
	};
	void about() override
	{
		cout << "Type: " << this->type << endl;
		cout << "Name: " << this->show << endl;
		cout << "Sound: " << this->sound << endl;
		cout << "Food: " << this->food << endl;
		cout << "*****" << endl;
	}
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

