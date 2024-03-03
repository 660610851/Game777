#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <limits>

using namespace std;

int main()
{
    int money = 777;
    int AImoney = 777;
    string name;

    cout << "Welcome to Best random 7 !!!$$$$" << endl;
    cout << "Press Enter to Continue" << endl;
    cin.ignore();

    cout << "Input player name :";
    getline(cin, name);

    cout << "Welcome " << name << "!!" << endl;
    cout << "\nAI VS " << name << endl;

    int round = 1;
    while (money > 0 && AImoney > 0)
    {
        cout << "\nRound :" << round << endl;
        cout << "\nYou have " << money << " $" << endl;
        cout << "AI have " << AImoney << " $" << endl;

        int number, betting;
        do
        {
            cout << "Guess a number between 1 and 100: ";
            cin >> number;
            if (cin.fail() || number < 1 || number > 100)
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input. Please enter a number between 1 and 100.\n";
            }
        } while (cin.fail() || number < 1 || number > 100);

        cout << "You guessed: " << number << endl;

        cout << "Input money to bet: ";
        cin >> betting;

        while (betting > money)
        {
            cout << "Your betting amount is more than your current money" << endl;
            cout << "Input money to bet: ";
            cin >> betting;
        }

        srand(time(0));
        int AIbet = rand() % 776 + 1;
        cout << "AI bet: " << AIbet << endl;

        int airandomNumber = rand() % 100 + 1;
        cout << "AI guess an integer (1-100): " << airandomNumber << endl;

        int randomNumber;
        do
        {
            randomNumber = rand() % 100 + 1;
        } while (randomNumber == airandomNumber);

        cout << "\nSystem random integer (1-100): " << randomNumber << endl;

        int playerdiff = abs(randomNumber - number);
        int AIdiff = abs(randomNumber - airandomNumber);
        cout << "\nPlayer's guess difference: " << playerdiff << endl;
        cout << "AI's guess difference: " << AIdiff << endl;

        if (playerdiff < AIdiff)
        {
            money = money + betting + betting / 2;
            AImoney = AImoney - AIbet;
            cout << "\nPlayer win!!" << endl;
            cout << "Player money total = " << money << endl;
            cout << "AI money total = " << AImoney << endl;
        }
        else if (AIdiff < playerdiff)
        {
            AImoney = AImoney + AIbet + AIbet / 2;
            money = money - betting;
            cout << "\nAI win!!" << endl;
            cout << "AI money total = " << AImoney << endl;
            cout << "Player money total = " << money << endl;
        }
        else if (playerdiff % 7 == 0 || randomNumber % 7 == 0)
        {
            money = money + betting + betting / 2;
            AImoney = AImoney - AIbet;

            cout << "\nPlayer win!!" << endl;
            cout << "Player money total = " << money << "\n";
            cout << "AI money total = " << AImoney << endl;
        }
        else if (AIdiff % 7 == 0 || randomNumber % 7 == 0)
        {
            AImoney = AImoney + AIbet + AIbet / 2;
            money = money - betting;
            cout << "\nAI win!!" << endl;
            cout << "AI money total = " << AImoney << endl;
            cout << "Player money total = " << money << endl;
        }
        else if (AIdiff == randomNumber || playerdiff == randomNumber)
        {
            cout << "\nIt's a draw!" << endl;
        }

        round++;
    }

    if (money <= 0)
    {
        cout << "\nAI is the winner";
    }
    else if (AImoney <= 0)
    {
        cout << "Player is the winner";
    }

    return 0;
}
