t = int(input())  
for _ in range(t):
    n = int(input())  
    a = list(map(int, input().split()))  
    
    found = False
    for i in range(n - 1):
        
        if 2 * a[i] > a[i + 1] and 2 * a[i + 1] > a[i]:
            found = True
            break
    
    if found:
        print("YES")
    else:
        print("NO")