n=int(input())
lst=[]
ans=0
for i in range(n):
    lst.append(list(map(int,input().split())))
for i in range(1,10):
    for j in range(1,10):
        if i==j:
            continue
        for k in range(1,10):
            if i==k or j==k:
                continue
            check=True

            for l in range(n):
                s=0
                b=0
                lstC=[lst[l][0]//100,(lst[l][0]%100)//10,lst[l][0]%10]
                if i==lstC[0]:
                    s+=1
                elif i in lstC:
                    b+=1
                if j==lstC[1]:
                    s+=1
                elif j in lstC:
                    b+=1
                if k==lstC[2]:
                    s+=1
                elif k in lstC:
                    b+=1
                if s!=lst[l][1] or b!=lst[l][2]:
                    check=False
                    break
            if check:
                ans+=1

print(ans)