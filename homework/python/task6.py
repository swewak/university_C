i=input()
alphabet='уеыаоэяиюУЕЫАОЭЯИЮeyuioaEYUIOA'
cnt=0
for k in (alphabet):
    cnt+=i.count(k)
print(cnt)