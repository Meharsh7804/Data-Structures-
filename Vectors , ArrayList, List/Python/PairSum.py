# Return the indexes of elements whose sum is equal to the target.
def pair_sum(v, target):
    start = 0
    end = len(v) - 1
    while start < end:
        if v[start] + v[end] == target:
            return [start, end]
        elif v[start] + v[end] < target:
            start += 1
        else:
            end -= 1
    return []

v = [2, 7, 11, 15]
target = 9
ans = pair_sum(v, target)
if ans:
    print(f"{ans[0]}, {ans[1]}")
else:
    print("No pair found")
