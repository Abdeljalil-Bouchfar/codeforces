n = int (input())

for i in range(n):
	res = 1
	arr = input().split(' ')
	res += int(arr[0])
	if arr[0] != '0':
		res += int(arr[1]) * 2
	print(res)