def ace():
  a,b,x,y,n=map(int,input().split())
  a1=(a-min(n,a-x))
  b1=(b-min(n-(a-a1),b-y))
  b2=(b-min(n,b-y))
  a2=(a-min(n-(b-b2),a-x))
  return min(a1*b1,a2*b2)
  
t=int(input())
for _ in range(t):
  print(ace())
