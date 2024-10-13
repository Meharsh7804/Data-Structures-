def remove_even_numbers(v):
    return [val for val in v if val % 2 != 0]

v = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
v = remove_even_numbers(v)
for val in v:
    print(val, end=" ")
print()