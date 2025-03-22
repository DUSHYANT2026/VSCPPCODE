# import requests
# import os

# url = "file:///C:/Users/dushy/Documents/NOTES/dp.txt"

# try:
#     response = requests.get(url, stream=True)
#     response.raise_for_status()  # Raise an error for bad responses (4xx, 5xx)

#     # Extract filename from URL
#     local_filename = os.path.basename(url)

#     # Save the file in chunks
#     with open(local_filename, "wb") as file:
#         for chunk in response.iter_content(chunk_size=8192):
#             file.write(chunk)

#     print(f"File downloaded successfully as {local_filename}")

# except requests.exceptions.RequestException as e:
#     print(f"Error downloading file: {e}")




file_path = "C:/Users/dushy/Documents/NOTES/dp.txt"
try:
    with open(file_path, 'r') as file:
        content = file.read()
    print(content)
except FileNotFoundError:
    print(f"File not found: {file_path}")
except Exception as e:
    print(f"Error reading file: {e}")










# print("Enter the number up to you wand addition: ")
# n=int(input())
# sum=0
# for i in range(0,n+1):
#  sum=sum+i
# print('TOTAL SUM UP TO NUMBER THAT YOU ENTER')
# print(sum)

# print("Enter the number up to you wand addition: ")
# n=int(input())
# sum=0
# while(n>0):
#  sum=sum+n
#  n=n-1
# print('TOTAL SUM UP TO NUMBER THAT YOU ENTER')
# print(sum)

# print('ENTER THR NUMBER FOR UP TO YOU WANT ADDITON IN WHICH WE LEAVE THE NUMBER THAT DIVIDED BY THREE:')
# n=int(input())
# sum=0
# for i in range(0,n+1):
#   if(i%3==0):
#     continue
#   sum=sum+i
# print('ENTER THE NUMBER:')
# print(sum) 

# def addition(a,b):
#  sum=a+b
#  return sum
# print('addition using arguments with return type')
# print(addition(99,1))

# def multiply():
#  x=20
#  y=90
#  multi= x*y
#  print('multiply by using no argument with no return value:')
#  print(multi)
# multiply()    

# def division(x,y):
#  divide=x/y
#  print('division by using argument with no return type:')
#  print(divide)
# division(30,10)

# def subtraction():
#  x=100
#  y=95
#  subs=x-y
#  return subs
# print('subtraction by using no argument with return type:')
# print(subtraction())

# print('ENTER the number that you want to add or MULTIPLY with each other: ')
# print('ENTER YOUR FIRST NUMBER:')
# x=int(input())
# print('ENTER YOUR SECOND NUMBER:')
# y=int(input())
# print('ENTER PYUR THIRD NUMBER:')
# z=int(input())
# sum=x+y+z
# multi=x*y*z
# print('ADDITION OF THREE NUMBER THAT YOU ENTERED:')
# print(sum)
# print('MUTIPLE OF THE THREE NUMBER THAT YOU ENTERED:')
# print(multi)

# print('ENTER THE NUMBER FOR THAT YOU WANT THE FACTORIAL:')
# n=int(input())
# fact=1
# for i in range(1,n+1):
#  fact=fact*i
# print('FACTORIAL OF THAT NUMBER THAT YOU ENTERED:')
# print(fact)
 
# def recursion(n):
#  if(n<=1):
#   return 1
#  else:
#   return (n*recursion(n-1))
# print('ENTER THE NUMBER FOR WHICH YOU WANT FACTORIAL:')
# n=int(input())
# print('FACTORIAL OF THAT NUMBER THAT YOU ENTERED:')
# print(recursion(n)) 

# print('ENTER THE DIGIT FOR THAT YOU WANT THE SUM:')
# n=int(input())
# sum=0
# while(n!=0):
#     sum=sum+n%10
#     n=n//10
# print('SUM OF THAT DIGIT THAT YOU ENTERED:')
# print(sum)    

# print('ENTER THE FOR THAT YOU WANT PRINT ITS REVERSE:')
# n=int(input())
# reverse=0
# while(n>0):
#     sum=n%10
#     reverse=reverse*10+sum
#     n=n//10
# print('REVERSE OF THAT NUMBER THAT YOU ENTERED:')
# print(reverse)

# print('ENTER THE NUMBER FOR THAT YOU WANT TO KNOW IT IS ANGSTROME OR NOT: ')
# n=int(input())
# sum=0
# key=n
# while(n>0):
#     last=n%10
#     sum=sum+pow(last,3)
#     n=n//10
# if (sum==key):
#  print('NUMBER THAT YOU ENTERED IS ANGSTROME:')
# else:
#  print('NUMBER THAT YOU ENTERED IS NOT A ANGSTOME:')

# print('ENTER THE NUMBER FOR THAT YOU WANT TO CHECK PALINDROME CONDITION:')
# n=int(input())
# sum=0
# key=n
# while(n>0):
#     last=n%10
#     sum=sum*10+last
#     n=n//10
# if(sum==key):
#  print('NUMBER THAT YOU ENTERED IS PALINDROME')
#  print(sum)
# else :
#  print('NUMBER THAT YOU ENTERED IS NOT A PALINDROME') 

# print('GRADE OF A STUDENT THAT STUDY IN VIT BHOPAL:')
# print('ENTER THE MARKS OF FIRST SUBJECT:')
# x=int(input())
# print('ENTER THE MARKS OF SECOND SUBJECT:')
# y=int(input())
# print('ENTER THE NUMBER OF THE THIRD SUNJECT:')
# z=int(input())
# print('ENTER THE NUMBER OF THE FORTH SUBJECT:')
# a=int(input())
# print('TOTAL NUMBER OBTAIN BY THE STUDENT:')
# total=x+y+z+a
# print(total)
# print('AVERAGE MARKS OF THE STUDENT:')
# average=total/4
# print(average)
# if(average>60):
#     print('STUDENT IS PASS')
# else:
#     print('STUDENT IS FAIL')

# print('ENTER THE RANGE OF THE NUMBER FOR THAT YOU WANT TO PRINT PRIME NUMBER:')
# def prime(n):
#  if(n<2):
#     return False
#  for i in range(2,n//2+1):
#   if(n%i==0):
#    return False
#  return True
# print('ENTER THE LOWEST LIMIT:')
# x=int(input())
# print('ENTER THE HIGHEST LIMIT:')
# y=int(input())
# for i in range(x,y+1):
#  if(prime(i)):
#   print(i)

# print('ENTER THE NUMBER FOR THAT YOU WANT TO CHECK IT PRIME OR NOT:')
# def prime(n):
#  if(n<2):
#     return False
#  for i in range(2,n//2+1):
#   if(n%i==0):
#    return False
#  return True
# print('ENTER THE NUMBER:')
# n=int(input())
# if(prime(n)):
#  print('NUMBER THAT YOU ENTER IS PRIME: ',n)
# else:
#  print('ENTER ANOTHER NUMBER BECAUSE NUMBER THAT YOU ENTERED IS NOT PRIME:')

# print('ENTER THE NUMBER UPTO YOU WANT FABONACCI:')
# def fab(n):
#  if(n<=1):
#    return n
#  return (fab(n-1)+fab(n-2))
# print('ENTER THE NUMBER:')
# x=int(input())
# print(fab(x))

# from array import*
# arr=array('i',[1,2,3,4,5,6,7,8,9])
# print(arr)
# for i in arr:
#  print(i,end=' ',)
# print('TOTAL NUMBER OF ELEMENTS IN THE ARRAY:')
# lenght=len(arr)
# print(lenght)

# import shutil
# shutil.copy("python.py","new.py")



# c=input('ENTER ANYTHING THAT YOU WANT: \n')
# if(c.isalpha()):
#  print('ALPHABATE ENTERED BY YOU')
# if(c.isdigit()):
#  print('A NUMBER ENTERED BY YOU')
# if(c.isspace()):   
#  print('A SPACE ENTERED BY YOU')


# print('ENTER THE NUMBER')
# n=int(input())
# if(n%15==0):
#  print('NUMBER IS DIVIDED BY FIFTEEN')
# else:
#  print('NUMBER IS NOT DIDVIDED BY FIFTEEN') 


# print('ENTER FIRST NUMBER: ')
# a=int(input())
# print('ENTER SECOND NUMBER:')
# b=int(input())
# sum=a+b
# print('ADDITION OF THE TWO INTEGERS:')
# print(sum)


# print('ENTER THE HEIGHT OF TRIANGLE:')
# h=int(input())
# print('ENTER BASE OF THE TRINAGLE: ')
# b=int(input())
# area=0.5*h*b
# print("AREA OF THE TRIANGLE: ")
# print(area)


# print('THE RADIUS OF THE SPHERE: ')
# r=6
# volume=4/3*3.14*r*r*r
# print('VOLUME OF THE SPHERE: ')
# print(volume)


# import datetime
# now = datetime.datetime.now()
# print ("DATE AND TIME IN THE PRESENT: ")
# print (now.strftime("%Y-%m-%d  %H:%M:%S"))


# filename = input("Input the Filename: ")
# f_extns = filename.split(".")
# print ("The extension of the file is : " + repr(f_extns[-1]))


# print('ENTER A NUMBER:')
# n=int(input())
# print('CONVERT A DECIMEL TO HEXADECIMEL:')
# print(hex(n))


# print('ENTER THE STRING :')
# print('The NIFTY 50 is a benchmark Indian stock market index that represents the weighted \n',
# 'average of 50 of the largest Indian companies listed on the National Stock Exchange.')


# import platform
# print('VERSION OF THE PYTHON THAT YOU USING:')
# print(platform.python_version_tuple())


# print('ADDING LIST ELEMENTS:')
# def concatenate(list):
#  add= ''
#  for variable in list:
#   add += str(variable)
#  return add
# print(concatenate([13,24,30]))

# a = 1000
# b = 23
# print ('Sum: ', a + b)
# print ('Subtraction: ', a - b)
# print ('Multiplication: ', a * b)
# print ('Division: ', a / b)
# print ('Floor Division: ', a // b)
# print ('Modulo: ', a % b)
# print ('Power: ', a ** b) 


# print('Please enter an integer value:') 
# x = input()
# print('Please enter another integer value:')
# y = input()
# num1 = int(x)
# num2 = int(y)
# print(num1, '+', num2, '=',num1+num2 )



# def is_operator(c):
#     if c == '+' or c == '-' or c == '/' or c == '*' or c == '^':
#         return True
#     else:
#         return False

# def precedence(c):
#     if c == '^':
#         return 3
#     elif c == '/' or c == '*':
#         return 2
#     elif c == '+' or c == '-':
#         return 1
#     else:
#         return -1

# def infix_to_postfix(stack, infix):
#     postfix = ''
#     n = len(infix)
#     for i in range(n):
#         if infix[i].isalpha():
#             postfix += infix[i]
#         elif infix[i] == '(':
#             stack.append(infix[i])
#         elif infix[i] == ')':
#             while not stack.empty() and stack[-1] != '(':
#                 temp = stack[-1]
#                 postfix += temp
#                 stack.pop()
#             if not stack.empty() and stack[-1] == '(':
#                 stack.pop()
#         elif is_operator(infix[i]):
#             if stack.empty():
#                 stack.append(infix[i])
#             else:
#                 if precedence(infix[i]) > precedence(stack[-1]):
#                     stack.append(infix[i])
#                 elif precedence(infix[i]) == precedence(stack[-1]) and infix[i] == '^':
#                     stack.append(infix[i])
#                 else:
#                     while not stack.empty() and precedence(infix[i]) <= precedence(stack[-1]):
#                         temp = stack[-1]
#                         postfix += temp
#                         stack.pop()
#                     stack.append(infix[i])
#     while not stack.empty():
#         temp = stack[-1]
#         postfix += temp
#         stack.pop()
#     return postfix

# infix = input("ENTER YOUR INFIX STATEMENT:\n")
# print("INFIX STATEMENT THAT YOU ENTERED:\n", infix)
# s = []
# print("POSTFIX OF THE INFIX THAT YOU ENTERED:")
# print(infix_to_postfix(s, infix))


# def halfPyramidNumbers1(n):
#     for i in range(1, n + 1):
#         for j in range(1, i + 1):
#             print(i, end='')
#         print()

# def halfPyramidNumbers2(n):
#     for i in range(n, 0, -1):
#         for j in range(1, i + 1):
#             print(n - i + 1, end='')
#         print()

# def halfPyramidNumbers3(n):
#     for i in range(1, n + 1):
#         for k in range(n - i):
#             print(' ', end='')
#         for j in range(1, i + 1):
#             print(i, end='')
#         print()

# def halfPyramidNumbers4(n):
#     for i in range(n, 0, -1):
#         for k in range(n - i):
#             print(' ', end='')
#         for j in range(1, i + 1):
#             print(n - i + 1, end='')
#         print()

# def halfPyramidNumbers5(n):
#     for i in range(1, n + 1):
#         for j in range(1, i + 1):
#             print(j, end='')
#         print()

# def halfPyramidNumbers6(n):
#     x = 1
#     for i in range(1, n + 1):
#         for j in range(1, i + 1):
#             print(x, end=' ')
#             x += 1
#         print()

# num = int(input("Enter number of levels of the pattern : "))
# halfPyramidNumbers1(num)
# print()
# halfPyramidNumbers2(num)
# print()
# halfPyramidNumbers3(num)
# print()
# halfPyramidNumbers4(num)
# print()
# halfPyramidNumbers5(num)
# print()
# halfPyramidNumbers6(num)

# weight = float(input("Enter your weight in pounds: "))
# height = float(input("Enter your height in inches: "))
# bmi = 703 * weight / (height ** 2)
# bmi = round(bmi, 1)
# print("The BMI is:", bmi)

# import math
# halflife = float(input("Enter the halflife: "))
# current_amount = float(input("Enter the current amount : "))
# years = float(input("Enter the number of years : "))
# k = math.log(2) / halflife
# amount = current_amount * math.exp(-k * years)
# print("The amount of the material after", years,  amount)

# import math
# pressure = float(input("Enter the pressure : "))
# h = (1 - (pressure/1013.25) ** 0.190284) * 145366.45
# h = round(h)
# print("The altitude is:", h)

# import math
# p=float(input("ENTER THE INITTAL INVERTMENT:"))
# r=float(input("ENTER THE YEARLY INTEREST RATE:"))
# t=float(input("ENTER THE TIME IN YEARS:"))
# n=float(input("ENTER NUMBER OF TIME OF COMPOUNDED INTERSET PER YEAR:"))
# v=p*((1+((r/100)/n))**(n*t))
# v=round(v)
# print("The value of a saving account",v)



# def bubblesort(n, a):
#     for i in range(n):
#         for j in range(n-1-i):
#             if a[j] > a[j+1]:
#                 a[j], a[j+1] = a[j+1], a[j]

# def selectionsort(n, a):
#     for i in range(n-1):
#         for j in range(i+1, n):
#             if a[i] > a[j]:
#                 a[i], a[j] = a[j], a[i]

# def insertionsort(n, a):
#     for i in range(n):
#         j = i
#         while j > 0 and a[j-1] > a[j]:
#             a[j-1], a[j] = a[j], a[j-1]
#             j -= 1
# def merge(a, s, m, e):
#     i = s
#     j = m+1
#     k = s
#     temp = [0] * (e-s+1)
#     while i <= m and j <= e:
#         if a[i] < a[j]:
#             temp[k] = a[i]
#             k += 1
#             i += 1
#         else:
#             temp[k] = a[j]
#             k += 1
#             j += 1
#     while i <= m:
#         temp[k] = a[i]
#         k += 1
#         i += 1
#     while j <= e:
#         temp[k] = a[j]
#         k += 1
#         j += 1
#     for i in range(s, e+1):
#         a[i] = temp[i]

# def mergesort(a, s, e):
#     if s < e:
#         m = (s + e) // 2
#         mergesort(a, s, m)
#         mergesort(a, m+1, e)
#         merge(a, s, m, e)

# def partition(a, s, e):
#     pivot = a[e]
#     index = s
#     for i in range(s, e):
#         if a[i] <= pivot:
#             a[i], a[index] = a[index], a[i]
#             index += 1
#     a[e], a[index] = a[index], a[e]
#     return index

# def quicksort(a, s, e):
#     if s < e:
#         p = partition(a, s, e)
#         quicksort(a, s, p-1)
#         quicksort(a, p+1, e)

# n = int(input("ENTER THE SIZE OF THE ARRAY:\n"))
# print("ENTER THE ELEMENTS IN THE ARRAY:")
# a = [int(input()) for i in range(n)]

# print("ARRAY BEFORE USING ANY SORTING ALGORITHMS:")
# print(*a)

# bubblesort(n, a)
# selectionsort(n, a)
# insertionsort(n, a)
# mergesort(a, 0, n-1)
# quicksort(a, 0, n-1)

# print("ARRAY AFTER USING ANY SORTING ALGORITHMS:")
# print(*a)


# MAX_VALUE = 50
# for a in range(1, MAX_VALUE+1):
#     for b in range(a, MAX_VALUE+1):
#         for c in range(b, MAX_VALUE+1):        
#             if a*a + b*b == c*c:             
#                 print("{:2d} {:2d} {:2d}".format(a, b, c))


# import random
# vec = [random.randint(10, 30) for _ in range(20)]
# count = 0
# while any(elem % 2 != 0 for elem in vec):
#     for i in range(len(vec)):
#         if vec[i] % 2 != 0:
#             vec[i] = random.randint(10, 30)   
#     count += 1
# print("Final vector: ", vec)
# print("Number of iterations needed: ", count)



# import random
# vec=[random.randint(-20, 20) for _ in range(30)]
# divisiblesum = 0
# for element in vec:
#     if element %3==0:
#         divisiblesum += element
# print("The sum of all elements that are divisible by 3 is:", divisiblesum)



# a, b, c = 0, 1, 1
# print(a, b, c, end=" ")
# for i in range(22):
#     d = a + b + c
#     print(d, end=" ")
#     a, b, c = b, c, d



# NYC = [33, 33, 18, 29, 40, 55, 19, 22, 32, 37, 58, 54, 51, 52, 45, 41, 45, 39, 36, 45, 33, 18, 19, 19, 28, 34, 44, 21, 23, 30, 39]
# DEN = [39, 48, 61, 39, 14, 37, 43, 38, 46, 39, 55, 46, 46, 39, 54, 45, 52, 52, 62, 45, 62, 40, 25, 57, 60, 57, 20, 32, 50, 48, 28]
# tempNYC = round(sum(NYC) / len(NYC))
# tempDEN = round(sum(DEN) / len(DEN))
# countNYC = len([temp for temp in NYC if temp > tempNYC])
# countDEN = len([temp for temp in DEN if temp > tempDEN])
# counthigherDEN = len([1 for i in range(len(NYC)) if DEN[i] > NYC[i]])
# print("Average temperature in NYC: {}°F".format(tempNYC))
# print("Number of days above average in NYC: {}".format(countNYC))
# print("Average temperature in Denver: {}°F".format(tempDEN))
# print("Number of days above average in Denver: {}".format(countDEN))
# print("Number of days with higher temperature in Denver than NYC: {}".format(counthigherDEN))

