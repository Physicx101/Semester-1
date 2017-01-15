#include <iostream>
#include <string>

void playGame();
void printBoard(char board [3][3]);
int nextMove (char symbol, int plays, int playedmoves [9]);
bool checkWinner (char board [3][3], char symbol, int plays);

int main (){
    using namespace std;
    cout << "TIC TAC TOE \n" << "____________\n \n";
    
    playGame();
    char yora = 'a';
    
    while (true){
        while (tolower (yora) != 'y' && tolower (yora) != 'n'){
        cout << "Apakah anda ingin bermain lagi?";
        cin >> yora;
    }
    if (tolower (yora) == 'y')
        playGame();
    else
        break;
    }


}