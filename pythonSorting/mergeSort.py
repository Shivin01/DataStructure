def merge(arr, low, mid, high):
    temp = []  # Temporary array to store the sorted elements
    left = low
    right = mid + 1

    # Merge the two halves into temp array
    while left <= mid and right <= high:
        if arr[left] < arr[right]:
            temp.append(arr[left])
            left += 1
        else:
            temp.append(arr[right])
            right += 1

    # Copy the remaining elements of the left half, if any
    while left <= mid:
        temp.append(arr[left])
        left += 1

    # Copy the remaining elements of the right half, if any
    while right <= high:
        temp.append(arr[right])
        right += 1

    # Copy the sorted elements back to the original array
    for i in range(low, high + 1):
        arr[i] = temp[i - low]


def Ms(arr, low, high):
    if low >= high:
        return arr

    # Find the middle point
    mid = (low + high) // 2

    # Sort the first and second halves
    Ms(arr, low, mid)
    Ms(arr, mid + 1, high)

    # Merge the sorted halves
    merge(arr, low, mid, high)


def mergeSort(arr, n):
    # Call the helper recursive function
    Ms(arr, 0, n - 1)


# Example usage
arr = [5, 4, 6,7]
n = len(arr)
mergeSort(arr, n)
print("Sorted array:", arr)