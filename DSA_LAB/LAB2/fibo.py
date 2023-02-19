# def fibo(n):
#     if(n==1 or n==2):
#         return 1
#     else:
#         return fibo(n-1)+fibo(n-2)

table = dict()
def mFibo(n):
    if(n==1 or n==2):
        return 1
    else:
        if n not in table:
            table[n] = mFibo(n-1)+mFibo(n-2)
        return table[n]

n=int(input("Enter n "))
print("The ", n, "th fibonacci term is ", mFibo(n))