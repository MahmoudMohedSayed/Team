#include <iostream>
#include <string>
using namespace std;
//.team
int main()
{
	int n, p = 0;
	bool a1, a2, a3;
	cout << "enter namber of selutions\n";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nenter a1\n";
		cin >> a1;
		cout << "enter a2\n";
		cin >> a2;
		cout << "enter a3\n";
		cin >> a3;
		cout << "-=-=-=-=-=-=-=-=-=-\n";
		if ((a1 + a2 + a3) >= 2)
		{
			p++;
		}

	}
	cout << "=-=-=-=-=-=-=-=-=-=-=\n";
	cout << p;
	return 0;
}