#include <iostream>
#include "test/functions.cpp"

// this is a line comment

/* 
 * this is a block comment
 */

// int 		: integer / whole numbers 
// bool 	: true or false
// char 	: 1 letter
// string 	: sentence
// floats 	: decimal point numbers
// doubles 	: more precice floats 
// void 	: nothing

// 1 + 1
// 1 - 1
// 1 * 1
// 1 / 1
// 1 % 1

class Animal
{
	public:
		std::string name;
		int age;
		int weight;

		Animal();

		void introduction();
};

Animal::Animal() 
{

}

void Animal::introduction()
{
	std::cout << "My name is " << name << " and I am " << age << " years old. Also, I weight " << weight << " pounds" << std::endl;
}

class Cat : public Animal
{
	public:
		void meow();
};

void Cat::meow()
{
	std::cout << "meow" << std::endl;
}

int main()
{
	Animal x;
	x.name = "Jeff";
	x.age = 7;
	x.weight = 19;

	x.introduction();

	Animal y;
	y.name = "Geoff";
	y.age = 9;
	y.weight = 3;

	y.introduction();

	Cat z;
	z.name = "Geff";
	z.age = 5;
	z.weight = 2;

	z.introduction();

	z.meow();
}


