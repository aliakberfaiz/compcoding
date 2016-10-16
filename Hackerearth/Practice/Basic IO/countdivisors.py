l,r,k=input().split(" ")
l,r,k=int(l),int(r),int(k)
count = 0
l = l + ( l%k )
while ( l <= r ):
    count = count + 1
    l = l + k
print(count);
    
#return 0;