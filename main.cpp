#include<iostream>
#include<ctime>
#include<cmath>
using namespace std;

int main() {

	int number{};
	while (number < 15) {
		cout << number << ' ';
		++number;
	}

	do {
		cout << number << ' ';
		--number;
	} while (number >= 0);



	for (double angle{}; angle <= 3.141592; angle += 0.1) {


		// итерационный цикл
		cout << "Angle : " << angle << "\tsin(angle): " << sin(angle) << '\n';
	}
	int numberToGuess{ rand() % 21 };



	do {
		do {
			cout << "Guess the number between 0 and 20: ";
			cin >> number;
			if (number > numberToGuess) {

				cout << "Lower!\n";


			}
			else if (number < numberToGuess); {

				cout << "Higher!\n";

			}

		} while (numberToGuess != number);
		cout << "DA! Numarul scris este identic cu cel din memorie \n" << numberToGuess;
		cout << "Press Y if you want to play again: ";
		char c{};
		cin >> c;

	} while (c == 'y')


};



	std::cin.ignore(1);
	std::cin.get();







}
//	char c1{ 'a' }; // 92 == 'a'
//	std::cout << c1 << char(c1 + 1); // casting to a char
//	++c1;
//	
//	c1 = c1 + 4;
//    std::cout << '\n' << c1<< ' ' << int(c1)<< '\n';
//	srand(unsigned int(time(0)));
//	int a = rand() % 61; // [0,40]
//	if (a <= 20)
//	{
//		std::cout << "a is a smaller than or equals 20. \n";
//	}
//	else if (a <= 40) 
//	{ 
//		std::cout << "a is smaller or equal to 40 \n"; 
//	}
//	else std::cout << "a is larger than 40 \n";
//	std::cin.get();
//	char cInput{};
//	std::cout << "Type a letter of the alphabet \n";
//
//	std::cin >> cInput;
//	switch (cInput)
//	{
//	case 'a':
//	case 98:
//	case'c':
//		std::cout << "The input is le A or le B or le C. \n";
//
//		break;
//	default:
//		std::cout << "Another letter was written on the magic scroll with buttons. \n";
//		
//		
//
//	}
//
//		std::cin.ignore(1);
//		std::cin.get();
//
//}