string = "{:{fill}{align}{width}}"
n = int(input())
for i in range(1,(2*n),2):
    if i<=n : print (string.format(i*"*",fill=" ",align="^",width = n))
    else : print (string.format((n-(i-n))*"*",fill=" ",align="^",width = n))

print("{:{}{}{}}".format(4*"-","+","^",10))
