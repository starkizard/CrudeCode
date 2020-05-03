# python 2
# Author- code_marshal
for _ in xrange(input()):
    n=input();i=1;c=3
    while n%c<>0:i+=1;c+=1<<i
    print n/c
