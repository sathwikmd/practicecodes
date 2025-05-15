from sympy.vector import*
from sympy import*
x=[0,2,3,6]
y=[707,819,866,966]
xp=4
yp=0
n=len(x)
for i in range(n):
    p=1
    for j in range(n):
        if i!=j:
            p=p*(xp-x[j])/(x[i]-x[j])
    yp=yp+p*y[i]
print("by lagranges interpolation y=",yp)        
        
