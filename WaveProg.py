'''

                            Online Python Compiler.
                Code, Compile, Run and Debug python program online.
Write your code in this editor and press "Run" button to execute it.

'''
NoOfMovement = input("Input # of Movement:")
i = 0
Movementlist = []
while(i < int(NoOfMovement)):
    movement = input("Input: (U/D)")
    Movementlist.append(movement);
    i += 1;

i = 0
for i in Movementlist:
    print(i)

