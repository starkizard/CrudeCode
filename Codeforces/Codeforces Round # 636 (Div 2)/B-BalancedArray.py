#python 2
# code_marshal
for _ in xrange(input()):
    x=input()/2
    if x%2<>0:print "No";continue
    print "Yes"
    L=[0 for i in xrange(2*x)];c,d=0,0
    for i in xrange(x):L[i]=str(2*(i+1));L[i+x]=str(2*(i+1)-1);c+=int(L[i]);d+=int(L[i+x])
    L[2*x-1]=str(c-d+int(L[2*x-1]));print ' '.join(L)
