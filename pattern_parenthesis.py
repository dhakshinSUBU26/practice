#to print the pattern of parenthesis
class para(object):
    def parenthesis(self,n):
        for i in range(n):
            for j in range(i+1):
                print('{'*j,'}'*j,end=" ")
            print()

obj=para()
obj.parenthesis(5)
