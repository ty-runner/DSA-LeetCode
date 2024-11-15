#include <iostream>
using namespace std;

int main()
{
    int age[] = {16,48,72,66,23};
    
    for(int i = 0; i < 5; i++)
    {        
        // your code goes here. 
        if(age[i] >= 60){
            cout << "Retired" << endl;
        }
        else if(age[i] < 20){
            cout << "Child" << endl;
        }
        else{
            cout << "Adult" << endl;
        }
        // use a if else block to classify the person as Child / Adult / Retired
    }
    return 0;
}