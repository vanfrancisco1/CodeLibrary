# -*- coding: utf-8 -*-
Sample = [1,2,3,4]
print ("List Converter!")
print ("A. List to Tuple")
print ("B. List to Dictionary")
print ("C. List to Set")
decis = str(input("Option: "))

if decis == 'A' or decis == 'a':
    converted = tuple(Sample)
    print("List converted to Tuple: ", converted)
elif decis == 'B' or decis == 'b':
    it = iter(Sample) 
    res_dct = dict(zip(it, it)) 
    print("List converted to Dictionary: ", res_dct)
elif decis == 'C' or decis == 'c':
    converted  = set(Sample)
    print("List converted to Set: ", converted)
else:
    print("Invalid Option!")
