# Find Sum & Product off all elements of the array.
def sum_of_array(array):
    return sum(array)

def product_of_array(array):
    product = 1
    for num in array:
        product *= num
    return product

if __name__ == "__main__":
    array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

    sum_result = sum_of_array(array)
    product_result = product_of_array(array)

    print(f"Sum of all elements of the array: {sum_result}")
    print(f"Product of all elements of the array: {product_result}")