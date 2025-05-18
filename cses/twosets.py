n=int(input())
set1=[]
set2=[]
if((( n * ( n+1 ))/2)%2!=0):
    print("NO")
else:
    set1.append(n)
    for i in range(n-1,0,-1):
        if sum(set2)>sum(set1):
            set1.append(i)
        else:
            set2.append(i)
    print("YES")
    print(len(set1))
    print(*sorted(set1))
    print(len(set2))
    print(*sorted(set2))