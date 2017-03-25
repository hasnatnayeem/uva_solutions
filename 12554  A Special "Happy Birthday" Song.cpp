#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //freopen("in.txt", "r", stdin);
    int people_index = 0, word_index = 0, counter = 0, people, i;
    string words[] = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you"};
    string s;
    vector<string> v;

    cin >> people;
    i = people;

    while (i--)
    {
        cin >> s;
        v.push_back(s);
    }

    while (1)
    {
        cout << v[people_index] << ": " << words[word_index] << endl;
        counter++;

        if (counter >= people && word_index == 15) break;

        people_index++;
        word_index++;

        if (people_index == people) people_index = 0;
        if (word_index == 16) word_index = 0;
    }
    return 0;
}
