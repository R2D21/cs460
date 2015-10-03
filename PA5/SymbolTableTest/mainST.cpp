#include "../classes/symbolTable.h"
//#include <iostream>
//using namespace std;

#define EXIT -100

void menu();


int main(){

	char input, yn;
	int scopeNum;
	symbolTable testTable;
	string varName;
	symbolTableEntry* testEntry;
	symbolTableEntry* newEntry;
	cout << "Symbol Table Test Program" << endl << endl;
	do{

		menu();
		cin >> input;
		switch(input){
			case '0':	// Exit program
				input = EXIT;
				break;
			case '1':	// Display symbol table
				testTable.writeToScreen();
				break;
			case '2':	// Begin new scope
				cout << "New outer scope? (y/n): ";
				cin >> yn;
				if( yn == 'n' ){
					testTable.pushLevelOn();
				}
				else{
					cout << "Enter new outer scope: ";
					cin >> scopeNum;
					testTable.pushLevelOn(scopeNum);
				}
				break;
			case '3':	// End current scope
				testTable.popLevelOff();
				break;
			case '4':	// Add variable to ST
				cout << "Enter new variable name: ";
				cin >> varName;
				newEntry = new symbolTableEntry();
				testTable.insertNewSymbol(varName, *newEntry);
				break;
			case '5':
				cout << "Enter variable to search for: ";
				cin >> varName;
				testEntry = testTable.searchTopOfStack(varName);
				if( testEntry == NULL ){
					cout << "Not found!" << endl;
				}
				else{
					cout << "Found!" << endl;
				}
				break;
			case '6':
				cout << "Enter variable to search for: ";
				cin >> varName;
				testEntry = testTable.searchForSymbol(varName, scopeNum);
				if( testEntry == NULL ){
					cout << "Not found!" << endl;
				}
				else{
					cout << "Found at Scope " << scopeNum << endl;
				}
				break;

		}
	}while( input != EXIT );

	return 0;
}

void menu(){
	cout << endl << "Select option:" << endl;
	cout << "\t" << "0. Exit program" << endl;
	cout << "\t" << "1. Display symbol table" << endl;
	cout << "\t" << "2. Begin new scope" << endl;
	cout << "\t" << "3. End current scope" << endl;
	cout << "\t" << "4. Add variable to ST" << endl;
	cout << "\t" << "5. Search top level" << endl;
	cout << "\t" << "6. Check if variable in scope" << endl;

}
