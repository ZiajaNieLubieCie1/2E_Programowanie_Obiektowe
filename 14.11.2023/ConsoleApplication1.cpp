#include <iostream>
#include <cstdlib>

using namespace std;

char board[3][3] = { { '1', '2', '3' }, { '4', '5', '6' }, { '7', '8', '9' } };
int winsPlayer1 = 0;
int winsPlayer2 = 0;
int draws = 0;

void drawBoard() {
     cout << "-------------" <<  endl;
    for (int i = 0; i < 3; ++i) {
         cout << "| ";
        for (int j = 0; j < 3; ++j) {
             cout << board[i][j] << " | ";
        }
         cout <<  endl;
         cout << "-------------" <<  endl;
    }
}

bool isMoveValid(int move) {
    if (move < 1 || move > 9) {
        return false;
    }

    int row = (move - 1) / 3;
    int col = (move - 1) % 3;

    return board[row][col] == 'X' || board[row][col] == 'O';
}

bool checkWin() {
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == board[i][1] && board[i][1] == board[i][2]) ||
            (board[0][i] == board[1][i] && board[1][i] == board[2][i])) {
            return true;
        }
    }

    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
        (board[0][2] == board[1][1] && board[1][1] == board[2][0])) {
        return true;
    }

    return false;
}

bool isBoardFull() {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] != 'X' && board[i][j] != 'O') {
                return false;
            }
        }
    }
    return true;
}

void makeMove(int move, int currentPlayer) {
    int row = (move - 1) / 3;
    int col = (move - 1) % 3;

    if (currentPlayer == 1) {
        board[row][col] = 'X';
    }
    else {
        board[row][col] = 'O';
    }
}

int main() {
    int currentPlayer = 1;
    int move;
    bool gameContinues = true;

    do {
        drawBoard();
         cout << "Gracz " << currentPlayer << ", podaj numer pola: ";
         cin >> move;

        if (!isMoveValid(move)) {
            makeMove(move, currentPlayer);

            if (checkWin()) {
                drawBoard();
                 cout << "Gracz " << currentPlayer << " wygrywa!" <<  endl;
                if (currentPlayer == 1) {
                    ++winsPlayer1;
                }
                else {
                    ++winsPlayer2;
                }
                gameContinues = false;  // Zakończ grę po wygranej
            }
            else if (isBoardFull()) {
                drawBoard();
                 cout << "Remis!" <<  endl;
                ++draws;
                gameContinues = false;  // Zakończ grę po remisie
            }
            else {
                currentPlayer = (currentPlayer == 1) ? 2 : 1;
            }
        }
        else {
             cout << "Błędny ruch. Wybierz jeszcze raz." <<  endl;
        }

        if (!gameContinues) {
             cout << "Czy chcesz grać dalej? (Tak/Nie): ";
             string playAgain;
             cin >> playAgain;

            if (playAgain != "Tak" && playAgain != "tak") {
                gameContinues = false;
                 cout << "Wyniki: Gracz 1 - Wygrane: " << winsPlayer1 << ", Przegrane: " << winsPlayer2
                    << ", Remisy: " << draws <<  endl;
                 cout << "Wyniki: Gracz 2 - Wygrane: " << winsPlayer2 << ", Przegrane: " << winsPlayer1
                    << ", Remisy: " << draws <<  endl;
            }
            else {
                // Czyszczenie tabeli
                for (int i = 0; i < 3; ++i) {
                    for (int j = 0; j < 3; ++j) {
                        board[i][j] = '1' + i * 3 + j;
                    }
                }
                currentPlayer = 1;  // Zresetuj gracza po rozpoczęciu nowej gry
                gameContinues = true;  // Nowa gra
            }
        }

    } while (gameContinues);

    return 0;
}