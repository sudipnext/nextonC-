def tailfact(n, a):
    if(n==0):
        return a
    else:
        return tailfact(n-1, n*a)
    
num = int(input("Enter a number "))
print("The factorial is ", tailfact(num, 1))