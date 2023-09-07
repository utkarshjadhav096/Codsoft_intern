#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

int main() {
   int ch,maxAttempts = 10;
   
    cout << "\t------------------Welcome to the Number Guessing Game!---------------" << endl;
    cout << "\n** You guess a number between 1 and 100**" << endl;
    
    do{
    	
	srand(time(0));

    int secretNumber = rand() % 100 + 1;

    int guess, attempts = 0 ;

    cout << " **Try to guess number in  " << maxAttempts << " attempts or less**\n" << endl;
	
	
    while (attempts < maxAttempts) {
        cout << "->Attempt " << attempts + 1 << ": Enter your guess: ";
        cin >> guess;

        if (cin.fail()) {
            cout << "Invalid input. Please enter a number." << endl;
            continue;
        }

        if (guess < 1 || guess > 100) {
            cout << "Please guess a number between 1 and 100." << endl;
            continue;
        }

        if (guess < secretNumber) {
            cout << "Too low! Plz enter high number.Try again\n" << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Plz enter low number.Try again\n" << endl;
        } else {
            cout << "\n\t*****Yuup!! ,Congratulations! You guessed the number (" << secretNumber << ") correctly in " << attempts + 1 << " attempts*****\n" << endl;
            break;
        }

        attempts++;
    }

    if (attempts == maxAttempts) {
        cout << "Sorry, you've reached the maximum number of attempts. The secret number was " << secretNumber << "." << endl;
    }
    
    cout<<"Want to continue( 1.Yes / 2.NO )>>";
    cin>>ch;
	}while(ch==1);

	cout<<"--------------THANK YOU !!! VISIT AGAIN !!!! RATE US !!!!-------------"<<endl;
    return 0;
}

