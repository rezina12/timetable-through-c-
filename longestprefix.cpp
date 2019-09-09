#include <bits/stdc++.h>

using namespace std;

string FindLongestPalindrome(string input_string)
{
    //Count array to store count of charcters
    int count[256] = {0};
    for (int i = 0; i < input_string.size(); i++)
    {
        count[input_string[i]]++;
    }
    //start, mid and end.
    string start = "", mid = "", end = "";
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        if (count[ch] & 1)
        {
            mid = ch;
            count[ch--]--;
        }
        else
        {
            for (int i = 0; i < count[ch]/2 ; i++)
            {
                start.push_back(ch);
            }
        }
    }
    end = start;
    //end is reverse of start
    reverse(end.begin(), end.end());
    return start + mid + end;
}

//Main function
int main()
{
    string input_string = "abcc";
    cout<<"Output palindrome string is: "<<FindLongestPalindrome(input_string);
    return 0;
}
