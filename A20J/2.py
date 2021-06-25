from sys import stdin,stdout

def print_ap(n,m,lst):
	tp = lst[0]
	smlt = 0
	smlt = (tp) % n -1

	for i in range(1,m):
		prev = lst[i-1]
		curr = lst[i]
		if (prev)>(curr):
			smlt = smlt + (n -prev)
			smlt = smlt + (curr%n)
		elif prev<curr:
			smlt = smlt + curr - prev 	
		else:
			pass
			
	return smlt		

if __name__ == "__main__":
	n,m = map(int,input().split(" "))
	lst = []
	lst = list(map(int,input().split(" ")))
	res = print_ap(n,m,lst)
	print(res)
	
