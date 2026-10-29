#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int left = 0;
    int right = s.length() - 1;

    while (left < right)
    {
        // Skip non-alphanumeric characters from the left
        if (!isalnum(static_cast<unsigned char>(s[left])))
        {
            left++;
        }

        // Skip non-alphanumeric characters from the right
        else if (!isalnum(static_cast<unsigned char>(s[right])))
        {
            right--;
        }

        // Compare characters after converting to lowercase
        else if (tolower(static_cast<unsigned char>(s[left])) !=
                 tolower(static_cast<unsigned char>(s[right])))
        {
            cout << "Not a Valid Palindrome" << endl;
            return 0;
        }

        else
        {
            left++;
            right--;
        }
    }

    cout << "Valid Palindrome" << endl;

    return 0;
}