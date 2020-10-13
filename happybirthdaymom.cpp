#include <iostream>
#include <string>

using namespace std;

int happyBirthday()
{
	cout << "Hello. Is this Rainie? (Y/N)" << endl;
	string answer;
	cin >> answer;
	if (answer == "Y" || answer == "y")
	{
		cout << "Ah! Today is your birthday! Your son (my wonderful and intelligent creator) wishes you a happy birthday, as do I!" << endl;
		return 0;
	}
	else if (answer == "N" || answer == "n")
	{
		cout << "Interesting. My creator did not make this for you. Goodbye." << endl;
		return 0;
	}
	else
	{
		cout << "That is not a valid answer. Please try again." << endl;
		return 1;
	}
}

int main()
{
	for (;;)
	{
		int holder = happyBirthday();
		if (holder == 0)
			break;
	}
}