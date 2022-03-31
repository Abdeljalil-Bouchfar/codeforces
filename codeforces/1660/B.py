t = int(input())
arr = []
for i in range(t):
	n = int(input())
	arr.append(input())

for x in range(len(arr)):
	l = [int(num) for num in arr[x].split(' ')]
	l.sort()
	if len(l) > 1:
		print("YES" if l[len(l) - 1] - l[len(l) - 2] <= 1 else "NO")
	elif l[0] <= 1:
		print("YES")
	else:
		print("NO")
