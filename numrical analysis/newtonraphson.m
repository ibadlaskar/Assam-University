% Clearing Screen
clc

% Setting x as symbolic variable
syms x;

% Input Section
y = input('Enter non-linear equations: ');
a = input('Enter initial guess: ');
e = input('Tolerable error: ');

% Finding derivate of given function
g = diff(y,x);

% Finding Functional Value
fa = eval(subs(y,x,a));

while abs(fa)> e
    fa = eval(subs(y,x,a));
    ga = eval(subs(g,x,a));

    b = a - fa/ga;

    a = b;

end

fprintf('Root is %f\n', a);
