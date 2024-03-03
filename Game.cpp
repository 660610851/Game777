#include<iostream>
#include<string>
#include<ctime>
#include <cstdlib>
#include <limits>

using namespace std;

int number,betting;
string name;
int money[] ={ 777};
int AImoney[] = {777};
string s ;
string x;
string y;
int i=0;
int n=0;

int main(){
    
    cout << "Welcome to Best random 7 !!!$$$$" << endl;
    cout << "Press Enter to Continue" << endl;
    cin.ignore();
    
    cout << "Input player name :" ;
    getline(cin,name);

    cout << "Welcome " << name << "!!"<< endl;
    cout << "\nAI VS " << name << endl;

    while(money[i] != 0 or money[i]<0 or AImoney[n] != 0 or AImoney[n]<0  ){
    int i=0;
    int n=0;
    cout << "\nRound :" << i << endl;
    cout << "\nYou have " << money[i]<< " $" << endl;
    cout << "AI have " << AImoney[n] << " $" << endl;
        
        do {
        cout << "Guess a number between 1 and 100: ";
        cin >> number;
        if (cin.fail() || number < 1 || number > 100) {
            cin.clear(); // ล้างสถานะผิดปกติ
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ล้างบัฟเฟอร์
            cout << "Invalid input. Please enter a number between 1 and 100.\n";
        }
        } while (cin.fail() || number < 1 || number > 100); // วนลูปใหม่หากการอ่านไม่สำเร็จ หรือค่าที่ใส่ไม่อยู่ในช่วงที่กำหนด
        cout << "You guessed: " << number << endl;

      
      //if (!isdigit(number)) {
        //cout << "Error: Not a number" << endl;
      
         //}
      //while(number<=1 or number>=100) {
        //cout << "Please guess 1-100" << endl;
        //cout << "Guess an integer (1-100): ";
        //cin >> number ;
            
        //}
    
    cout << "Input money to bet: ";
    cin >> betting;

        while(betting > money[i]){
                cout << "Your betting amount is more than your current money"<< endl;
                cout <<"Input money to bet: ";
                cin >> betting;
        }
        //AI
    cout << "\nAI turn!!" << endl;
    cout << "AI has money " << AImoney[n] << "$" << endl;
    
    
   
    srand(time(0)); // เรียกใช้ฟังก์ชัน srand เพื่อกำหนด seed จากเวลาปัจจุบัน
    int AIbet = rand() % 776 + 1; // สุ่มตัวเลข 1-100
    cout << "AI bet: " << AIbet << endl;
    
    
    srand(time(0)); // เรียกใช้ฟังก์ชัน srand เพื่อกำหนด seed จากเวลาปัจจุบัน
    int airandomNumber = rand() % 100 + 1; // สุ่มตัวเลข 1-100
    cout << "AI guess an integer (1-100): " << airandomNumber << endl;
    
    cout << "\nAI VS " << name << endl;
    
    //System
   
    rand(); // เรียกใช้ฟังก์ชัน srand เพื่อกำหนด seed จากเวลาปัจจุบัน
    //int randomNumber = number;
    int randomNumber = 0;

    // สุ่มตัวเลขที่ไม่ซ้ำกับ AI
    do {
        randomNumber = rand() % 100 + 1;
    } while (randomNumber == airandomNumber);
    cout << "\nSystem random integer (1-100): " << randomNumber << endl;

    int playerdiff = abs(randomNumber - number);
    int AIdiff = abs(randomNumber - airandomNumber);
   cout << "\nPlayer's guess difference: " << playerdiff << endl;
    cout << "AI's guess difference: " << AIdiff << endl;

    

    if (playerdiff < AIdiff) {
         money[i] = (money[i]-betting)+(betting+betting/2);
        AImoney[n] = AImoney[n]-AIbet;
        cout << "\nPlayer win!!" << endl;
        cout << "Player money total = " << money[i] << endl;
        cout << "AI money total = " << AImoney[n] << endl;
       
        
        
        
    }
     else if (AIdiff < playerdiff) {
        AImoney[n] = (AImoney[n]-AIbet)+(AIbet+AIbet/2); 
        money[i] = money[i]-betting;
        cout << "\nAI win!!" << endl;
        cout << "AI money total = " <<AImoney[n] << endl;
        cout << "Player money total = " << money[i] << endl;
        
        
    
        
    
    } else if(playerdiff/7 == 0 || randomNumber/7 ==0){
         money[i] = (money[i]=betting)+(betting+betting/2);
        AImoney[n] = AImoney[n]-AIbet;
        
        cout << "\nPlayer win!!" << endl;
        cout << "Player money total = " << money[i] << "\n";
        cout << "AI money total = " << AImoney[n] << endl;
        
     
        
    }
    else if(AIdiff/7 == 0 || randomNumber/7 ==0){
        
        AImoney[n] = (AImoney[n]-AIbet)+(AIbet+AIbet/2); 
        money[i] = money[i]-betting;
        cout << "\nAI win!!" << endl;
        cout << "AI money total = " << AImoney[n]<< endl;
        cout << "Player money total = " << money[i] << endl;
    }
        
        
        
    else if(AIdiff == randomNumber || playerdiff == randomNumber){
        cout << "\nIt's a draw!" << endl;
        //cout << "Player money total = " << money << endl;
        //cout << "AI money total = " << AImoney << endl;
        //while(i=0){
        money[i] =money[i];
        AImoney[n]= AImoney[n];
    }
        
    i++;
    n++;
}

    if(money == 0){
        cout << "\nAI is winner" ;

    }
    if(AImoney == 0){
        cout << "Player is winner";
    }
}


    
