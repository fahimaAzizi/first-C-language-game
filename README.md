# C Language Games

This repository contains two simple games written in C: a **Number Guessing Game** and a **Tic-Tac-Toe Game**. Both games are designed to demonstrate basic C programming concepts like loops, conditionals, functions, and user input handling.

## Games Included
1. [Number Guessing Game](#number-guessing-game)
2. [Tic-Tac-Toe Game](#tic-tac-toe-game)

---

### Number Guessing Game

In this game, the player has to guess a randomly generated number between 1 and 100. The game will give hints after each guess, telling the player whether their guess was too high or too low. The game continues until the player guesses the correct number.

#### How to Play:
1. The computer generates a random number between 1 and 100.
2. The player is prompted to guess the number.
3. After each guess, the game provides feedback:
    - **Too high!** if the guess is larger than the number.
    - **Too low!** if the guess is smaller than the number.
4. The game ends when the player guesses the correct number and displays the number of attempts made.

#### Features:
- Simple and interactive command-line game.
- Random number generation for each game session.
  
#### Code Example:
```c
int number = (rand() % (upper - lower + 1)) + lower;
