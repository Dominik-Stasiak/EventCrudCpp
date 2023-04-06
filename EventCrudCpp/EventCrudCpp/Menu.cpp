#include "Menu.h"


short c;

void createEvent() {
	std::cout << "\nSelect type of event :" << std::endl;
	std::cout << "\n1. Remind" << std::endl;
	std::cout << "2. Birthday" << std::endl;
	std::cout << " -> ";
	std::cin >> c;

    system("cls");
    if (c == 1) {
        std::cout << "\nRemind selected :" << std::endl;
        Remind* e = new Remind();
        e->newEvent();
    }
    else if (c == 2) {
        std::cout << "\nBirthday selected :" << std::endl;
        Birthday* e = new Birthday();
        e->newEvent();
    }
    else {
        std::cout << "\nInvalid option selected." << std::endl;
    }
}

void showEvent() {

}

void showAllEvents() {

}

void deleteEvent() {

}

void deleteAllEvents() {

}