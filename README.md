<h1 align ="center">🎮 C Language Games</h1>

Welcome to the C Language Games repository! Here, you'll embark on an exciting journey through the basics of C programming with two delightful games: a Number Guessing Game and a Tic-Tac-Toe Game. These aren’t just any games—they’re a playground for learning loops, conditionals, functions, and user input handling. Let the coding adventure begin!

## 📋 Games Included

1.  Number Guessing Game
2.  Tic-Tac-Toe Game

## 🔢 Number Guessing Game

Think you can outsmart the computer? Prove it with the Number Guessing Game! Your mission: unmask the secret number. With every guess, you’ll inch closer to victory (or not—but that’s part of the fun!).

### How to Play:

1.  The computer secretly generates a random number between 1 and 100.

2.  You, the mastermind, must guess the number.

3.  After each guess, the game spills the tea:

 - Too high! if your guess is over the mark.

 - Too low! if your guess is under the mark.

4.  Keep going until you nail the number! The game will even tell you how many tries it took (because bragging rights are important).

**Features:**

 - A simple, addictive command-line game.

 - Each round brings a fresh challenge with random number generation.

 - Instant feedback keeps the game lively and engaging.

**Code Example:**

Here’s a quick peek into the magic behind the random number generation:

int number = (rand() % (upper - lower + 1)) + lower;


