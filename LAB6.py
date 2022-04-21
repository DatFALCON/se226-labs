n=int(input("Enter a value:"))

x=lambda n: (n-3)/(n**2)
tempIntList=[]
for i in range(1,n+1):
    tempIntList.append(x(i))
print(sum(tempIntList))

def productFunct(n):
    '''This function takes a number (n) and return of the Pi Notation of it.'''
    global finalProduct
    finalProduct=1
    if n==1:
       return finalProduct*((1/3)-10)
       print("The result of the multip. " + str(finalProduct))
    else:
        return productFunct(n-1)*(((n)/(n+2))-10)


print(productFunct.__doc__)
print(productFunct(5))