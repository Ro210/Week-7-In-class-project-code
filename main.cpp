#include <iostream>
#include"MyString.h"
#include <sstream>
using namespace std;



int main() {

    //Create a MyString object with the date
    MyString DateofToday ("June7th2025");
    cout << DateofToday.GetString() << endl;

    //Define a maximum number of words and initalize variables
    const int MAX_WORDS = 100;
    MyString words[MAX_WORDS];
    int count;
    string line;
    stringstream sstrm;
    char buffer[50];


    // Prompt user for input and read a line of text
    cout << "Enter a sentence:";
    getline(cin, line);
    sstrm << line;

    //Extract words from the input line and store them in MyString objects
    count = 0;
    while ((count < MAX_WORDS) && (sstrm >> buffer)) {
        words[count++].SetString(buffer);
    }

    //Create a MyString object and set its value
    MyString s;
    s.SetString("Hello");
    s.SetString("Wed");

    //Output the string stored in the MyString object
    cout << s.GetString();

    return 0;
}
