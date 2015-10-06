#include <Windows.h>
#include <string>
#include <iostream>
std::string name;
std::string question;
std::string answer = "YN";
std::string trash;

struct eseteam
{
	std::string firstname;
	std::string lastname;
	std::string birthdate;
	int number=0;
};

eseteam newteam[2];

int main() {
	if(newteam[0].number > 3000){
		std::cout << "That is one BIG Number! be careful!"<< std::endl;
	}
again:
	std::cout << "Your Data:" << std::endl;
	
	std::cout << "Firstname :" << std::endl;
	//std::cin >> newteam[0].firstname;
	std::cin >> trash;
	newteam[0].firstname = "Why is this not my firstname?";
	std::cout << "Lastname :" << std::endl;
	//std::cin >> newteam[0].lastname;
	std::cin >> trash;
	newteam[0].lastname = "Where is my inserted lastname?";
	std::cout << "Birthdate :" << std::endl;
	//std::cin >> newteam[0].birthdate;
	std::cin >> trash;
	newteam[0].birthdate = "01.01.2223 WTF?";
	newteam[0].number = 1337;
	std::cout << "Your entered Information: " << std::endl << "Firstname: " << newteam[0].firstname << std::endl << "Lastname: " << newteam[0].lastname << std::endl << "Birthdate: " << newteam[0].birthdate << std::endl << "Number: " << newteam[0].number << std::endl << std::endl;
	reanswer:
	std::cout << "Right? <Y/N>";
	std::cin >> question;
	std::cout << std::endl;
	if (question[0] == answer[0]) {
		std::cout << "YOU LIE!!!" << std::endl;
		Sleep(5000);
		std::cout << "Pls Enter correct Information!" << std::endl;
		goto again;
	}
	else {
		if (question[0] == answer[1]) {
			std::cout << "Then pls correct it!" << std::endl;
			Sleep(1000);
			goto again;
		}
		else {
			std::cout << "Wrong Answer!!!" << std::endl;
			Sleep(3000);
			goto reanswer;
		}
	}
	if(newteam[0].firstname==newteam[1].firstname && newteam[0].lastname==newteam[1].lastname){
		std::cout << "YOUR NAME IS A LIE!!!" << std::endl;	
	}
	if(newteam[0].firstname==newteam[2].firstname && newteam[0].lastname==newteam[2].lastname){
		std::cout << "YOUR NAME IS A LIE!!!" << std::endl;	
	}
	if(newteam[1].firstname==newteam[2].firstname && newteam[1].lastname==newteam[2].lastname){
		std::cout << "YOUR NAME IS A LIE!!!" << std::endl;	
	}
	system("pause >nul");
	return 0;
}
