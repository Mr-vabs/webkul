print("="*50)
print("")
q=int(input("How Many Quantity Of Apple : "))
print("Apple Quantity Is : ",q)
p=200
print("Price Of Apple : ",p,"/kg")
na=q*p
print("Your Net Amount Is : ",na,"Rs")#4000
pr=na*10/100#400
print("="*50)
if na>1000:
    na=na-pr
    print("Your Discount Is : ",pr,"Rs")
    print("="*50)
    print("Total Amount Of Apple : ",na,"Rs")
else:
    print("Total Amount Of Apple : ",na,"Rs")
print("="*50)
