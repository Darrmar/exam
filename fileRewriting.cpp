#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	fstream input("input.txt", ios::in);
	fstream output("output.txt" , ios::out | ios::trunc);
	int i;
	char ina;
	char inb;
	string str;
	char rep[80];
	int count = 0;

	cout << "old symbol " << endl;
	cin >> ina;
	cout << "new symbol " << endl;
	cin >> inb;
	
	while (getline(input, str))
	{
		for (i = 0; i < str.length();i++){
			if (str[i] == ina) {
				rep[i] = inb;
				count = count + 1;
			}
			else {
				rep[i] = str[i];
			}
			output.put(rep[i]);
		}
		output << endl;
	}
	input.close();
	output.close();

	output.open("output.txt", ios::in);
	input.open("input.txt", ios::out | ios::trunc);

	while (getline(output, str))
	{
		for (i = 0; i < str.length(); i++) {
			rep[i] = str[i];
			input.put(rep[i]);
		}
		input << endl;
	}

	input.close();
	output.close();

	output.open("output.txt", ios::out | ios::trunc);

	for (i = 0; i < count; i++) {
		output << ina;
	}
	output.close();

	system("pause");
	return 0;
}