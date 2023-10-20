array = [10, 20, 30, 40, 50, 60, 70, 80, 90]
def linear_search(array, item):
    for i in range(len(array)):
        if array[i] == item:
            return i      
    return -1

print(linear_search(array, 50))