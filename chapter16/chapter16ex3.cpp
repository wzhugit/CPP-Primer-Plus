// C++ Primer Plus chapter16ex3.cpp
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <vector>

int main()
{
	using std::string;
	const int NUM = 26;
	std::vector<string> wordlist;

	using std::cout;
	using std::cin;
	using std::tolower;
	using std::endl;

	string word;

	std::ifstream f("E:\\C++编程练习\\chapter16ex3wordlist.txt",
		std::ofstream::in);    //open file with read mode

	while (f >> word)
	{
		wordlist.push_back(word);
	}

	int wordlength = wordlist.size();    //the length of the word list

	std::srand(std::time(0));
	char play;
	cout << "Will you play a word game? <y/n> ";
	cin >> play;
	play = tolower(play);

	while (play == 'y')
	{
		string target = wordlist[std::rand() % NUM];
		int length = target.length();
		string attempt(length, '-');
		string badchars;
		int guesses = 6;

		cout << "Guess my secret word. It has " << length
			<< " letters, and you guess\n"
			<< "one letter at a time. You get " << guesses
			<< " wrong guesses.\n";

		cout << "Your word: " << attempt << endl;

		while (guesses > 0 && attempt != target)
		{
			char letter;
			cout << "Guess a letter: ";
			cin >> letter;

			if (badchars.find(letter) != string::npos ||             //npos is an unsigned type,which means npos == the largest size of the string type;
				attempt.find(letter) != string::npos)                //string.find(args) returns the index of the required character; if not found, return npos
			{
				cout << "You already guessed that. Try again.\n";
				continue;
			}

			int loc = target.find(letter);

			if (loc == string::npos)
			{
				cout << "Oh, bad guess!\n";
				--guesses;
				badchars += letter;    //add to string
			}

			else
			{
				cout << "Good guess!\n";
				attempt[loc] = letter;

				//check if letter appears again
				loc = target.find(letter, loc + 1);

				while (loc != string::npos)
				{
					attempt[loc] = letter;
					loc = target.find(letter, loc + 1);
				}
			}

			cout << "Your word: " << attempt << endl;

			if (attempt != target)
			{
				if (badchars.length() > 0)
					cout << "Bad choices: " << badchars << endl;

				cout << guesses << " bad guesses left\n";
			}
		}

		if (guesses > 0)
			cout << "That's right!\n";

		else
			cout << "Sorry, the word is " << target << ".\n";

		cout << "Will you play another? <y/n> ";
		cin >> play;
		play = tolower(play);
	}

	cout << "Bye\n";

	return 0;
}