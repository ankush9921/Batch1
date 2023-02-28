l = ['aba', 'asd', 'dd', '121','11111']
v = 0
for i in l:
    if len(i) > 2:
        if i[0] == i[-1]:
            v += 1
print(v)
