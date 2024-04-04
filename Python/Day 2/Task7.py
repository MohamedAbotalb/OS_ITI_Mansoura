# Word guessing game (hangman)
# A list of words will be hardcoded in your program, out of which the interpreter will choose 1 random word.
# The user first must input their names
# Ask the user to guess any alphabet. If the random word contains that alphabet,
# it will be shown as the output(with correct placement) Else the program will ask you to guess another alphabet.
# Give 7 turns maximum to guess the complete word.

import random

words_list = ["javascript", "react", "angular", "typescript", "linux", "laravel", "express", "cloud"]


def get_random_word(words: list) -> str:
    return random.choice(words)


def get_puzzle(word: str, guessed_letters: str) -> str:
    puzzle_word = ""
    for letter in word:
        if letter in guessed_letters:
            puzzle_word += letter
        else:
            puzzle_word += "_"

    return puzzle_word


def get_guess() -> str:
    while True:
        guess = input("Guess a letter: ").lower()
        if len(guess) != 1 or not guess.isalpha():
            print("Please enter a single alphabet.")
        else:
            return guess


def get_user_name() -> str:
    while True:
        name = input("Enter your name: ")
        if name.isalpha() and len(name) > 2:
            return name

        print("Please enter a valid name value")


def start_game():
    name = get_user_name()
    print(f"Welcome {name}, Let's play Hangman.")

    word_to_guess = get_random_word(words_list)
    guesses = ""
    turns = 7

    while turns > 0:
        puzzle = get_puzzle(word_to_guess, guesses)

        if "_" not in puzzle:
            print("\nGreat work! You've guessed the word:", word_to_guess)
            break

        print(f"\nThe puzzle is\t{puzzle}\n")
        my_guess = get_guess()

        if my_guess in guesses:
            print("You already guessed that letter.")
            continue

        guesses += my_guess

        if my_guess not in word_to_guess:
            turns -= 1
            print(f"Oops! '{my_guess}' is not in the word. You have {turns} more guesses.")
        else:
            print(f"Good guess! '{my_guess}' is in the word.")

    if turns == 0:
        print("\nSorry, game over. The word was:", word_to_guess)


start_game()
