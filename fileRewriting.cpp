#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	ofstream input("input.txt");
	input << "A";
	input.close();
	const int size = 100;
	char ina[size] = "";
	char inb[size] = "";

	cout << "old symbol " << endl;
	cin >> ina;
	cout << "new symbol " << endl;
	cin >> inb;

	input.open("input.txt", ios::in | ios::out);
	input << inb;

	ofstream output("output.txt");
	output << ina;


	system("pause");
	return 0;
}
