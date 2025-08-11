# CppWordGuessGame (C++)

This C++ program is a simple **word guessing game** inspired by the classic Hangman.  
The player has to guess the letters of a randomly chosen word before running out of hearts (lives).  

**How it works:**
1. The game randomly selects a word from a predefined dictionary.
2. The word is displayed as underscores (`_`) representing hidden letters.
3. The player guesses letters one at a time:
   - If the guess is correct, the letter is revealed in its correct position(s).
   - If the guess is wrong, the player loses one heart.
4. The game ends when:
   - All letters are guessed correctly (player wins 🎉).
   - The player runs out of hearts (player loses 💔).
5. After each game, the player can choose to play again or quit.

**Key Features:**
- Random word selection.
- Dynamic updating of the guessed word state.
- Life/heart tracking system.
- Replay option after each round.

This project demonstrates:
- **Functions** for modular code structure.
- **Random number generation** with `rand()` for word selection.
- **Character array manipulation** for game state.
- **Loops and conditions** for game logic.

Perfect for beginners learning how to combine logic, loops, arrays, and functions in C++ while making a fun interactive program.
