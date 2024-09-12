//Math Quiz
#include <iostream>
#include <cstdlib> //for system()
#include <string>

using namespace std;

int game() {
    int score = 0;
    bool contgame = true;
    while (contgame == true) {
        system("clear");
        int ans;
        double num1, num2;
        num1 = int(rand() % 50);
        num2 = int(rand() % 50);
        cout << "" << endl;
        cout << "score: " << score << endl;
        cout << num1 << " + " << num2 << " = ";
        cin >> ans;
        if (num1 + num2 == ans) {
            cout << "Congrats u got it right!" << endl;
            score += 1;
            
            if (score >= 5) {
                cout << "Congrats! You have won the game!" << endl;
                contgame = false;
                
            }
            else {
                cout << "continuing..." << endl;
            } 
        } else {
            cout << "ehhh u got it wrong" << endl;
            contgame = false;
        }
        
    }
    cout << "Your end score is " << score << endl; 
    cout << "Thanks for joining!" << endl;
        
    return score;
    
}

int main() {
    bool cont = true;
    while (cont == true) {
        string username, ans1;
        cout << "Welcome to the Addition Whizzz!!" << endl;
        cout << "The game will end when u reach 5 points or when u fail before 5 points" << endl;
        cout << "Username: ";
        cin >> username;
        cout << "Hi! " << username << ", are you ready to work your brain? (yes/no)";
        cin >> ans1;

        if (ans1 == "yes") {
            cout << "" << endl;
            game();
        } else if (ans1 == "no") {
            cont = false;
            break;
        } else {
            cout << "Error in the answer, please answer with yes or no." << endl;
        }
        break;
    }
    
    return 0;
}
