#include<iostream>
using namespace std;
string lower_case(string name)
{
	for (int i = 0; i < name.length(); i++) 
	{
		if (name[i] >= 'A' && name[i] <= 'Z')
			name[i] = name[i] + 32;
	}
	return name;
}
bool checkpalindrom(string name)
{
	int end_index = 0;
	int start_index = 0;
	for (start_index = 0, end_index = name.size() - 1; start_index <= 4 && end_index >= 0; start_index++, end_index--)
	{

		if (name[start_index] != name[end_index])
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}
int main()
{
	string name;
	cout << "Enter The Name : " << endl;
	cin >> name;
	(checkpalindrom(lower_case(name))) ? cout << name << " is Palindrome" : cout<<name<<" is  not Palindrome";
}