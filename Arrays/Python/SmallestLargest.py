# Find smallest & largest element from the array along with their indexes.
def find_smallest(array):
    smallest = array[0]
    for i in range(1, len(array)):
        if array[i] < smallest:
            smallest = array[i]
    return smallest

def find_largest(array):
    largest = array[0]
    for i in range(1, len(array)):
        if array[i] > largest:
            largest = array[i]
    return largest

def find_index(array, element):
    for i in range(len(array)):
        if array[i] == element:
            return i
    return -1

def main():
    array = [-15, 56, 90, 23, -23]
    smallest = find_smallest(array)
    largest = find_largest(array)

    print(f"Smallest element is {smallest} at index {find_index(array, smallest)}")
    print(f"Largest element is {largest} at index {find_index(array, largest)}")