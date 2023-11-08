i=int(input())
k=1
cnt=0
while k!=i:
    if i%k==0:
        cnt+=1
    k+=1
if cnt==1:
    print('Простое число')
else:
    print('Составное число')