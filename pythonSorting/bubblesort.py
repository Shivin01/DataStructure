def bubbleSort(arr,n):
    # Write your code here
    # Do not return anything. Update the given array in-place
    
    for i in range(n-1):
        for j in range(n-i-1):
            if arr[j] > arr[j+1]:
                temp = arr[j+1]
                arr[j+1] = arr[j]
                arr[j] = temp