first = input('enter the value')
operator = input("+,-,*,/,%")
second = input("enter the second")
first = int(first)
second = int(second)


if operator == '+':
    print(first+second)
elif operator == '-':
    print(first-second)
elif operator == '*':
    print(first*second)
elif operator == '/':
    print(first/second)
elif operator == '%':
    print(first%second)

else:
    print('envilde')
