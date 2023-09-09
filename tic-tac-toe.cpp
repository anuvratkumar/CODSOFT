#include <iostream>
using namespace std;

char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
char currentPlayer = 'X';

void printBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << board[i][j];
            if (j < 2) cout << " | ";
        }
        cout << endl;
        if (i < 2) cout << "---------\n";
    }
}

bool checkWin() {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer)
            return true;
        if (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer)
            return true;
    }
    if (board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer)
        return true;
    if (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer)
        return true;
    return false;
}

bool checkDraw() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] == ' ')
                return false;
    return true;
}

int main() {
    cout << "\n\t\t------->>>>TIC-TAC-TOE GAME<<<<--------" << endl<<endl<<endl;
    
    while (true) {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                board[i][j] = ' ';
        currentPlayer = 'X';

        cout << "-->>Player X starts the game." << endl;

        while (true) {
            cout << "\nCurrent board:\n";
            printBoard();
            
            int row, col;
            cout << "Player " << currentPlayer << ", enter your move (row and column): ";
            cin >> row >> col;
            
            if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ') {
                cout << "Invalid move. Try again!" << endl;
                continue;
            }
            
            board[row][col] = currentPlayer;
            
            if (checkWin()) {
                cout << "\nPlayer " << currentPlayer << " wins!!!" << endl;
                break;
            } else if (checkDraw()) {
                cout << "\nIt's a draw!" << endl;
                break;
            }
            
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        }

        char playAgain;
        cout << "--->>>>Do you want to play again? (y/n): ";
        cin >> playAgain;

        if (playAgain != 'y' && playAgain != 'Y') {
            cout << "Thanks for playing. Goodbye!" << endl;
            break;
        }
    }
    
    return 0;
}



