# it is same as a switch cases in c
print("Enter 1 if you want to do conversion of kgs to grams")
print("Enter 2 if you want to do conversion of kms to meters")
x=int(input("Enter the number "))
match x:
    case 1:
        y=int(input("press 1 if you want to do the conversion of kgs into grams:"))
        if(y==1):
            kgs=int(input("Enter the number of kgs you want to convert into grams"))
            kgstograms= kgs*1000
            print("The conversion of ",kgs, "kgs into grams is equal to ",kgstograms,"grams")
        else:
            print("you have selected not to do the conversion")
    case 2:
        a=int(input("press 1 if you want to do the conversion of kms into meters:"))
        if(a==1):
            kms=int(input("Enter the number of kms you want to convert into meters"))
            kmstometers= kms*1000
            print("The conversion of ",kms, "kms into meters is equal to ",kmstometers,"meters")
        else:
            print("you have selected not to do the conversion")
    case _:
        print("You have selected not to do the conversion\n Thank You.")

      