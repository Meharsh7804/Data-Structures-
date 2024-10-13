# Find the element with majority count in the array.
# Majority element is the element that appears more than n/2 times in the array.
def majority(v):
    frequency = 0
    ans = 0
    for num in v:
        if frequency == 0:
            ans = num
        if ans == num:
            frequency += 1
        else:
            frequency -= 1
    return ans

if __name__ == "__main__":
    v = [1, 2, 2, 1, 1]
    majority_element = majority(v)
    print("Majority Element:", majority_element)