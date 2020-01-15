#include <iostream>
#include <string>
using namespace std;

int hello1Function(string name1);
int hello2Function(string name2);

int main()
{
	string name1 = "Nicholas Hu";
	hello1Function(name1);

	string name2 = "Wesley Chok";
	hello2Function(name2);

	return 0;
}

