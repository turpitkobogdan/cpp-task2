#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

string s;
static int num = 1;

void gen(unsigned k)
{
	if (k == s.length())
	{
		cout << num++ << ":";
		cout << s << '\n';
		cout << endl;
	}

	else
		for (unsigned j = k; j < s.length(); j++)
			if (s[j] != s[j + 1])
			{
				swap(s[k], s[j]);
				gen(k + 1);
				swap(s[k], s[j]);
			
			}
}

int main()
{	 
	cout << "Input values:" << '\n';
	cin >> s;
	sort(s.begin(), s.end());
	gen(0);
	system("pause");
	return 0;
}