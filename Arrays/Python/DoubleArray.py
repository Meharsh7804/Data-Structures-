# Double every elements in the array
def double_array(array):
    for i in range(len(array)):
        array[i] *= 2

    print("Array elements after doubling: ")
    for i in array:
        print(i, end=" ")
    print()

if __name__ == "__main__":
    array = [1, 2, 3, 4, 5]
    double_array(array)