def findPairs(arr, Target):
    # Dictionary to store elements and their indices
    seen = {}
    result = []

    for num in arr:
        # Find the complement that adds up to the target
        complement = Target - num

        # If the complement exists in the map, we found a pair
        if complement in seen:
            result.append((complement, num))

        # Add the current number to the map
        seen[num] = True

    return result

# Example usage:
arr = [1, 0, 0, 1, 1]
Target = 2
pairs = findPairs(arr, Target)
print("Pairs that sum up to the Target:", pairs)

