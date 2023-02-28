# n=int(input('enter the int value'))
# if n%2!=0:
#     print('Weird')
# elif n>=2 and n<=5:
#     print(' Not Weird')
# elif n>=6 and n<=20:
#     print('Weird')
# elif n>20:
#     print('Not Weird')
# else:
#     print('invailid number')


# n = int(input())
# ans=1
# for i in n:
#     ans=i*n
#     print(ans)


# 1800, 1900, 2100, 2200, 2300 and 2500 are NOT leap

year=int(input('enter the year'))
if year % 4 == 0:
    print('is_leap')
elif year%100!=0:
    print(' NOT a leap year')
elif year%400==0:
    print('is_leap')
else:
    print('not leap year')