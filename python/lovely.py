for _ in range(int(input())):
	s=input()
	c=0
	for i in range(len(s)-3):
		a=s[i:i+4]
		if(a=='cehf' or a=='cefh' or a=='chef' or a=='chfe' or a=='cfeh' or a=='cfhe' or a=='echf' or a=='ecfh' or a=='ehcf' or a=='ehfc' or a=='efch' or a=='efhc' or a=='hcef' or a=='hcfe' or a=='hecf' or a=='hefc' or a=='hfec' or a=='hfce' or a=='fceh' or a=='fche' or a=='fech' or a=='fehc' or a=='fhec' or a=='fhce'):
			c+=1
	print("lovely",c)if(c>0) else print("normal")
