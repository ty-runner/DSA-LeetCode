import random

# Number of random numbers you want
num_numbers = 500

# Range for random numbers (e.g., from 1 to 1000)
min_value = 1
max_value = 1000

# Generate the random numbers
random_numbers = [random.randint(min_value, max_value) for _ in range(num_numbers)]

# Define the file name
file_name = "random_numbers.txt"

# Write the random numbers to a file
with open(file_name, "w") as file:
    for number in random_numbers:
        file.write(f"{number}\n")