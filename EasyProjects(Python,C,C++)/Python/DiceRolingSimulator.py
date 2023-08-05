#Dice Roling Simulator
import random

num_rolls = int(input("Enter the number of times you want to roll the dice: "))

print("Rolling the dice", num_rolls, "times...\n")
for _ in range(num_rolls):
    # Generate a random number between 1 and 6 (simulating a six-sided dice)
    result = random.randint(1, 6)
    print("Rolled:", result)
print("\nDice rolling completed.")