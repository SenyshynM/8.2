#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <iostream>

using namespace std;
bool FirstLetter(char* str);

int main()
{
    char s[101]; 
    cout << "Enter string:" << endl;
    cin.getline(s, 101);
    if (FirstLetter(s))
        cout << "yes" << endl;
    else
        cout << "no" << endl;
}

bool FirstLetter(char* str) 
{
    int k = 0;
    char* str2;

    str2 = strtok(str, " "); // функція шукає розділення 
    while (str2 != NULL) 
    {
        if (str2[0] == 'a') 
            return true;

        str2 = strtok(NULL, " ");
    }
    
    return false;
}