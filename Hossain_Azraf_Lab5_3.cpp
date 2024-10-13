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
    srand(time(0));

    int i;
    for(i=1; i <= input; i++)
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
    // Robot's placement after 25 steps, -1 -6 (one step south and six steps west of the starting point)

    cout << '1' << endl;
    x = 0;
    y = 0;
    int direct;
    direct = rand() % 4 + 1; //random number between 1 and 4 so each is 25% //probable

    int steps = 0;
    while (!(x == 2 && y == 3)) 
    {    
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
    steps = steps + 1;
    }
    cout << steps << "    " << x << ' ' << y;
    return 0;
}
