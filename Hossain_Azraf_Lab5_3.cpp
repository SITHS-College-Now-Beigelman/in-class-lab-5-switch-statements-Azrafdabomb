// Azraf Hossain
// Lab 5
// 10.8.24

#include <iostream>
#include <string> 
#include <iomanip>
#include <cstdlib> // new library for the random values

using namespace std;

int main() // function so the code can run
{
    int x = 0, y = 0, input = 25; // defining variables
    srand(time(0));

    int i;
    for(i=1; i <= input; i++) // for each time that i is less than our input value (25 steps), take one step in any random direction
    {
        int direct;
        direct = rand() % 4 + 1; //random number between 1 and 4 so each is 25% //probable
        //1 means North, 2 means South, 3 means East and 4 means West
        switch(direct)
        {
            case 1:
                y = y + 1;
                break;

            case 2:
                y = y - 1;
                break;
            
            case 3:
                x = x + 1;
                break;

            case 4:
                x = x - 1;
                break;
        }
    }
    cout << x << ' ' <<  y << endl;
    // Robot's placement after 25 steps, -1 -6 (one step south and six steps west of the starting point). This result is not always guarunteed.
    return 0;
}

