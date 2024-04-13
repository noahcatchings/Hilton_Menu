// Student Number: 0302
// Course Section - CS155 - 03
// Due Date: x/x/xx
// Description: 


#include <iostream>
using namespace std;

int getChoice();



int main() {
	int selection;
	selection = getChoice();
	
	do{
		switch(selection){
			case 1: 
				cout << "1" << endl;
				break;
			case 2:
				cout << "2" << endl;
				break;
			case 3: 
				cout << "3" << endl;
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