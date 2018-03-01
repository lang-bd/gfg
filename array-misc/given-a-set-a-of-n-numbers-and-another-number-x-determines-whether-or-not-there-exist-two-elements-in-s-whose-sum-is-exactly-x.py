# Python program to find if there are two elements wtih given sum
CONST_MAX = 100000
 
# function to check for the given sum in the array
def printPairs(arr, arr_size, sum):
     
    # initialize hash map as 0
    binmap = [0]*CONST_MAX
     
    for i in range(0,arr_size):
        temp = sum-arr[i]
        if (temp>=0 and binmap[temp]==1):
            print ("Pair with the given sum is", arr[i], "and", temp)
        binmap[arr[i]]=1
 
# driver program to check the above function
A = [2, 4, 1, 5]
n = 6
printPairs(A, len(A), n)