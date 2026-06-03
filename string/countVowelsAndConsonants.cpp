#include<iostream>
#include<string>
using namespace std;

int main() {

    string s = "sanju";

    int vowels = 0;
    int consonants = 0;

    for(char ch : s) {

        ch = tolower(ch);

        if(ch=='a' || ch=='e' || ch=='i' ||
           ch=='o' || ch=='u') {

            vowels++;
        }
        else if(isalpha(ch)) {

            consonants++;
        }
    }

    cout << "Vowels : " << vowels << endl;
    cout << "Consonants : " << consonants;

    return 0;
}