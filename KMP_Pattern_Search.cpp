#include <iostream>
#include <vector>
using namespace std;

vector<int> computeLPS(string pattern)
{
    int m = pattern.length();
    vector<int> lps(m, 0);
    int len = 0;

    for (int i = 1; i < m; )
    {
        if (pattern[i] == pattern[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
            if (len != 0)
            {
                len = lps[len - 1];
            }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}

void KMPSearch(string pattern, string text)
{
    int m = pattern.length();
    int n = text.length();
    vector<int> lps = computeLPS(pattern);

    int i = 0, j = 0;
    bool found = false;

    while (i < n)
    {
        if (pattern[j] == text[i])
        {
            i++;
            j++;
        }
        if (j == m)
        {
            cout << "Pattern found at index " << (i - j) << endl;
            found = true;
            j = lps[j - 1];
        }
        else if (i < n && pattern[j] != text[i])
        {
            if (j != 0)
            {
                j = lps[j - 1];
            }
            else
            {
                i++;
            }
        }
    }

    if (!found)
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

    KMPSearch(pattern, text);

    return 0;
}
