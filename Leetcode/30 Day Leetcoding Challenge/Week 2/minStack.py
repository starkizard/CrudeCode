#author: starkizard
class MinStack:

    def __init__(self):
        """
        initialize your data structure here.
        """
        self.arr=[]
        #array would have elements like [element, minimum till this element]
        #so when it's popped
        #the minimum also updates
        #eg let stack be [[5,5],[6,5],[7,5],[2,2],[3,2]]
        #so the current min would be the second element to top element
        #if we pop 3 and 2 the current minimum would be 5.

    def push(self, x: int) -> None:
        if self.arr==[]:
            self.arr.append((x,x))
        else:
            self.arr.append((x,min(x,self.arr[-1][1])))
    def pop(self) -> None:
        a=self.arr.pop(-1)
        return a[0]

    def top(self) -> int:
        return self.arr[-1][0]

    def getMin(self) -> int:
        return self.arr[-1][1]
        


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(x)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()