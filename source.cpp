#include <iostream>
using namespace std;

int main() {
	char mode;
	cout << "input mode : " << endl;
	cin >> mode;
	if (mode == 'm')
		cout << "master" << endl;
	else {
		if (mode == 'f')
			cout << "first" << endl;

		else if (mode == 's')
			cout << "second" << endl;
	}
	return 0;
}