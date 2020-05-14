
1238 D - AB-string.py PyPy 3 Accepted
n = int(input())
s=input()
ans=n*(n-1)//2
c=1
for i in range(1,n):
 
    if s[i] == s[i-1]:
        c+=1
    else:
        ans-=c
        c=1

s=s[::-1]
c=1
for i in range(1,n):
  
    if s[i] == s[i-1]:
        c+=1
    else:
        ans-=c-1
        c=1

print(ans)
