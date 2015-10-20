#include "../classes/symbolTable.h"
//#include <iostream>
using namespace std;

#define EXIT -100

typedef std::pair<std::vector<int>, int> entry1;
int isValidType(std::vector<int> type);
void menu();


int main(){

	char input;
	int scopeNum;
	symbolTable testTable;
	string varName;
	symbolTableEntry* testEntry;
	cout << "Symbol Table Test Program" << endl << endl;
	int line = 0;
	int type;
	do{
		std::vector<int> typeVec;
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
				testTable.pushLevelOn();
				break;
			case '3':	// End current scope
				testTable.popLevelOff();
				break;
			case '4':	// Add variable to ST
				cout << "Enter new variable name: ";
				cin >> varName;
				if( testTable.searchForSymbol(varName, line) != NULL ){
					cout << "Error: Variable already declared" << endl;
					break;
				}
				testEntry = testTable.insertNewSymbol(varName, line);
				cout << "Enter variable type: " << endl;
				cout << "\t1. char" << endl;
				cout << "\t2. double" << endl;
				cout << "\t3. float" << endl;
				cout << "\t4. int" << endl;
				cout << "\t5. long" << endl;
				cout << "\t6. long long" << endl;
				cout << "\t7. long double" << endl;
				cout << "\t8. short" << endl;
				cout << "\t9. void" << endl;
				cin >> type;
				switch(type){
					case 1:
						typeVec.push_back(CHAR_T);
						testEntry->setIdentifierType( typeVec );
						break;
					case 2:
						typeVec.push_back(DOUBLE_T);
						testEntry->setIdentifierType( typeVec );
						break;
					case 3:
						typeVec.push_back(FLOAT_T);
						testEntry->setIdentifierType( typeVec );
						break;
					case 4:
						typeVec.push_back(INT_T);
						testEntry->setIdentifierType( typeVec );
					case 5:
						typeVec.push_back(LONG_T);
						testEntry->setIdentifierType( typeVec );
					case 6:
						typeVec.push_back(LONG_T);
						typeVec.push_back(LONG_T);
						testEntry->setIdentifierType( typeVec );
					case 7:
						typeVec.push_back(LONG_T);
						typeVec.push_back(DOUBLE_T);
						testEntry->setIdentifierType( typeVec );
					case 8:
						typeVec.push_back(SHORT_T);
						testEntry->setIdentifierType( typeVec );
					case 9:
						typeVec.push_back(VOID_T);
						testEntry->setIdentifierType( typeVec );
					default:
						break;
				}
				line++;
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

int isValidType(std::vector<int> type){

	// populate the map for each symbol table entry
	// ex: "long long, long int, etc."
	std::map<std::vector<int>, int> validTypes; 
	std::map<std::vector<int> , int>::iterator mapItr;

	std::vector<int> validType;

	// char
	validType.push_back(CHAR_T);
	validTypes.insert(entry1(validType, CHAR_T));
	validType.clear();

	// double
	validType.push_back(DOUBLE_T);
	validTypes.insert(entry1(validType, DOUBLE_T));
	validType.clear();

	// float
	validType.push_back(FLOAT_T);
	validTypes.insert(entry1(validType, FLOAT_T));
	validType.clear();

	// int 
	validType.push_back(INT_T);
	validTypes.insert(entry1(validType, INT_T));
	validType.clear();

	// long
	validType.push_back(LONG_T);
	validTypes.insert(entry1(validType, LONG_T));
	validType.clear();

	// long int
	validType.push_back(LONG_T);
	validType.push_back(INT_T);
	validTypes.insert(entry1(validType, LONG_T));
	validType.clear();

	// long long
	validType.push_back(LONG_T);
	validType.push_back(LONG_T);
	validTypes.insert(entry1(validType, LONG_LONG_T));
	validType.clear();	

	// long long int
	validType.push_back(LONG_T);
	validType.push_back(LONG_T);
	validType.push_back(INT_T);
	validTypes.insert(entry1(validType, LONG_LONG_T));
	validType.clear();

	// long double
	validType.push_back(LONG_T);
	validType.push_back(DOUBLE_T);
	validTypes.insert(entry1(validType, LONG_DOUBLE_T));
	validType.clear();

	// short
	validType.push_back(SHORT_T);
	validTypes.insert(entry1(validType, SHORT_T));
	validType.clear();	

	// short int
	validType.push_back(SHORT_T);
	validType.push_back(INT_T);
	validTypes.insert(entry1(validType, SHORT_T));
	validType.clear();	

	// void
	validType.push_back(VOID_T);
	validTypes.insert(entry1(validType, VOID_T));
	validType.clear();	



	mapItr = validTypes.find(type);
	if(mapItr != validTypes.end()){
		return mapItr->second;
	}
	return -1;
}
