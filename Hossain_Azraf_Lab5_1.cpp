// Azraf Hossain
// Lab 5
// 10.8.24

#include <iostream>
#include <string> 

using namespace std;

int main()
{ // function so the code can run

    // defining variables
    double minutes;
    double weight;
    int exercise;
    double MET;
    double burn;
    double weightt;

    // printing out text to prompt the user & getting user input to define both variables
    cout << "What is your exercise duration (in minutes) and what is your weight (in kilograms)?" << endl;
    cin >> minutes;
    cin >> weight;

    // prompting the user to choose the exercise they'd like to do and recieving input
    cout << "What exercise would you like to do? [1 for walking slowly/ 2 for walking quickly/ 3 for jogging]: ";
    cin >> exercise;

    // switch function
    switch(exercise/1)
    { // squiggly

        case 1: // if walking slowly is chosen,
            MET = 2;
            cout << "amount of calories burned when Walking slowly: " << minutes * (MET * 3.5 * weight) / 200 << endl; // print out the amount of calories burned

            cout << "How many calories would you like to burn?: "; // recieve user input for the amount of calories they'd like to burn and their weight
            cin >> burn;
            cout << "What is your weight (in kilograms)?: ";
            cin >> weightt;

            cout << "Minutes required to burn " << burn << " calories via Walking Slowly: " << (burn / ((MET * 3.5 * weightt) / 200)) << endl; // print the amount of minutes needed to burn the amount of calories selected
            break;

        case 2: // if walking quickly is chosen,
            MET = 3;
            cout << "amount of calories burned when Walking quickly: " << minutes * (MET * 3.5 * weight) / 200 << endl; // print out the amount of calories burned

            cout << "How many calories would you like to burn?: "; // recieve user input for the amount of calories they'd like to burn and their weight
            cin >> burn;
            cout << "What is your weight (in kilograms)?: ";
            cin >> weightt;

            cout << "Minutes required to burn " << burn << " calories via Walking Quickly: " << burn / ((MET * 3.5 * weightt) / 200) << endl; // print the amount of minutes needed to burn the amount of calories selected
            break;

        case 3: // if jogging is chosen,
            MET = 8.8;
            cout << "amount of calories burned when Jogging: " << minutes * (MET * 3.5 * weight) / 200 << endl; // print out the amount of calories burned

            cout << "How many calories would you like to burn?: ";  // recieve user input for the amount of calories they'd like to burn and their weight
            cin >> burn;
            cout << "What is your weight (in kilograms)?: ";
            cin >> weightt;

            cout << "Minutes required to burn " << burn << " calories via Jogging: " << burn / ((MET * 3.5 * weightt) / 200) << endl; // print the amount of minutes needed to burn the amount of calories selected
            break;

        default: // if anything else is chosen, print the following text
            cout << "Invalid Input, please retry." << endl;

    }

    return 0; // required for all c++ programs to run
}



/*
What is your exercise duration (in minutes) and what is your weight (in kilograms)?
20
60
What exercise would you like to do? [1 for walking slowly/ 2 for walking quickly/ 3 for jogging]: 1
amount of calories burned when Walking slowly: 42
How many calories would you like to burn?: 42
What is your weight (in kilograms)?: 60
Minutes required to burn 42 calories via Walking Slowly: 20
*/
