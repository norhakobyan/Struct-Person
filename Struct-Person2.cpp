#include <iostream>
#include <string>

struct Person {
	std::string name;
	int age;
	std::string pol;
	std::string email;
};

void personInput(Person& p);
void personOutput(const Person& p);

int main()
{
	int size;
	std::cout << "Enter the number of person "<<std::endl;
	std::cin >> size;
	Person* arr = new Person[size];
	for (int i = 0; i<size; ++i)
		personInput(arr[i]);

	for (int i = 0; i<size; ++i) {
		personOutput(arr[i]);
	}
}

void personInput(Person& p) {
	std::cout << "enter name"<<std::endl;
	std::cin >> p.name;
	std::cout << "enter age" << std::endl;
	std::cin >> p.age;
	std::cout << "enter pol" << std::endl;
	std::cin >> p.pol;
	std::cout << "enter email" << std::endl;
	std::cin >> p.email;
	std::cout << std::endl;
}

void personOutput(const Person& p) {
	std::cout << "Persons data" << std::endl;
	std::cout << std::endl;
	std::cout << "Person name - " << p.name << std::endl;
	std::cout << "Person age - " << p.age << std::endl;
	std::cout << "Person pol - " << p.pol << std::endl;
	std::cout << "Person email - " << p.email << std::endl;

}

