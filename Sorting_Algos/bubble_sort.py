import time
def bubble_sort(array):
    start = time.time()
    n = len(array)

    for i in range(n): # O(n)
        sorted = True
        for j in range(n-i-1): # O(n)
            if array[j] > array[j + 1]:
                # Swap the elements
                array[j], array[j + 1] = array[j + 1], array[j]
                sorted = False
        if sorted:
            break
    end = time.time()
    print(f"Algorithm: bubble_sort. Minimum execution time: {end-start}")
    return array
    # O(n^2)

def write_to_file(input_file, output_file):
    # Read numbers from the input file into a list
    with open(input_file, "r") as file: # O(n)
        numbers = [int(line.strip()) for line in file]

    # Sort the numbers in ascending order
    numbers = bubble_sort(numbers)

    # Write the sorted numbers to the output file
    with open(output_file, "w") as file:
        for number in numbers: # O(n)
            file.write(f"{number}\n")

write_to_file("random_numbers.txt","sorted_numbers.txt")