# Here we are going to learn about string methods 
# string methods are immutable
a="Rutvej@@ hello"
print(len(a))
print(a.upper())#used to print in upper case
print(a.lower())#used to print in lower case
print()
print(a.rstrip("@")) #used to delete end part which are characters
print(a.replace("v","u")) #used to replace something in code
print(a.split()) #used to split two words in string
print(a.capitalize()) #makes first letter capital and all other letter smaller
print(a.center(50)) #helps to move output
print(a.count("l"))#used to give you count of the specific word or letter
print(a.endswith("o")) #check whether ending with it or not
print(a.find("l")) #finding word in string
print(a.index("ll"))# if input is present gives number like find function else gives error
print(a.isalnum())#checks is everything is alphabetic and numeric
print(a.isalpha())#checks string is only alphabatic or not
print(a.islower()) #checks whether everything is in lower case or not
print(a.isupper())#checks whether everything is in upper case or not
print(a.isprintable())#checks whether string is printable or not
print(a.isspace())#checks whether string has all spaces
print(a.istitle())#checks whether string has all the first letter of words capital
print(a.startswith("R"))##checks whether string is starting with 
print(a.swapcase())#used swap all word cases in string
print(a.title())

