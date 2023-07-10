T = int(input())

for _ in range(T):
    N, K, L = map(int, input().split())
    
    max_length = -1
    count = 0
    
    for _ in range(N):
        length, language = map(int, input().split())
        
        if language == L:
            if count < K:
                max_length = length
                count += 1
            elif count == K and length > max_length:
                max_length = length
    
    if count < K:
        max_length = -1
    
    print(max_length)
