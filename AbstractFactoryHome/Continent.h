#pragma once

#include "Herbivore.h"
#include "Carnivore.h"

class Continent
{
public:
	virtual Herbivore* CreateHerbivore() = 0;
	virtual Carnivore* CreateCarnivore() = 0;
};

class Africa : public Continent
{
public:
	virtual Herbivore* CreateHerbivore() override
	{
		return new Wildebeest(10 + rand() % 270);
	}
	virtual Carnivore* CreateCarnivore() override
	{
		return new Lion(50 + rand() % 250);
	}
};

class North_America : public Continent
{
	virtual Herbivore* CreateHerbivore() override
	{
		return new Bison(20 + rand() % 620);
	}
	virtual Carnivore* CreateCarnivore() override
	{
		return new Wolf(50 + rand() % 570);
	}
};

class Eurasia : public Continent
{
	virtual Herbivore* CreateHerbivore() override
	{
		return new Elk(20 + rand() % 700);
	}
	virtual Carnivore* CreateCarnivore() override
	{
		return new Tiger(70 + rand() % 650);
	}
};