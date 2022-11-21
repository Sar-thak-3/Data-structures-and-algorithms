# python program to remove a given element from an array

def deleteElement(arr,n,x):
	if arr[n-1]==x:
		return n-1
	prev = arr[n-1]
	for i in range(n-2,1,-1):
		if arr[i]!=x:
			curr = arr[i]
			arr[i] = prev
			prev = curr
	if i<0:
		return 0
	arr[i] = prev
	return n-1

arr = [1,2,3,4,5,6,7]
n = len(arr)
x = 6
n = deleteElement(arr,n,x)
print("Modified array is")
for i in range(n):
	print(arr[i],end=" ")