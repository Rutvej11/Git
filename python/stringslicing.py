fruit="mango"
mangoLen=len(fruit)
print(mangoLen)
print(fruit[0:5])
print(fruit[-4:-2]) #here side statement works as print(fruit[len(fruit)-4:len(fruit)-2])
#while using negative slicing it cannot give proper output if first slicing is greater than second 
# ex- print(fruit[-1:-3]) will give you null output

