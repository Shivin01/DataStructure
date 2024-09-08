def removeDuplicates(arr,n):
    
    # i = 0;
    # for j in range(n):
    #     if arr[i] != arr[j]:
    #         arr[i+1] = arr[j]
    #         i = i+1

    return len(list(set(arr)))
    