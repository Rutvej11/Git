import time
a=input("Enter Your name:")
timestamp =time.strftime('%H:%M:%S')
print("Current time is : ",timestamp)
hour =int(time.strftime('%H'))
print("Current Hour is",hour)
minute = int(time.strftime('%M'))
print("minutes past current Hour are ",minute)
seconds = int(time.strftime('%S'))
print("seconds past current Hour and Minutes are ",seconds)

if(hour>6 and hour<12):
    print("Good morning ",a)
elif(hour>12 and hour<16):
    print("Good afternoon ",a)
elif(hour>=16 and hour<21):
    print("Good Evening ",a)
else:
    print("Good night ",a)
