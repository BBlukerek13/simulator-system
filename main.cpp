#include <iostream>
#include <string>
#include <cstdlib>

void login(std::string name1, std::string password1) {
	std::string name2;
	std::string password2;
	std::cout << "WELCOME TO THE CONSOLE, LOGIN REQUIRED" << std::endl;
	std::cout << "ENTER YOUR NAME:";
	std::getline(std::cin, name2);
	std::cout << "ENTER YOUR PASSWORD:";
	std::getline(std::cin, password2);
	if (name2 == name1 && password2 == password1) {
		std::cout << "LOGGED IN SUCCESSFULLY, WELCOME " << name1 << "!";
		return;
	}
	else {
		std::cout << "LOGIN UNSUCCESSFUL\n";
		login(name1, password1);
	}
}

int main() {
	std::string name1;
	std::string password1;
	std::string changename;
	std::string changepassword;
	std::string version;
	std::string command;
	int petla;
	std::cout << "WELCOME TO THE CONSOLE, REGISTRATION REQUIRED" << std::endl;
	std::cout << "ENTER YOUR NAME:";
	std::getline(std::cin, name1);
	std::cout << "ENTER YOUR PASSWORD:";
	std::getline(std::cin, password1);
	std::cout << "REGISTERED SUCCESSFULLY, WELCOME " << name1 << "!" << std::endl;
	login(name1, password1);
	petla = 1;
	while (petla == 1) {
		petla = 0;
		std::cout << "WELCOME TO THE CONSOLE, FOR THE COMMAND LIST ENTER listcommand" << std::endl;
		std::cout << "CREATED BY Blukerek13 04.07.2026" << std::endl;
		std::cin >> command;
		if (command == "listcommand") {
			std::cout << "-listcommand COMMAND LIST" << std::endl;
			std::cout << "-changename CHANGE NAME" << std::endl;
			std::cout << "-changepassword CHANGE PASSWORD:" << std::endl;
			std::cout << "-clear CLEAR CONSOLE" << std::endl;
			std::cout << "-stop STOP CONSOLE";
			petla = 1;
		}
		if (command == "changename") {
			std::cout << "ENTER YOUR NEW NAME:" << std::endl;
			std::getline(std::cin, changename);
			std::string changename = name1;
			std::cout << "NAME SUCCESSFULLY CHANGED, WELCOME " << name1 << "!";
			petla = 1;
		}
		if (command == "changepassword") {
			std::cout << "ENTER YOUR NEW PASSWORD:" << std::endl;
			std::getline(std::cin, changepassword);
			std::string changepassword = password1;
			std::cout << "PASSWORD HAS BEEN CHANGED";
			petla = 1;
		}
		if (command == "clear") {
			system("cls");
			system("clear");
			std::cout << "CONSOLE CLEARED";
			petla = 1;
		}
		if (command == "stop") {
			std::cout << "CONSOLE STOPPED" << std::endl;
			exit(0);
		}
	}

	return 0;
}