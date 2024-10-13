# Find the Sum of Maximum Sum Subarray.{Using Kadane's Algorithm}
# Time Complexity: O(n)
# Space Complexity: O(1)

list = [-2, -3, 4, -1, -2, 1, 5, -3]
max_sum = list[0]
current_sum = list[0]
for val in range(1, len(list)):
    current_sum += list[val]
    max_sum = max(max_sum, current_sum)
    if current_sum < 0:
        current_sum = 0
print(max_sum)