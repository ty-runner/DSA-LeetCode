#include<iostream> 
#include<string>
using namespace std; 
int main() 
{ 
    string sometext="This is a new text"; //Declaring a string

    cout << "Initial value of sometext is: " << sometext << endl;  //Writing the initial text to the console.
    //Note: that endl isn't needed to show the value on the console, but adds a new line at the end

    getline(cin, sometext);  //Reading textinput from the keyboard

    cout << "You entered: " << sometext << endl;  //Writing the given text back to the console.

    return 0;
}