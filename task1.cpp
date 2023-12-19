#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main()
{
    cout<< "\n\t\t\tWelcome to Guess The Number game!"
		<<endl;
	cout<< "In this game you have to guess a number between 1 and 100. "
			"You'll have limited choices based on the "
			"level you choose. Good Luck!"
		<<endl;

	while (true) {
		cout << "\nEnter the difficulty level: \n";
		cout << "easy!\n";
		cout << "medium!\n";
		cout << "difficult!\n";
		cout << "stop for ending the game!\n" << endl;

		// select the level of difficulty 
		string difficultyChoice;
		cout << "Enter the number: ";
		cin >> difficultyChoice;

		// generating the secret number for user
		srand(time(0));
		int randomNumber = 1 + (rand() % 100);
		int playerChoice;

		// For difficulty Level:Easy
		if (difficultyChoice == "easy") {
			cout << "\nYou have 10 choices for finding the "
					"secret number between 1 and 100.";
			int attemptsLeft = 10;
			for (int i = 1; i <= 10; i++) {

				cout << "\n\nEnter the number: ";
				cin >> playerChoice;

				// comparing the playerChoice matches
				// the secret number
				if (playerChoice == randomNumber) {
					cout << "Congratulations!!! Well played! You won, "
						<< playerChoice
						<< " is the secret number" << endl;
					cout << "\t\t\t Thanks for playing...."
						<< endl;
					break;
				}
				else {
					cout << "Sorry, " << playerChoice
						<< " is not the correct number\n";
					if (playerChoice > randomNumber) {
						cout << "The secret number is "
								"smaller than the number "
								"you have chosen"
							<< endl;
					}
					else {
						cout << "The secret number is "
								"greater than the number "
								"you have chosen"
							<< endl;
					}
					attemptsLeft--;
					cout << attemptsLeft << " choices left. "
						<< endl;
					if (attemptsLeft == 0) {
						cout << "You couldn't find the "
								"secret number, it was "
							<< randomNumber
							<< ", You lose!!"
                            << " Better Luck next time!!\n\n";
						cout << "Play the game again to "
								"win!!!\n\n";
					}
				}
			}
		}

		// Difficulty level : Medium
		else if (difficultyChoice == "medium") {
			cout << "\nYou have 7 choices for finding the "
					"secret number between 1 and 100.";
			int attemptsLeft = 7;
			for (int i = 1; i <= 7; i++) {
			    
				cout << "\n\nEnter the number: ";
				cin >> playerChoice;

				// comparing the playerChoice matches
				// the secret number
				if (playerChoice == randomNumber) {
					cout << "Congratulations!!! Well played! You won, "
						<< playerChoice
						<< " is the secret number" << endl;
					cout << "\t\t\t Thanks for playing...."
						<< endl;
					break;
				}
				else {
					cout << "Sorry, " << playerChoice
						<< " is not the right number\n";
					if (playerChoice > randomNumber) {
						cout << "The secret number is "
								"smaller than the number "
								"you have chosen"
							<< endl;
					}
					else {
						cout << "The secret number is "
								"greater than the number "
								"you have chosen"
							<< endl;
					}
					attemptsLeft--;
					cout << attemptsLeft << " choices left. "
						<< endl;
					if (attemptsLeft == 0) {
						cout << "You couldn't find the "
								"secret number, it was "
							<< randomNumber
							<< ", You lose!!\n\n"
                            << "Better Luck next time!!!\n\n";

						cout << "Play the game again to "
								"win!!!\n\n";
					}
				}
			}
		}
		// Difficulty level : difficult
		else if (difficultyChoice == "difficult") {
			cout << "\nYou have 5 choices for finding the "
					"secret number between 1 and 100.";
			int attemptsLeft = 5;
			for (int i = 1; i <= 5; i++) {

				cout << "\n\nEnter the number: ";
				cin >> playerChoice;

				// comparing the playerChoice matches
				// the secret number
				if (playerChoice == randomNumber) {
					cout << "Congratulations!!! Well played! You won, "
						<< playerChoice
						<< " is the secret number" << endl;
					cout << "\t\t\t Thanks for playing...."
						<< endl;
					break;
				}
				else {
					cout << "Sorry, " << playerChoice
						<< " is not the right number\n";
					if (playerChoice > randomNumber) {
						cout << "The secret number is "
								"smaller than the number "
								"you have chosen"
							<< endl;
					}
					else {
						cout << "The secret number is "
								"greater than the number "
								"you have chosen"
							<< endl;
					}
					attemptsLeft--;
					cout << attemptsLeft << " choices left. "
						<< endl;
					if (attemptsLeft == 0) {
						cout << "You couldn't find the "
								"secret number, it was "
							<< randomNumber
							<< ", You lose!!"
                            << " Better Luck next time!!\n\n";

						cout << "Play the game again to "
								"win!!!\n\n";
					}
				}
			}
		}
		// To end the game
		else if (difficultyChoice == "stop") {
			exit(0);
		}
		else {
			cout << "Wrong choice, Enter valid choice to "
					"play the game! from the options "
                    "easy, medium, difficult "
				<< endl;
		}
	}
	return 0;
}
