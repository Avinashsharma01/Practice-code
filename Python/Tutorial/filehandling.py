import os
import random
randomnumber=random.randint(1,5)
print(randomnumber)
if(randomnumber==4):
    print("Hello World")
    os.remove("C:\Desktop\CODE PRACTICE\Python\Tutorial\pythonfile.py")
elif(randomnumber==2):
    a=open("C:\Desktop\CODE PRACTICE\Python\Tutorial\pythonfile.py","x")
    