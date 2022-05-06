#include <iostream>
#include "Pizza.h"
using namespace std;

void printPizzaData(const Pizza& pizza);

int main()
{
	Pizza pepperoni("Pepperoni", 12, 20);
	Pizza cheese("Cheese", 9, 15);
	Pizza meatzza("Meatzza", 18, 20);

	meatzza.addTopping("beef");
	meatzza.addTopping("salami");
	meatzza.addTopping("ham");
	meatzza.addTopping("sausage");

	printPizzaData(pepperoni);
	printPizzaData(cheese);
	printPizzaData(meatzza);
	return 0;
}

void printPizzaData(const Pizza& pizza)
{
	cout << "Name: " << pizza.getName() << endl;
	cout << "Diameter: " << pizza.getDiameter() << endl;
	cout << "Cost: " << pizza.getCost() << endl;
	cout << "Toppings: " << endl;
	
	pizza.printToppings();
	cout << endl;
}