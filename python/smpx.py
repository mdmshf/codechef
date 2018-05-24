string=raw_input()
i=1
j=1
k=0
caps=0
a=['']
b=''
lines=1
chars=[-1,0]
for char in string:
#	print char,a,b,i,j
	asci=ord(char)
	if(asci==32 or (asci>=97 and asci<=122) or (asci>=65 and asci<=90) or (asci>=48 and asci<=57)):
		if(caps==0):
			b=b[:j-1]+(char.lower())+b[j-1:]
		else:
			b=b[:j-1]+(char.upper())+b[j-1:]
		j+=1
		chars[i]+=1
	elif(char=='@'):
		if(caps==0):
			caps=1
		else:
			caps=0
	elif(char=='#'):
		i+=1
		j=1
		lines+=1
		a.append(b)
		chars.append(0)
		b=''
	elif(char=='<'):
		if(j>1):
			j-=1
		if(j==1):
			if(i>1):
				i-=1
				j=chars[i]
	elif(char=='>'):
		if(j<chars[i]):
			j+=1
		if(j==char[i]):
			if(i<lines):
				i+=1
				j=1
	elif(char=='^'):
		if(i==1):
			pass
		else:
			if(i==len(a)):
				a.insert(i,b)
			i-=1
			if(k+1<len(a) and string[k+1]!='^' and j>chars[i]):
				j=chars[i]
			b=a[i]
	elif(asci==47):
		if(j==1):
			b=a[i-1]+b
			i-=1
			j=chars[i]+1
			a.pop(i)
			a.insert(i,b)
			chars[i]-=1
		else:
			b=b[:j-2]+b[j-1:]
			j-=1
			chars[i]-=1
	elif(char=='?'):
		if(i==lines):
			pass
		else:
			if(i==len(a)):
				a.insert(i,b)
			i+=1
			if(k+1<len(a) and string[k+1]!='^' and j>chars[i]):
				j=chars[i]
			b=a[i]
	else:
		 pass
	k+=1
#print i,len(a)
if(i!=len(a)):
	a.pop(i)
a.insert(i,b)
for i in range(1,len(a)):
	if(chars[i]==0):
		print "\n"
	else:
		print a[i]
