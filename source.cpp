#include <iostream>
using namespace std;

int main() {
	char mode;
	cout << "input mode : " << endl;
	cin >> mode;
	if (mode == 'm')
		cout << "master" << endl;
	else if (mode == 'f')
		cout << "frist" << endl;
	else if (mode = 's')
		cout << "second" << endl;
	else if (mode = 't')
		cout << "third" << endl;
	else
		cout << "ERROR!!" << endl;
	return 0;
}