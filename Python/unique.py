def unique(list1): 
  
    unique_list = [] 
      
    for x in list1: 
        if x not in unique_list: 
            unique_list.append(x)
    print("Unique numbers are: ")
    for x in unique_list:
        print (x)
        
List1 = [1,1,2,2,3,4,4,5]
print(List1)
unique(List1)