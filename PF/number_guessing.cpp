#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Initialize variables
    int initialScore = 500;
    int score = initialScore;
    int attempts = 0;
    int maxAttempts = 10;
    int hintPenalty = 20;
    int incorrectPenalty = 10;
    int correctBonus = 100;
    int numberToGuess, playerGuess, hintsUsed = 0;
    bool isGuessed = false;

    // Random number generation
    srand(time(0));
    numberToGuess = rand() % 100 + 1; // Random number between 1 and 100

    cout << "Welcome to RIPHAH University Guessing Game!" << endl;
    cout << "Try to guess the number (between 1 and 100)." << endl;

    while (attempts < maxAttempts) {
        attempts++;
        cout << "Attempt " << attempts << ": Enter your guess: ";
        cin >> playerGuess;

        if (playerGuess == numberToGuess) {
            isGuessed = true;
            cout << "Congratulations! You guessed the correct number!" << endl;

            // Apply bonus based on attempts
            if (attempts <= 2) {
                score += correctBonus;
            }
            break;
        } else {
            cout << "Incorrect guess." << endl;
            score -= incorrectPenalty;

            // Allow hint usage after 2 incorrect guesses
            if (attempts >= 2) {
                char useHint;
                cout << "Would you like a hint? (y/n): ";
                cin >> useHint;

                if (useHint == 'y' || useHint == 'Y') {
                    hintsUsed++;
                    score -= hintPenalty;

                    // Provide a hint
                    if (playerGuess < numberToGuess) {
                        cout << "Hint: The number is greater than " << playerGuess << "." << endl;
                    } else {
                        cout << "Hint: The number is less than " << playerGuess << "." << endl;
                    }
                }
            }
        }
    }

    // Final score calculation and result
    if (isGuessed) {
        cout << "You guessed the number in " << attempts << " attempts!" << endl;
        cout << "Final Score: " << score << endl;
    } else {
        cout << "Sorry! You couldn't guess the number within " << maxAttempts << " attempts." << endl;
        cout << "The correct number was: " << numberToGuess << endl;
        cout << "Final Score: 0" << endl;
    }

    cout << "Thanks for playing the RIPHAH University Guessing Game!" << endl;
    return 0;
}
