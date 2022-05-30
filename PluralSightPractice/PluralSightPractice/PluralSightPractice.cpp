#include <iostream>
using std::cout;
using std::cin;

#include <string>
using std::string;

int main()
{
	string word1;
	string word2;

	cout << "Enter a word ";
	cin >> word1;
	cout << "You entered " << word1 << '\n';

	cout << "Enter a 2nd word ";
	cin >> word2;
	cout << "You entered " << word2 << '\n';
	
	int word1l = word1.length();
	int word2l = word2.length();

	if (word1l > word2l)
	{
		cout << "Word 1 is longer";
	}
	if (word1l < word2l)
	{
		cout << "Word 2 is longer";
	}
	if (word1l == word2l)
	{
		cout << "They are the same length";
	}
}