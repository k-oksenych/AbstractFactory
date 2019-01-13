#pragma once

class Herbivore
{
public:
	virtual void Eat()
	{
		currentWeight += 10;
	}
	bool isAlive()
	{
		if (currentWeight < weight * 30 / 100)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	int GerCurrentWeight()
	{
		return currentWeight;
	}
	void isBitten()
	{
		currentWeight -= 10;
	}
	virtual ~Herbivore() = 0
	{
	}
protected:
	int weight;
	int currentWeight;
};

class Wildebeest : public Herbivore
{
public:
	Wildebeest(int newWeight)
	{
		this->weight = newWeight;
		this->currentWeight = newWeight;
	}
};

class Bison : public Herbivore
{
public:
	Bison(int newWeight)
	{
		this->weight = newWeight;
		this->currentWeight = newWeight;
	}
};
class Elk : public Herbivore
{
public:
	Elk(int newWeight)
	{
		this->weight = newWeight;
		this->currentWeight = newWeight;
	}
};