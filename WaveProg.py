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
