% Bisection Method in MATLAB

clc
a=input('Enter function with right hand side zero:','s');
f=inline(a);

xl=input('Enter the first value of guess interval:') ;
xu=input('Enter the end value of guess interval:');
tol=input('Enter the allowed error:');

if f(xu)*f(xl)<0
else
    fprintf('The guess is incorrect! Enter new guesses\n');
    xl=input('Enter the first value of guess interval:\n') ;
    xu=input('Enter the end value of guess interval:\n');
end

for i=2:1000
xr=(xu+xl)/2;
if f(xu)*f(xr)<0
    xl=xr;
else
    xu=xr;
end

if f(xl)*f(xr)<0
    xu=xr;
else
    xl=xr;
end

xnew(1)=0;
xnew(i)=xr;
if abs((xnew(i)-xnew(i-1))/xnew(i))<tol,break,end
end
str = ['The required root of the equation is: ', num2str(xr), '']
