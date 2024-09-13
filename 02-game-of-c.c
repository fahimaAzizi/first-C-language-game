#include <stdio.h>

char board[3][3]; // The game board

// Function to initialize the game board
void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

// Function to display the game board
void displayBoard() {
    printf("\n");
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}

// Function to check if the game has a winner
int checkWinner() {
    // Check rows and columns
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return 1; // Row match
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            return 1; // Column match
    }

    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return 1; // Diagonal match
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        return 1; // Diagonal match

    return 0; // No winner
}

// Function to check if the board is full
int checkDraw() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ')
                return 0; // If there's an empty space, the game is still on
        }
    }
    return 1; // Draw if the board is full
}

// Function to take the player's move
void playerMove(char symbol) {
    int row, col;
    while (1) {
        printf("Enter row (1-3) and column (1-3) for %c: ", symbol);
        scanf("%d %d", &row, &col);
        row--; // Adjusting index to 0-based
        col--; // Adjusting index to 0-based

        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
            board[row][col] = symbol;
            break;
        } else {
            printf("Invalid move. Try again.\n");
        }
    }
}

// Main function to run the game
int main() {
    int turn = 0;
    char playerSymbol;

    initializeBoard();

    printf("Welcome to Tic-Tac-Toe!\n");

    while (1) {
        displayBoard();
        playerSymbol = (turn % 2 == 0) ? 'X' : 'O';
        playerMove(playerSymbol);

        if (checkWinner()) {
            displayBoard();
            printf("Player %c wins!\n", playerSymbol);
            break;
        }

        if (checkDraw()) {
            displayBoard();
            printf("It's a draw!\n");
            break;
        }

        turn++;
    }

    return 0;
}
