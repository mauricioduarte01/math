def ispalindrome(string):
    var = 1
    i = 0

    while i <= int(len(string)/2) and var == 1:
	if string[i]!=string[-(i+1)]:
	    var = 0
	i+=1
    return var

if __name__=='__main__':
    aux = 0
    for k in range(101,1000):
    for j in range(101,1000):
	if isPalindrome(str(j*k)) and j * k > aux:
	    aux = j * k
    print aux