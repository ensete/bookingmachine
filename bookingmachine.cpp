// Nikita Stoletov 2023 All Rights Reserved
#include "bookingmachine.hpp"
#include <iostream>
using namespace std;

// Global Variable Declaration
enum time
{
    breakfast = 0,
    lunch = 1,
    tea = 2,
    dinner = 3
};

// Classes
class Booking
{
    // Variables Declaration
    public: enum time meal;
    public: string Name;
    public: string approvement;
    public: bool itsreallyapproved;
    // itsreallyapproved = false;


};

// Global Functions
int main(int argc, char const *argv[])
{
    // Creating an array of bookings to save finalised bookings
    Booking finalised[1];
    new Booking[1];
    // Making a confrimed booking
    Booking confirmedBooking;
while (!confirmedBooking.itsreallyapproved == false)
{
    string input;

        // Asking for a customer's name
        cout << "What's your name?";
        // Saving the name to the confrimedBooking
        cin >> confirmedBooking.Name;
        // Asking for the time
        cout << "Choose a time\n. Breakfast. Lunch. Tea. Dinner.";
        // Saving the time to the confirmedmeal
        cin >> input;
        confirmedBooking.meal = input;
        // Asking for confirmation
        cout << "Dear "+ confirmedBooking.Name + "!" + "Your booking is scheduled for " + confirmedBooking.meal + ". Are you happy with that?";
        // Saving confirmation
        cin >> confirmedBooking.approvement;
        // Checking possible cases for Yes and No and taking action
        switch (confirmedBooking.approvement)
        {
            case "Yes":
            case "Да":
            case "Y":
            case "Ja":
            finalised[0] = confirmedBooking;
            itsreallyapproved = true;
            break;
 
            case "No":
            case "N":
            case "Нет":
            case "Nein":
            confirmedBooking = new confirmedBooking;
            break;
        }
}



    /* code */
    return 0;
}
