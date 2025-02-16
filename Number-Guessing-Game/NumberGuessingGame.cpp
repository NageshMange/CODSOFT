#include <iostream>
#include <cstdlib>
#include <ctime>
#include <climits>
using namespace std;
//Guessing function
void guess_the_number() {
    srand(time(0));
    int number = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "********Welcome to the Number Guessing Game!********\n";
    cout << "I'm thinking of a number between 1 and 100.\n";

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "Invalid input. Please enter a number.\n";
            continue;
        }

        if (guess < number) {
            cout << "Too low! Try again.\n";
        } else if (guess > number) {
            cout << "Too high! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the number accurately " << number << " in " << attempts << " attempts.\n";
            break;
        }
    }
}

int main() {
    guess_the_number();
    return 0;
}
