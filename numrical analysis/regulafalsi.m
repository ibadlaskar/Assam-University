% Clearing Screen
clc
syms x;
y = input('Enter non-linear equations: ');
a = input('Enter first guess: ');
b = input('Enter second guess: ');
e = input('Enter allowed   error: ');

fa = eval(subs(y,x,a));
fb = eval(subs(y,x,b));

c = a - (a-b) * fa/(fa-fb);
fc = eval(subs(y,x,c));

    while abs(fc)>e

        if fa*fc< 0
            b =c;
            fb = eval(subs(y,x,b));
        else
            a =c;
            fa = eval(subs(y,x,a));
        end
        c = a - (a-b) * fa/(fa-fb);
        fc = eval(subs(y,x,c));
    end
    fprintf('\nRoot is: %f\n', c);

