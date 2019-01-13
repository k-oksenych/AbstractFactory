#pragma once
#include "Herbivore.h"

class Carnivore
{
public:
	void Eat(Herbivore* herbivore)
	{
		if (power > herbivore->GerCurrentWeight())
		{
			power += 10;
			herbivore->isBitten();
		}
		else
		{
			power -= 10;
		}
	}

	virtual ~Carnivore() = 0
	{
	}
protected:
	int power;
};

class Lion : public Carnivore
{
public:
	Lion(int newPower)
	{
		this->power = newPower;
	}
};

class Wolf : public Carnivore
{
public:
	Wolf(int newPower)
	{
		this->power = newPower;
	}
};

class Tiger : public Carnivore
{
public:
	Tiger(int newPower)
	{
		this->power = newPower;
	}
};