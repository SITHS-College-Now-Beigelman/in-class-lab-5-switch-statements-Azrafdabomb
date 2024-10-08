// Azraf Hossain
// Lab 5
// 10.8.24

#include <iostream>
#include <string> 
#include <iomanip>


using namespace std;

int main(){ // function so the code can run

    double GB; // Defining the Variable GB

    cout << "How many GB do you have in your monthly hotspot plan?" << endl;
    cin >> GB; // Recieving user input for the amount of GigaBytes

    double MB = (GB*1000); // Converting GigaBytes into MegaBytes

    // All calculations to determine how many hours of each quality the user has
    cout << (MB/43.2) << " Hours of Low Quality music streaming." << endl;
    cout << (MB/72) << " Hours of Normal Quality music streaming." << endl;
    cout << (MB/115.2) << " Hours of High Quality music streaming." << endl;

return 0; // This is required in all c++ programs so the code can run
}

/*
How many GB do you have in your monthly hotspot plan?
20
462.963 Hours of Low Quality music streaming.
277.778 Hours of Normal Quality music streaming.
173.611 Hours of High Quality music streaming.
PS C:\Users\aysup\github-classroom\SITHS-College-Now-Beigelman\homework-programming-lab-1-input-output-and-variables-Azrafdabomb>
*/