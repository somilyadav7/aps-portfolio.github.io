#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
	string first[] = { "Python", "C++", "Java", "React" };
	string second[] = { "Python","Java"};
	int n = sizeof(first) / sizeof(first[0]);

	vector<string> v(10);
	vector<string>::iterator it, st;

	sort(first, first + n);
	sort(second, second + n);

	it = set_difference(first, first + n, second, second + n, v.begin());

	cout << "Students attending first class only are :\n";
	for (st = v.begin(); st != it; ++st)
		cout << ' ' << *st;
	cout << '\n';

	return 0;
}
