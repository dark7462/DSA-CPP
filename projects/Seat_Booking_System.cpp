/*
8) Problem Statement-8: Seat Booking System
A theater seating arrangement is represented as a 2D array. Write a program to check availability and book a seat.
Example: int seats[10][15] with 0 for available and 1 for booked.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    const int rows = 10, cols = 15;
    int seats[rows][cols] = {0};    //initating all by 0
    int row, col;
    char choice;    

    cout << "Welcome to the Theater Seat Booking System!\n";

    while (true) {
        cout << "Seating Arrangement (0 = Available, 1 = Booked):\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << seats[i][j] << "\t";
            }
            cout << endl;
        }

        cout << "\nOptions:\n";
        cout << "1. Book a seat\n";
        cout << "2. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;  // to quit or go on

        if (choice == '1') {
            cout << "Enter the row (0-" << rows - 1 << ") and column (0-" << cols - 1 << ") to book: ";
            cin >> row >> col;

            if (row < 0 || row >= rows || col < 0 || col >= cols) {
                cout << "Invalid seat position! Please try again.\n";
                continue;//skip if alredy booked
            }

            if (seats[row][col] == 0) {
                seats[row][col] = 1;    // change of you want to book
                cout << "Seat at (" << row << "," << col << ") has been successfully booked!\n";
            } else {
                cout << "Seat at (" << row << "," << col << ") is already booked. Please choose another seat.\n";
            }
        } else if (choice == '2') {
            cout << "Thank you for using the Seat Booking System! Goodbye!\n";
            break;
        } else {
            cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}

