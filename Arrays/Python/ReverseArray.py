# Reverse elements of an array with and without using another array.
def reverse_array_without_another_array(array):
    start = 0
    end = len(array) - 1
    while start < end:
        array[start], array[end] = array[end], array[start]
        start += 1
        end -= 1

    print("Array elements after reversing without another Array: ")
    print(array)

def reverse_array_with_another_array(array):
    new_array = [0] * len(array)
    end = len(array) - 1
    for i in range(len(array)):
        new_array[end] = array[i]
        end -= 1

    print("Array elements after reversing with another Array: ")
    print(new_array)

if __name__ == "__main__":
    array = [1, 2, 3, 4, 5]
    reverse_array_without_another_array(array)
    reverse_array_with_another_array(array)