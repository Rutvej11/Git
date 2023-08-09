# learning to use if else statement in python
a=int(input("Enter Your age: "))
print("your age is : ",a)
if(a>=18):
    print("you can vote")
    # here now we are using nested if statement
    if(a>18 and a<59):
        print("you can do the job ")
    elif(a==18):
        print("you are good to go")
    else:   
        print("your age is greater than 60") #nested if statement is ended
elif (a>16 and a<18 ):
    print("you are near to vote")
else:
    print("You cannot vote")