#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <limits>

using namespace std;

int main()
{
    double money = 777;
    double AImoney = 777;
    string name;

    cout << "Welcome to Best random 7 !!!$$$$" << endl;
    cout << "Press Enter to Continue" << endl;
    cin.ignore();

    cout << "Input player name :";
    getline(cin, name);

    cout << "Welcome " << name << "!!" << endl;
    cout << "\nAI VS " << name << endl;

    srand(time(0));
        double AIbet = rand() % 776 + 1;
        
    int round = 1;
    while (money > 0 && AImoney > 0)
    {
        cout << "\nRound :" << round << endl;
        cout << "\nYou have " << money << " $" << endl;
        cout << "AI have " << AImoney << " $" << endl;

        int number;
        double betting;
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
       double AIbet = rand() % static_cast<int>(AImoney) + 1;
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
            money = (money - betting) + betting + betting / 2;
            AImoney = AImoney - AIbet;
            cout << "________________" << endl;
            cout << "\nPlayer win!!" << endl;
            cout << "________________" << endl;
            cout << "Player money total = " << money << endl;
            cout << "AI money total = " << AImoney << endl;
        }
        else if (AIdiff < playerdiff)
        {
            AImoney = (AImoney - AIbet) + AIbet + AIbet / 2;
            money = money - betting;
            cout << "________________" << endl;
            cout << "\nAI win!!" << endl;
            cout << "________________" << endl;
            cout << "AI money total = " << AImoney << endl;
            cout << "Player money total = " << money << endl;
        }
        else if (playerdiff % 7 == 0 || randomNumber % 7 == 0)
        {
            money = (money - betting) +betting + betting / 2;
            AImoney = AImoney - AIbet;
            cout << "________________" << endl;
            cout << "\nPlayer win!!" << endl;
            cout << "________________" << endl;
            cout << "Player money total = " << money << "\n";
            cout << "AI money total = " << AImoney << endl;
        }
        else if (AIdiff % 7 == 0 || randomNumber % 7 == 0)
        {
            AImoney = (AImoney - AIbet) + AIbet + AIbet / 2;
            money = money - betting;
            cout << "________________" << endl;
            cout << "\nAI win!!" << endl;
            cout << "________________" << endl;
            cout << "AI money total = " << AImoney << endl;
            cout << "Player money total = " << money << endl;
        }
        else if (AIdiff == randomNumber || playerdiff == randomNumber)
        {
            cout << "________________" << endl;
            cout << "\nIt's a draw!" << endl;
            cout << "________________" << endl;
        }
        cout << "=====================================" << endl;
        round++;
    }

    if (money <= 0)
    {
        cout << "           AI is the winner         " << endl;
        cout << "=====================================" << endl;
        cout << "_______e$$$$$$$$ $$e_______" << endl;
        cout << "______$$$$$$$$$$$$$$______"<< endl;
        cout << "_____d$$$$$$$$$$$$$$b_____"<< endl;
        cout << "_____$$$$$$$$$$$$$$$$_____" << endl;
        cout << "____4$$$$$$$$$$$$$$$$F____" << endl;
        cout << "____4$$$$$$$$$$$$$ $$$F____" << endl;
        cout << "_____$$$$__$$$$ __$$$$_____"<< endl;
        cout << "_____$$F___4$$F___4$$_____" << endl;
        cout << "____?$$F___4$$F__ _4$______" << endl ;
        cout << "______$$___$$$$___ $P______" << endl;
        cout << "______4$$$$$_^$$$ $$%_____" << endl;
        cout << "_______$$$$F__4$$$$$_______" << endl;
        cout << "_________$$$ee$$$ ________" << endl;
        cout << "________._*$$$$F4_ ________" << endl;
        cout << "_________$_____.$_ ________*" << endl;
        cout << "_________=$$$$$$= _________" << endl;
        cout << "__________^$$$$___ ________" << endl;
        cout << "_4$$c_______""__ _____.$$r_" << endl;
        cout << "_^$$$b____________ __e$$$__" << endl;
        cout << "______00000_______*" << endl;
        cout << "_d$$$$$e__________$z$$$$$b_" << endl;
        cout << "4$$$*$$$$$c____.$$ $$$*$$$r" << endl;
        cout << "_""____^*$$$be$$$$*_____^__" << endl;
        cout << "___________$$$$_ __________" << endl;
        cout << "________.d$$P$$$b_________" << endl;
        cout << "_______d$$P___^$$$b_______" << endl;
        cout << "___.ed$$$________ $$$be.___" << endl;
        cout << "_$$$$$$P__________ *$$$$$$_" << endl;
        cout << "4$$$$$P___________ _$$$$$$$" << endl;
        cout << "_*$$$_________ ___^$$P___" << endl;
    }
    else if (AImoney <= 0)
    {
        cout << "         Player is the winner     " << endl;
        cout << "=====================================" << endl;
         cout << "__000000___00000" << endl;
        cout << "_00000000_0000000"<< endl;
        cout << "_0000000000000000"<< endl;
        cout << "__00000000000000" << endl;
        cout << "____00000000000" << endl;
        cout << "_______00000" << endl;
        cout << "_________0"<< endl;
        cout << "________*__000000___00000" << endl;
        cout << "_______*__00000000_0000000" << endl ;
        cout << "______*___0000000000000000" << endl;
        cout << "______*____00000000000000" << endl;
        cout << "_______*_____00000000000" << endl;
        cout << "________*_______00000" << endl;
        cout << "_________*________0" << endl;
        cout << "_000000___00000___*" << endl;
        cout << "00000000_0000000___*" << endl;
        cout << "0000000000000000____*" << endl;
        cout << "_00000000000000_____*" << endl;
        cout << "___00000000000_____*" << endl;
        cout << "______00000_______*" << endl;
        cout << "________0________*" << endl;
        cout << "________*__000000___00000" << endl;
        cout << "_______*__00000000_0000000" << endl;
        cout << "______*___0000000000000000" << endl;
        cout << "______*____00000000000000" << endl;
        cout << "______*______00000000000" << endl;
        cout << "_______*________00000" << endl;
        cout << "________*_________0" << endl;
        cout << "_________*________*" << endl;
        cout << "___________________*" << endl;
    }
    cout << "\nEnd Game\nPress Enter to Shutdown" << endl;
    cin.ignore();
    cin.get();
    return 0;
}