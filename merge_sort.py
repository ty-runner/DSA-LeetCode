def merge(left,right):
    if len(left) == 0:
        return right
    if len(right) == 0:
        return left
    result = []
    left_index = right_index = 0

    while len(result) < len(left) + len(right):
        if left[left_index] <= right[right_index]:
            result.append(left[left_index])
            left_index+=1
        else:
            result.append(right[right_index])
            right_index+=1

        if right_index == len(right):
            result+=left[left_index:]
            break

        if left_index == len(left):
            result+=right[right_index:]
            break
    return result

def merge_sort(array):
    if len(array) < 2:
        return array
    midpoint = len(array)//2
    return merge(
        left=merge_sort(array[:midpoint]),
        right=merge_sort(array[midpoint:])
    )

def write_to_file(input_file, output_file):
    # Read numbers from the input file into a list
    with open(input_file, "r") as file: # O(n)
        numbers = [int(line.strip()) for line in file]

    # Sort the numbers in ascending order
    numbers = merge_sort(numbers)

    # Write the sorted numbers to the output file
    with open(output_file, "w") as file:
        for number in numbers: # O(n)
            file.write(f"{number}\n")

write_to_file("random_numbers.txt","sorted_numbers.txt")