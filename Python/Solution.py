def numinput():
	n=int(input("Number of lines 'only odd number' :: "))
	if (n%2!=0 and n>2):
		diode(n)
	else:
		print(":: Only odd numbers and not 1 ::")
		numinput()

print()

def diode(n):
	for i in range(1,n+3):
		for j in range(n//2+2):
			if i<=n//2+2 and j<i:
				print("@",end="")
			elif i>n//2+2 and j<2*(n//2+2)-i:
				print("@",end="")
			else:
				print(" ",end="")
		for j in range(n+2):
			if i==n//2+2:
				print("*",end="")
			else:
				print(" ",end="")
		for j in range(n):
			if i>1 and i<n+2:
				print("@",end="")
		print()
	
	print()
	numinput()

print()
print("It's a symbol like a diode.")
print()
numinput()
