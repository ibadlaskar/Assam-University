% Secant Method in MATLAB
clc
a=input('Enter function:','s');
f=inline(a)

x(1)=input('Enter first point of guess interval: ');
x(2)=input('Enter second point of guess interval: ');
n=input('Enter allowed Error in calculation: ');
iteration=0;

for i=3:1000
   x(i) = x(i-1) - (f(x(i-1)))*((x(i-1) - x(i-2))/(f(x(i-1)) - f(x(i-2))));
    iteration=iteration+1;
    if abs((x(i)-x(i-1))/x(i))*100<n
        root=x(i)
        iteration=iteration
        break
    end
end
