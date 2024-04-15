// Student Number: 0302
// Course Section - CS155 - 03
// Due Date: x/x/xx
// Description: 


#include <iostream>
#include <fstream>
using namespace std;

int getChoice();
int readRoomPrices();
double addToOrder();





int main() {
	int selection;
	int roomNum;
	selection = getChoice();
	
	do{
		switch(selection){
			case 1: 
				roomNum = readRoomPrices();
				readRoomPrices();
				break;
			case 2:
				readRoomPrices();
				break;
			case 3: 
				readRoomPrices();
				break;
			default:
				exit(1);
			}
		} while(selection != 0);
			
		
	
	return 0;
}

int getChoice(){
	int choice; 
	
	cout << "WELCOME TO THE HILTON HONORS BOOKING SYSTEM!" << endl;
	cout << "Choose an option below:" << endl << endl;
	
	cout << "1. Embassy Suites" << endl;
	cout << "2. Hilton Garden" << endl;
	cout << "3. DoubleTree" << endl;
	cout << "0. End of the Day: Stop Processing" << endl;
	cin >> choice;
	
	return choice;
}

int readRoomPrices(){
	int room;
	
	cout << "Select a Room: " << endl;
	cout << "1.) 1 Queen $65.17" << endl;
	cout << "2.) 2 Queen $95.13" << endl;
	cout << "3.) 1 King $150.15" << endl;
	cout << "4.) 2 King $253.25" << endl;
	cout << "5.) Luxury Suite for Two $357.99" << endl;
	cin >> room;
	
	return room;
}
