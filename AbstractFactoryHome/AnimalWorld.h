#pragma once

#include <vector>

#include "Continent.h"

class Animal_World
{
public:
	Animal_World(Continent* continent, int amount) :
		continent(continent),
		animalsAmount(amount)
	{
	}
	void FeedCarnivores()
	{
		for (int i = 0; i < animalsAmount / 2; ++i)
		{
			carnivores[i].Eat(&herbivores[1 + rand() % (animalsAmount / 2)]);
		}
	}
	void FeedHerbivores()
	{
		for (int i = 0; i < animalsAmount / 2; ++i)
		{
			herbivores[i].Eat();
		}
	}
	void init()
	{
		herbivores.reserve(animalsAmount / 2);
		for (int i = 0; i < animalsAmount / 2; ++i)
		{
			Herbivore* herb = continent->CreateHerbivore();
			herbivores.push_back(*herb);
		}
		carnivores.reserve(animalsAmount / 2);
		for (int i = 0; i < animalsAmount / 2; ++i)
		{
			Carnivore* carn = continent->CreateCarnivore();
			carnivores.push_back(*carn);
		}
	}
private:
	Continent* continent;
	int animalsAmount;
	vector<Herbivore> herbivores;
	vector<Carnivore> carnivores;
};