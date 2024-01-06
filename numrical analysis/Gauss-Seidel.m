% Gauss-Seidel Method in MATLAB
function x = gauss_siedel( A ,B )
disp ( 'Enter the system of linear equations in the form of AX=B')


A = input ( 'Enter matrix A :   \n')

[na , ma ] = size (A);
if na ~= ma
    disp('ERROR: Matrix A must be a square matrix')
    return
end

B = input ( 'Enter matrix B :   ')
[nb , mb ] = size (B);
if nb ~= na || mb~=1
   disp( 'ERROR: Matrix B must be a column matrix')
   return
end

D = diag(diag(A));
L = tril(A)- D;
U = triu(A)- D

e= max(eig(-inv(D+L)*(U)));
if abs(e) >= 1
    disp ('Since the modulus of the largest Eigen value of iterative matrix is not less than 1')
    disp ('this process is not convergent.')
    return
end

r = input ( 'Any initial guess for X? (y/n):   ','s');
switch r
    case 'y'

    X0 = input('Enter initial guess for X :\n')

    [nx, mx] = size(X0);
        if nx ~= na || mx ~= 1
        disp( 'ERROR: Check input')
        return
    end
    otherwise
    X0 = ones(na,1);
end

t = input ( 'Enter the error allowed in final answer:  ');
tol = t*ones(na,1);
k= 1;

X( : , 1 ) = X0;
err= 1000000000*rand(na,1);
while sum(abs(err) >= tol) ~= zeros(na,1)
    X ( : ,k+ 1 ) = -inv(D+L)*(U)*X( : ,k) + inv(D+L)*B;
    err = X( :,k+1) - X( :, k);
    k = k + 1;

end

fprintf ('The final answer obtained after %g iterations is  \n', k)
X( : ,k)
