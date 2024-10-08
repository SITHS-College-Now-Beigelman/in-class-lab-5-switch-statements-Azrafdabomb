// Azraf Hossain
// Lab 5
// 10.8.24

#include <iostream>
#include <string> 
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    int x = 0, y = 0, input = 25;


    int i;
    for(i=1; i <= input; i++)
    {
        srand(time(0));
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
    cout << x << ' ' <<  y;
    return 0;
}
