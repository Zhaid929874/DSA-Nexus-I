#include <iostream>
#include <string>
using namespace std;
bool findPattern(const string &text, const string &pattern)
{
    int textLength = text.length();
    int patternLength = pattern.length();
    if (patternLength == 0)
    {
        return true;
    }
    for (int i = 0; i <= textLength - patternLength; i++)
    {
        if (text.substr(i, patternLength) == pattern)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    string text, pattern;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the pattern: ";
    getline(cin, pattern);
    bool result = findPattern(text, pattern);
    if (result)
    {
        cout << "Pattern exists: True" << endl;
    }
    else
    {
        cout << "Pattern does not exist: False" << endl;
    }
    return 0;
}
