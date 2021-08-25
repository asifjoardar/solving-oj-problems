class Solution:
    def complexNumberMultiply(self, num1: str, num2: str) -> str:
        
        p1, q1, p2, q2 = 0, 0, 0, 0
        num = ""
        
        for i in num1:
            if(i=='+'):
                p1 = int(num)
                num=""
            elif(i=='i'):
                q1 = int(num)
                num=""
            else:
                num+=i
        
        num = ""  
        for i in num2:
            if(i=='+'):
                p2 = int(num)
                num=""
            elif(i=='i'):
                q2 = int(num)
                num=""
            else:
                num+=i
        real = (p1*p2)-(q1*q2)
        img = (p1*q2)+(p2*q1)
        #print(f'{real}+{img}i')
        ans = str(real)+"+"+str(img)+"i"
        return ans
