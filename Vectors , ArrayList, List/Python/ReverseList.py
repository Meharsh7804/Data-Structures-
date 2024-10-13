# Reverse the List
def reverse_list(v):
    return v[::-1]

v = [1, 2, 3, 4, 5]
reversed_v = reverse_list(v)
for val in reversed_v:
    print(val, end=" ")