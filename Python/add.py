def product(list):
    prod = 1
    for element in list:
        prod *= element
    return prod;
def ifactorial(a):
    factorial = 1
    if a < 0:
        print("Sorry, factorial does not exist for negative numbers")
    elif a == 0:
       print("The factorial of 0 is 1")
    else:
        for i in range(1,a + 1):
            factorial = factorial*i
        return factorial
mylist = [1,2,3]
i = product(mylist)
print("The factorial of",i,'is',ifactorial(i))