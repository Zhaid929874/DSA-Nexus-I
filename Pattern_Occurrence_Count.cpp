#include <iostream>
#include <string>
using namespace std;
int countPattern(const string &text, const string &pattern)
{
    int count = 0;
    int textLength = text.length();
    int patternLength = pattern.length();
    for (int i = 0; i <= textLength - patternLength; i++)
    {
        if (text.substr(i, patternLength) == pattern)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    string text, pattern;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the pattern: ";
    getline(cin, pattern);
    int occurrences = countPattern(text, pattern);
    cout << "Pattern occurs " << occurrences << " times" << endl;
    return 0;
}
