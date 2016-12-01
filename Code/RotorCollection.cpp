#include "Headers/RotorCollection.hpp"

RotorCollection::RotorCollection()
{
	// empty
}

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
	for (Rotor r : rotors)
	{
		r.printAlphabet();
	}

}

Rotor& RotorCollection::accessRotor(int i)
{
	return rotors.at(i);
}

void RotorCollection::handleInput(std::string input)
{

	curr_char = ' ';
	std::cout << "Passed input: " << input << std::endl;

	for (int i = 0; i < input.length(); i++)
	{
		curr_char = input.at(i);
		mappingBeforePlug(curr_char);
		std::cout << "curr_char: " << curr_char << std::endl;
	}

}

void RotorCollection::mappingBeforePlug(char &curr_char)
{
	int temp = 0;

	for (Rotor r : rotors)
	{
		std::cout << "curr_char: " << curr_char << std::endl;
		temp = r.findLetterPos(curr_char);
		std::cout << "temp " << temp << std::endl;
		curr_char = r.retrieveLetter(temp);
		std::cout << "curr_value " << curr_char << std::endl;
	}

}