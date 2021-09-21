let y is pixel intensity
x=1:1:length(y)
plot(y,x) may work instead of plot(y)
this command is useful to flip axis
set(gca,'YDir','reverse');
u can use this command too
camroll(-90)