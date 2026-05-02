// Vowel and Consonant.cpp : This program is to calculate no. of vowel and consonants

#include <iostream>
using namespace std;

//Function prototype 
void VowelOrConsonant(char userInput, int& vowel, int& consonant)

//Function definition
{
    // Convert uppercase to lowercase, check if input is uppercase letter
    if (userInput >= 'A' && userInput <= 'Z')
        userInput = userInput + 32;  

    // Check vowels
    if (userInput == 'a' || userInput == 'e' || userInput == 'i' ||
        userInput == 'o' || userInput == 'u')
    {
        vowel++;
    }
    // Check consonant
    else if (userInput >= 'a' && userInput <= 'z')
    {
        consonant++;
    }
    // Reject symbol / number
    else
    {
        cout << "\t" << userInput << " is invalid input. " << userInput << " is not a vowel or consonant." << endl;
    }
}

int main(void)
{
    int vowel, consonant;

    int totalVowels = 0; //int& vowel
    int totalConsonants = 0; //int& consonant
    char input;

    cout << "Please enter 10 characters : " << endl;

    for (int i = 0; i < 10; i++)
    {
        cin >> input;
        // Pass the counters by reference
        VowelOrConsonant(input, totalVowels, totalConsonants);
    }

    cout << "\n\nThe total number of vowel characters is : " << totalVowels << endl;
    cout << "The total number of consonant characters is : " << totalConsonants << endl;

    return 0;
}