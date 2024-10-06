# Print all the unique elements in an array
def print_unique_elements(array):
    size = len(array)
    print("Unique elements in the array: ")
    for i in range(size):
        is_unique = True
        for j in range(size):
            if i != j and array[i] == array[j]:
                is_unique = False
                break
        if is_unique:
            print(array[i], end=" ")
    print()

if __name__ == "__main__":
    array = [1, 2, 3, 4, 1, 2, 3, 4, 5]
    print_unique_elements(array)