#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal default destructor called" << std::endl;
}

Animal::Animal(const Animal &animal)
{
	this->type = animal.type;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &animal)
{
	if (this != &animal)
		this->type = animal.type;
	std::cout << "Animal assignation operator called" << std::endl;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << this->type << ": ";
	if (this->type == "Dog")
		std::cout << "Woof!" << std::endl;
	else if (this->type == "Cat")
		std::cout << "Meow!" << std::endl;
	else if (this->type == "Lamb" || this->type == "Sheep" || this->type == "Goat" || this->type == "Ram")
		std::cout << "Baa!" << std::endl;
	else if (this->type == "Cow" || this->type == "Bull")
		std::cout << "Moo!" << std::endl;
	else if (this->type == "Horse" || this->type == "Pony")
		std::cout << "Neigh!" << std::endl;
	else if (this->type == "Pig" || this->type == "Boar")
		std::cout << "Oink!" << std::endl;
	else if (this->type == "Chicken" || this->type == "Hen" || this->type == "Rooster")
		std::cout << "Cluck!" << std::endl;
	else if (this->type == "Duck" || this->type == "Goose" || this->type == "Swan")
		std::cout << "Quack!" << std::endl;
	else if (this->type == "Turkey")
		std::cout << "Gobble!" << std::endl;
	else if (this->type == "Parrot")
		std::cout << "Squawk!" << std::endl;
	else if (this->type == "Owl")
		std::cout << "Hoot!" << std::endl;
	else if (this->type == "Eagle" || this->type == "Hawk" || this->type == "Falcon")
		std::cout << "Screech!" << std::endl;
	else if (this->type == "Penguin")
		std::cout << "Honk!" << std::endl;
	else if (this->type == "Seagull" || this->type == "Albatross" || this->type == "Pelican" || this->type == "Heron" || this->type == "Stork" || this->type == "Raven" || this->type == "Crow")
		std::cout << "Caw!" << std::endl;
	else if (this->type == "Sparrow")
		std::cout << "Chirp!" << std::endl;
	else if (this->type == "Robin" || this->type == "Cardinal" || this->type == "Bluebird" || this->type == "Blue Jay" || this->type == "Bird")
		std::cout << "Tweet!" << std::endl;
	else if (this->type == "Blue Jay")
		std::cout << "Squawk!" << std::endl;
	else if (this->type == "Lion" || this->type == "Tiger" || this->type == "Leopard" || this->type == "Jaguar" || this->type == "Cheetah" || this->type == "Panther" || this->type == "Cougar" || this->type == "Puma" || this->type == "Bobcat" || this->type == "Lynx" || this->type == "Bear")
		std::cout << "Roar!" << std::endl;
	else if (this->type == "Wolf" || this->type == "Fox" || this->type == "Coyote" || this->type == "Jackal" || this->type == "Hyena")
		std::cout << "Howl!" << std::endl;
	else if (this->type == "Elephant" || this->type == "Mammoth")
		std::cout << "Trumpet!" << std::endl;
	else if (this->type == "Rhino" || this->type == "Hippopotamus")
		std::cout << "Snort!" << std::endl;
	else if (this->type == "Giraffe")
		std::cout << "Bleat!" << std::endl;
	else if (this->type == "Zebra")
		std::cout << "Bray!" << std::endl;
	else if (this->type == "Kangaroo")
		std::cout << "Ch||tle!" << std::endl;
	else if (this->type == "Koala")
		std::cout << "Bellow!" << std::endl;
	else if (this->type == "Panda")
		std::cout << "Bleat!" << std::endl;
	else if (this->type == "Monkey" || this->type == "Ape" || this->type == "Gorilla" || this->type == "Chimpanzee" || this->type == "Orangutan")
		std::cout << "Whoop!" << std::endl;
	else if (this->type == "Mouse" || this->type == "Rat" || this->type == "Squirrel" || this->type == "Chipmunk")
		std::cout << "Squeak!" << std::endl;
	else if (this->type == "Fly" || this->type == "Mosquito" || this->type == "Bee" || this->type == "Wasp" || this->type == "Hornet" || this->type == "Yellow Jacket")
		std::cout << "Buzz!" << std::endl;
	else if (this->type == "Dolphin" || this->type == "Porpoise" || this->type == "Whale" || this->type == "Orca")
		std::cout << "Click!" << std::endl;
	else if (this->type == "Seal" || this->type == "Walrus")
		std::cout << "Bark!" << std::endl;
	else if (this->type == "Shark")
		std::cout << "Chomp!" << std::endl;
	else if (this->type == "Octopus" || this->type == "Squid" || this->type == "Cuttlefish" || this->type == "Nautilus")
		std::cout << "Squirt!" << std::endl;
	else if (this->type == "Fish")
		std::cout << "Blub!" << std::endl;
	else if (this->type == "Crab" || this->type == "Lobster" || this->type == "Crayfish" || this->type == "Shrimp" || this->type == "Prawn")
		std::cout << "Snap!" << std::endl;
	else if (this->type == "Starfish" || this->type == "Sea Urchin" || this->type == "Sea Cucumber")
		std::cout << "Suck!" << std::endl;
	else if (this->type == "Jellyfish")
		std::cout << "Sting!" << std::endl;
	else if (this->type == "Frog" || this->type == "Toad" || this->type == "Salamander" || this->type == "Newt")
		std::cout << "Croak!" << std::endl;
	else if (this->type == "Tortoise" || this->type == "Turtle")
		std::cout << "Hiss!" << std::endl;
	else if (this->type == "Man" || this->type == "Human")
		std::cout << "Porco ***!" << std::endl;
	else
		std::cout << this->type << "has an unknown cry!" << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}
