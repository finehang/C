import numpy as np

class Prime():
    def prime(self, n):
        a = [i for i in range(1,n+1)]
        print(a)
        print(np.sqrt(n))
        sum = 0
        for i in range(2,int(np.sqrt(n))):
            for j in range(2, n+1):
                if a[j] !=0:
                    if i*j>n-1:
                        break
                    else:
                        a[i*j] = 0
                else:
                    break
        print(a)
        for i in range(1, len(a)):
            if a[i]!=0:
                print(i)









if __name__ == "__main__":
    p = Prime()
    print(p.prime(2000))