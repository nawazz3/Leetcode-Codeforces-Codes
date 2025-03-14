def dattebayo():
  a,b=map(int,input().split())
  ans=abs(a-b)//10;
  if abs(a-b)%10==0:
    return ans
  return ans+1
t=int(input())
for _ in range(t):
  print(dattebayo())
