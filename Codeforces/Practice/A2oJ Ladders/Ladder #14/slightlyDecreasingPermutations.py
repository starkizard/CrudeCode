# auth: starkizard
# we need k elements that are greater than the next element
# for n=5 k=2, 2 elements needed that must be greater than the next element
# let's put them in the end, so we assign 3 greatest elements (2+1) elements x,y,z that x>y>z 
# and put rest elements in increasing order in the start
# here answer would be 1 2 5 4 3 
# here 5>4 and 4>3 thus we get our answer. using the same technique
n,k=map(int,input().split())
print(* list(range(1,n-k))+list(range(n,n-k-1,-1)))