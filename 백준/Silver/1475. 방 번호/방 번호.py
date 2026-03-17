#숫자를 각 자리수별로 나누면서 갯수 세기

n=int(input())
check_l=[0 for i in range(9)] #갯수 리스트

while(n>0):
    num=n%10 #끝자리 숫자
    if num==9:
        check_l[6]+=1
    else:
        check_l[num]+=1
    n//=10

check_l[6]=(check_l[6]+1)//2 #반올림
print(max(check_l))
