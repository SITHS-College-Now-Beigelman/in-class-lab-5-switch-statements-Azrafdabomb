// Azraf Hossain
// Lab 5
// 10.8.24

#include <iostream>
#include <string> 
#include <iomanip>
#include <cstdlib> // new library used for random values

using namespace std;

int main() // function where the code runs
{
    srand (time(0));

    int totalSteps = 0, steps = 0, direct, trials = 10; // defining variables
    double averageSteps;

    for (int i = 0; i < trials; i++) // trials start at 0 and for every time the loop repeats without hitting 10, it appends 1 trial
    {
        int x = 0, y = 0;
        while (x != 2 || y != 3) // loops until the x coordinate reaches 2 and the y coordinate also reaches 2
            {
                direct = rand() % 4 + 1;
                steps++; // for each repetition, add to the steps count 
                switch (direct)
                {
                    case 1: 
                    y += 1;
                    break; // North

                    case 2:
                    y -= 1;
                    break; // South

                    case 3: 
                    x += 1;
                    break; // East

                    case 4:
                    x -= 1;
                    break; // West
                }
            }
    totalSteps += steps; // appends to total steps
    cout << "Trial " << i + 1 << ": Reached (2, 3) in "<< steps << " steps.\n"; // outputs the amount of steps required to rea
    }
    averageSteps = (totalSteps) / trials; // takes the total steps and divide it by trials (10)
    cout << "Average trial count to get to (2,3): " << averageSteps << "\n"; // outputs the average
return 0;

}

/*
Trial 1: Reached (2, 3) in 66773 steps.
Trial 2: Reached (2, 3) in 68376 steps.
Trial 3: Reached (2, 3) in 69881 steps.
Trial 4: Reached (2, 3) in 69932 steps.
Trial 5: Reached (2, 3) in 250269 steps.
Trial 6: Reached (2, 3) in 332122 steps.
Trial 7: Reached (2, 3) in 512659 steps.
Trial 8: Reached (2, 3) in 774332 steps.
Trial 9: Reached (2, 3) in 774447 steps.
Trial 10: Reached (2, 3) in 839822 steps.
*/