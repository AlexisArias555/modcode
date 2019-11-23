a=int(input("base: "))
n=int(input("exponente: "))
m=int(input("modulo: "))
decimal=n

def binario(decimal):
    bin = ''
    while decimal // 2 != 0:
        bin = str(decimal % 2) + bin
        decimal = decimal // 2
    return str(decimal) + bin
print("Exponente en binario: ", binario(n))

res=1
b=a % m
while (n>0):
    if (n%2!=0):
        res=(res*b)%m
    b=(b*b)%m
    n=n//2
print("El resto es: ",res)