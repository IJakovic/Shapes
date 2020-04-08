#include <iostream>

using namespace std;

int main() {

	int n = 7;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (n - i >= j)
			{
				cout << "x";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}


	return 0;
}