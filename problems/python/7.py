flag=1
i=2
while(flag!=10001):
    i+=1
    m=0
    for j in range(2,i):
        if(i%j==0):
            m=1
            break
    if(m==0):
        flag+=1
print(i)