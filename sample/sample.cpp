#include "ls/algorithm.h"
#include "iostream"
#include "string"

using namespace std;

int main()
{
	vector<string> a = {"1", "23", "456"};
	cout << ls::size(a) << endl;
	return 0;
}
