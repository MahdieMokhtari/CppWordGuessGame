#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;

int word_chooser(string dict[], int n);
bool check(char window_data[], int size, char character, string word);
bool end_check(char window_data[], int size);

int main()
{
    srand((unsigned) 2);
    string main_dict[] = {"hello", "clock", "car"};
    int main_data_size = 3;
    
	bool play = true;
    
    while (play)
    {
        int word_index = word_chooser(main_dict , main_data_size);
        string game_word = main_dict[word_index];

        int hearts = 5;
        int len = game_word.length();
        char player_guess;
        char answer;
        char player_data[len];

        cout << "HEARTS : " << hearts << endl;
        
        for (int i = 0; i < len; i++)
        {
            player_data[i] = '_';
        }

        do
        {
            cout << "Enter a word for guess : " << endl;
            cin >> player_guess;

            if (check(player_data , len , player_guess , game_word) == true)
            {
                cout << "succed : ";
                for (int i = 0; i < len; i++)
                {
                    cout << player_data[i];
                }
                 cout << endl;
            }
            else
            {
                hearts--;
                cout << "sorry" << endl 
                << "HEARTS : " << hearts << endl;
            }
            if (end_check(player_data , len) == true)
            {
                // cout << "you have won !!!!!";
                break;
            }
        } while ( hearts != 0);
        
        if (hearts > 0)
        {
            cout << "you have won!!!!!!!!" << endl;
        }
        else
        {
            cout << "you have lost!!!!!!!" << endl;
        }

        cout << "wanna play agian ? (Y/N) : ";
        cin >> answer;
        if (answer == 'N' || answer == 'n')
        {
            play = false;
        }
    }

}

int word_chooser(string data[], int n)
{
    int random = rand() % n;
    string word = data[random];
    for (int i = 0; i < size(word); i++)
    {
        cout << "_";
    }
    cout << endl;

    //returning the choosen word index in the main array : 
    return random;
}

bool check (char window_data[], int size, char character,string word)
{
	char str[size];
	for (int i=0 ; i<size ; i++)
	    str[i]=word[i];
	bool f=false;
	for (int i=0 ; i<size ; i++)
        if (str[i]==character)
        {
        	window_data[i]=character ;
        	f=true;
		}
s	return f;
}

bool end_check(char window_data[], int size)
{
	bool f=true;
	for (int i=0 ; i<size ; i++)
        if (window_data[i]=='_')
            f=false;
    return f;
}
