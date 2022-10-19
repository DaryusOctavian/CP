a= input()
b=input()
p=0
e=''
for i in range(len(a)):
    c= ord(a[i])-65
    if (i<len(b)):
        d= ord(b[i])-65
    else:
        d= ord(e[p])-65
        p+=1
    e+=chr(((c-d)%26)+65)
    print(chr(((c-d)%26)+65),end='')