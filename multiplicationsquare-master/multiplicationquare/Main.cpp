#include <iostream>
#include<iomanip>
using namespace std;

int main()
{	 
	for (int x=1; x<= 20; x++)
	{
		for (int y=1; y<= 20; y++)
		{
			int total = y * x;

			cout << total << " ";

			if (total < 10) {
				cout << " ";
			}

			if (total < 100) {
				cout << " ";
			}

		}

		cout << endl;			
	}
	return 0;

}

