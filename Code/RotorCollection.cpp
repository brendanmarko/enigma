#include "Headers/RotorCollection.hpp"

RotorCollection::RotorCollection(Rotor& r1, Rotor& r2, Rotor& r3)
: num_rotors(0)
{
	addRotor(r1);
	addRotor(r2);
	addRotor(r3);
}

int RotorCollection::numOfRotors()
{
	return num_rotors;
}

void RotorCollection::addRotor(Rotor& curr_rotor)
{
	rotors.push_back(curr_rotor);
	num_rotors++;
}

void RotorCollection::viewAlphabets()
{

	for (int i = 0; i < num_rotors; i++)
	{
		rotors[i].printAlphabet();
	}

}

void RotorCollection::handleLetter(char c)
{

}