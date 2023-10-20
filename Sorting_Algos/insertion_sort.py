def insertion_sort(array):
    n = len(array)
    for i in range(1,n):
        item = array[i]
        j = i-1
        while(j>=0 and array[j]>item):
            array[j+1] = array[j]
            j = j-1
        
        array[j+1] = item
    return array
def write_to_file(input_file, output_file):
    # Read numbers from the input file into a list
    with open(input_file, "r") as file: # O(n)
        numbers = [int(line.strip()) for line in file]

    # Sort the numbers in ascending order
    numbers = insertion_sort(numbers)

    # Write the sorted numbers to the output file
    with open(output_file, "w") as file:
        for number in numbers: # O(n)
            file.write(f"{number}\n")

write_to_file("random_numbers.txt","sorted_numbers.txt")