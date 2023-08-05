#Number Guessing game
import random

# Generate a random number between 1 and 10
secret_number = random.randint(1, 10)

attempts = 0
max_attempts = 3

print("Welcome to the Number Guessing Game!")
print("I have picked a number between 1 and 10.")
print("You have 3 attempts to guess the correct number.")

while attempts < max_attempts:
    guess_str = input("\nEnter your guess (1-10): ")

    if guess_str.isdigit():
        guess = int(guess_str)

        attempts += 1

        if guess < secret_number:
            print("Too low! Try again.")
        elif guess > secret_number:
            print("Too high! Try again.")
        else:
            print("Congratulations! You guessed the correct number.")
            break
    else:
        print("Invalid input! Please enter a number between 1 and 10.")

if attempts == max_attempts:
    print("Sorry, you've run out of attempts. The correct number was", secret_number)





