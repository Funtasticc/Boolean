#include <iostream>
using namespace std;

int main()
{
	
	int x = 3;
		int y = 4;
		int summand;
		bool abc;

		summand = x + y;
		
		if (summand == 8)
		{
			abc = true;
		}

		if (summand != 8)
		{
			abc = false;
		}

		if (abc == true)
		{
			cout << "die rechnung ist richtig" << endl;
		}

		if (abc == false)
		{
			cout << "die rechnung ist falsch"<< endl;
		}

	system("PAUSE");
	return 0;
}
