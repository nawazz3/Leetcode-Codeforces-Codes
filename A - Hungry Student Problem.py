def kaizoku():
    x=int(input())
    for b in range(x // 7 + 1):
        if (x - 7 * b) % 3 == 0:
            return "YES"
    return "NO"
  

t=int(input())
for _ in range(t):
    print(kaizoku())
        
        
