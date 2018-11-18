#include <iostream>
#include <string>



struct Person {
	std::string name;
	int age;
	std::string pol;
	std::string email;
};

Person personInput(Person);
void personOutput(Person);

int main() {
	Person  p;
	Person res = personInput(p);
	std::cout << std::endl;
	personOutput(res);
}

Person personInput(Person p) {
	std::cout << "enter name"<<std::endl;
	std::cin >> p.name;
	std::cout << "enter age" << std::endl;
	std::cin >> p.age;
	std::cout << "enter pol" << std::endl;
	std::cin >> p.pol;
	std::cout << "enter email" << std::endl;
	std::cin >> p.email;

	return p;
}

void personOutput(Person p) {
	std::cout << "Persons data"<<std::endl;
	std::cout << std::endl;
	std::cout <<"Person name - "<< p.name << std::endl;
	std::cout << "Person age - " << p.age << std::endl;
	std::cout << "Person pol - " << p.pol << std::endl;
	std::cout << "Person email - " << p.email << std::endl;
}

