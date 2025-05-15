from sympy.vector import*
from sympy import*
x=[1,2,3,4,5]
y=[10,26,58,112,194]
s=y[0]
h=x[1]-x[0]
xr=1.4
n=len(x)
r=(xr-x[0])/h
for j in range(1,n):
    for i in range(n-1,j-1,-1):
        y[i]=y[i]-y[i-1]
print(y)
tem=1
fact=1
for i in range(1,n):
    fact=fact*1
    tem=tem*(r-(i-1))/fact
    s=s+tem*y[i]
print("By newtons forward interpolation y=",s)    
    
        
       
        
