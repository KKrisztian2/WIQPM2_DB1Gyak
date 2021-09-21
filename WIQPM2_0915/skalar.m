n=input('Kerem a dimenziot= ');
for i=1:n
    x(i)=input('Adja meg az i. elemet: ');
    y(i)=input('Adja meg az i. elemet: ');
end
c=0;
for i=1:n
    c=c+(x(i)*y(i));
end
disp(c);