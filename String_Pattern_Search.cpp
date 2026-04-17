#include <iostream>
#include <string>
using namespace std;
void findPattern(const string &text, const string &pattern)
{
    string indices = "";
    int textLength = text.length();
    int patternLength = pattern.length();
    if (patternLength == 0)
    {
        cout << "Pattern is empty. Please provide a valid pattern." << endl;
        return;
    }
    for (int i = 0; i <= textLength - patternLength; i++)
    {
        if (text.substr(i, patternLength) == pattern)
        {
            indices += to_string(i) + " ";
        }
    }
    if (!indices.empty())
    {
        cout << "Pattern found at indices: " << indices << endl;
    }
    else
    {
        cout << "Pattern not found in the text." << endl;
    }
}
int main()
{
    string text, pattern;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the pattern: ";
    getline(cin, pattern);
    findPattern(text, pattern);
    return 0;
}
