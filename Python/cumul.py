import pandas as pd
MyList = [1,2,3,4]
MyList2= ["My","Name","Is","Van"]
def Cumulative_sum(list):
    series = pd.Series(list)
    cumulativ = series.cumsum()
    return cumulativ
def Cumulative_prod(list):
    series = pd.Series(list)
    cumulativ = series.cumprod()
    return cumulativ
print("List 1")
print(MyList, " \n")
print(Cumulative_prod(MyList),"\n")
#print("List 2")
#print(MyList, "\n")
#print(Cumulative_prod(MyList2),"\n")
