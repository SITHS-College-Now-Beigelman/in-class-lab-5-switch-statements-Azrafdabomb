// Azraf Hossain
// Lab 5
// 10.8.24

#include <iostream>
#include <string> 
#include <iomanip>

using namespace std;

int main()
{ // function so the code can run

    double GB; // Defining the Variables
    int quality;

    cout << "How many GB do you have in your monthly hotspot plan?" << endl;
    cin >> GB; // Recieving user input for the amount of GigaBytes

    double MB = (GB*1000); // Converting GigaBytes into MegaBytes

    cout << "What Quality of music do you want to download?: [1 for Low/ 2 for Normal/ 3 for High]: "; // asking and receiving user input for the quality of music they'd like
    cin >> quality;

    switch(quality/1)
    {
        case 1: // if low quality is chosen,   
            cout << (MB/43.2) << " Hours of Low Quality music streaming." << endl; // do the calculation for the respective quality
            break;

        case 2: // if normal quality is chosen,
            cout << (MB/72) << " Hours of Normal Quality music streaming." << endl; // do the calculation for the respective quality
            break;

        case 3: // if high quality is chosen,
            cout << (MB/115.2) << " Hours of High Quality music streaming." << endl; // do the calculation for the respective quality
            break;

        default: // if anything else is chosen, print the following text
            cout << "Invalid input, please retry.";
    }
return 0; // This is required in all c++ programs so the code can run
}
/*
How many GB do you have in your monthly hotspot plan?
1
What Quality of music do you want to download?: [1 for Low/ 2 for Normal/ 3 for High]: 2
13.8889 Hours of Normal Quality music streaming.
*/