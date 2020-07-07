# auth: starkizard
# For it to be satisfied the last element has to be greater than the first element.
# proof:
# lets say we have x and y as the first and last elements
# in between we have elements a,b,c...
# let's see for only 3 now, we can generalize this
# x a y
# if a>x, we can choose the pair a,x and substitute with x, we end up with x,y for this to be satisfied y must be > x
# if a<=x, w cannot choose the pair a,x, we must choose a,y , for this to be satisfied y>a, if it is we can replaye a,y with y and we end up with x,y again
# If it is not, then y<=a and as a<=x, y<=x.
# this is the only failing condition.
def main(): 
    for t in range(ii()):
        n=ii()
        a=li()
        if a[0] < a[-1]:
          print("YES")
        else:
          print("NO")
