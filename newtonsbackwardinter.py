from sympy.vector import*
from sympy import*
x=[40,50,60,70,80,90]
y=[184,204,226,250,276,304]
n=len(x)
s=y[n-1]
h=x[1]-x[0]
xr=85
r=(xr-x[n-1])/h
y[0]=y[n-1]
for j in range(1,n):
    for i in range(n-1,j-1,-1):
        y[i]=y[i]-y[i-1]
    y[j]=y[n-1]
print(y)
fact=1
tem=1
for i in range(1,n):
    fact=fact*i
    tem=tem*(r+(1-i))/fact
    s=s+tem*y[i]
print("By newtons backward interpolation y=",s)    

        
       
        
