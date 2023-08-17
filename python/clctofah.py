
x=int(input("enter the 1 or 2:"))
match x:
    case 1:
        ch=float(input("entr the value for conversion:"))
        f1=(ch*1.8)+32
        print("the answer is:",f1)
    case 2:
        far=float(input("enter the value for conversion:"))
        ch1=(far-32)/1.8
        print("the answer is:",ch1)  
    case _:
        print("your not selected anything")