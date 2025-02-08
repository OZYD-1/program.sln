#include <iostream>
#include <string>
#define lf else if
using namespace std;

class Item {
public:
	string type;
	string name;
	int quantity;
	int totalPrice = 0;
	float palance;
	string choise;

	void Palance() {
		cout << "How much money do you have? : " << endl;
		cin >> palance;
	}
	void Type() {
		cout << "1.Cheese section" << endl;
		cout << "2.Detergents section" << endl;
		cout << "3.Luxuries section" << endl;
		cout << "4.Freezers section" << endl;
		cout << "5.Refrigerators section" << endl;
		cout << "6.finish" << endl;
	}

	/* Product price lists */
	void cheese() {
		cout << "1.Kiri cheese |5JD|" << endl;
		cout << "2.Triangle cheese |2JD|" << endl;
		cout << "3.Abu Walad cheese |3JD|" << endl;
		cout << "4.Mozzarella |4JD|" << endl;
		cout << "5.Cheddar cheese |4JD|" << endl;
		cout << "6.finish" << endl;
	}
	void detergents() {
		cout << "1.soap |3JD|" << endl;
		cout << "2.Clear liquid |6JD|" << endl;
		cout << "3.Clothes washing liquid |12JD|" << endl;
		cout << "4.Fine wet |1JD|" << endl;
		cout << "5.toilet paper |2JD|" << endl;
		cout << "6.Eating tarpaulins |3JD|" << endl;
		cout << "7.Kitchen dishwasher tools |6JD|" << endl;
		cout << "8.finish" << endl;
	}
	void luxuries() {
		cout << "1.Chips |0.25JD|" << endl;
		cout << "2.Nuts |2JD|" << endl;
		cout << "3.candies |0.25JD|" << endl;
		cout << "4.Biscuit |0.75 JD|" << endl;
		cout << "5.gum |0.25JD|" << endl;
		cout << "6.Zaid chocolate |6JD|" << endl;
		cout << "7.finish" << endl;
	}
	void freezers() {
		cout << "1.Ice cream |1JD|" << endl;
		cout << "2.chickens |6JD|" << endl;
		cout << "3.meat |8JD|" << endl;
		cout << "4.vegetables |4JD|" << endl;
		cout << "5.Kabbah Nabil |7JD|" << endl;
		cout << "6.finish" << endl;
	}
	void refrigerators() {
		cout << "1.eggs |3.5JD|" << endl;
		cout << "2.Local juices |1.5JD|" << endl;
		cout << "3.water |0.25JD|" << endl;
		cout << "4.Jordanian Danette |1.25JD|" << endl;
		cout << "5.Carbonated water |1.5JD|" << endl;
		cout << "6.Local soft juices |2JD|" << endl;
		cout << "7.coffee |3.5JD|" << endl;
		cout << "8.finish" << endl;
	}

	/* Deducting product prices from Palance */
	void nameCheese() {

		do {
			cout << "Choose the name number you want: " << endl;
			cin >> name;
			if (name != "6") {
				cout << "\tHow much quantity do you want?" << endl;
				cin >> quantity;
			}
			if (name == "1")
				palance -= 5 * quantity;
			lf(name == "2")
				palance -= 2 * quantity;
			lf(name == "3")
				palance -= 3 * quantity;
			lf(name == "4" || name == "5")
				palance -= 4 * quantity;
			lf(name == "6")
				name = "6";
			else
				cout << "An error occurred. This number is not among the options try again: " << endl;
		} while (name != "6" && palance > 0);
	}
	void nameDetergents() {
		do {
			cout << "Choose the name number you want: " << endl;
			cin >> name;
			if (name != "8") {
				cout << "\tHow much quantity do you want?" << endl;
				cin >> quantity;
			}
			if (name == "1" || name == "6")
				palance -= 3 * quantity;
			lf(name == "2" || name == "7")
				palance -= 6 * quantity;
			lf(name == "3")
				palance -= 12 * quantity;
			lf(name == "4")
				palance -= 1 * quantity;
			lf(name == "5")
				palance -= 2 * quantity;
			lf(name == "8")
				name = "8";
			else
				cout << "An error occurred. This number is not among the options try again: " << endl;
		} while (name != "8" && palance > 0);
	}
	void nameLuxuries() {
		do {
			cout << "Choose the name number you want: " << endl;
			cin >> name;
			if (name != "7") {
				cout << "\tHow much quantity do you want?" << endl;
				cin >> quantity;
			}
			if (name == "1" || name == "3" || name == "5")
				palance -= 0.5 * quantity;
			lf(name == "2")
				palance -= 2 * quantity;
			lf(name == "4")
				palance -= 0.75 * quantity;
			lf(name == "6")
				palance -= 6 * quantity;
			lf(name == "7")
				name = "7";
			else
				cout << "An error occurred. This number is not among the options try again: " << endl;
		} while (name != "7" && palance > 0);
	}
	void nameFreezers() {
		do {
			cout << "Choose the name number you want: " << endl;
			cin >> name;
			if (name != "6") {
				cout << "\tHow much quantity do you want?" << endl;
				cin >> quantity;
			}
			if (name == "1")
				palance -= 1 * quantity;
			lf(name == "2")
				palance -= 6 * quantity;
			lf(name == "3")
				palance -= 8 * quantity;
			lf(name == "4")
				palance -= 4 * quantity;
			lf(name == "5")
				palance -= 7 * quantity;
			lf(name == "6")
				name = "6";
			else
				cout << "An error occurred. This number is not among the options try again: " << endl;
		} while (name != "6" && palance > 0);

	}
	void nameRefrigerators() {
		do {
			cout << "Choose the name number you want: " << endl;
			cin >> name;
			if (name != "8") {
				cout << "\tHow much quantity do you want?" << endl;
				cin >> quantity;
			}
			if (name == "1" || name == "7")
				palance -= 3.5 * quantity;
			lf(name == "2" || name == "5")
				palance -= 1.5 * quantity;
			lf(name == "3")
				palance -= 0.25 * quantity;
			lf(name == "4")
				palance -= 1.25 * quantity;
			lf(name == "6")
				palance -= 2 * quantity;
			lf(name == "8")
				name = "8";
			else
				cout << "An error occurred. This number is not among the options try again: " << endl;
		} while (name != "8" && palance > 0);
	}


	void MiniMarket() {
		cout << "------------------------------------------|* Welcome to MiniMarket Zaid AL-Smadi *|---------------------------------------------" << endl;
		Type();
		int Type;
		do {

			cout << "Choose the type number you want: " << endl;
			cin >> type;
			Type = stoi(type);
			switch (Type) {
			case 1: cheese();
				nameCheese();
				break;
			case 2: detergents();
				nameDetergents();
				break;
			case 3: luxuries();
				nameLuxuries();
				break;
			case 4: freezers();
				nameFreezers();
				break;
			case 5: refrigerators();
				nameRefrigerators();
				break;
			case 6: Type = 6;
				break;
			default:
				cout << "An error occurred. This number is not among the options try again: " << endl;
			}
		} while (Type != 6 && palance  > 0);
		if (palance <= 0) {
			cout << "\t\t\n|* Sorry, your current balance of zero is not enough to shop more *|\n" << endl;
		}
	}
};

int main() {
	Item z1;
	z1.Palance();
	z1.MiniMarket();
	if (z1.palance < 0)
		return 0;
	else {
		cout << "Would you like to know how much money you have?[Y or N]: " << endl;
		cin >> z1.choise;

		if (z1.choise == "Y" || z1.choise == "y")
			cout << "the palance is : " << z1.palance << " JD." << endl;
		else
			cout << "As a thank you for your visit, come back later <3 ." << endl;
	}
	return 0;
}