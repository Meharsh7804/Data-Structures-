# Print Intersection of 2 arrays
def intersection_of_arrays(array1, array2):
    print("Intersection of 2 arrays: ")
    for element in array1:
        if element in array2:
            print(element, end=" ")
    print()

if __name__ == "__main__":
    array1 = [1, 2, 3, 4, 5]
    array2 = [3, 4, 5, 6, 7]
    intersection_of_arrays(array1, array2)