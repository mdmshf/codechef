from firebase import firebase
#from nanpy import (ArduinoApi , SerialManager)
#import RPi.GPIO as GPIO
#import requests
#import json
#from nanpy import (ArduinoApi , SerialManager)
#import signal
#import sys
'''
print(" For exit please enter Ctrl+C ")
def signal_handler(signal,frame):
    print "Bye!see you soon :)"
    sys.exit(0)
    
signal.signal(signal.SIGINT,signal_handler)
#SERIAL check with arduino
try:
    connection = SerialManager()
    a = ArduinoApi(connection = connection)
    print("Connected with arduino")
except:
    print("Failed to connect to arduino")
#vaiable intialise with arduino
a.pinMode(6,a.INPUT)
a.pinMode(7,a.OUTPUT)
'''
#firebase request and url
firebaseUrl= 'https://iotapp-58ab6.firebaseio.com/'
firebaseRef=firebase.FirebaseApplication(firebaseUrl,None)
print("Firebase Url excepted")
valOld=0
hello=56

try:
    while True:
        ''' for i in range(10):
            print("getting on/off")
	    val=int(firebaseRef.get('ledStatus',None))
	    print str(val)+"-"+str(valOld)
	    if(valOld!=val):
		a.digitalWrite(7,a.LOW)
		print("Off")
	    elif(val==1):
		a.digitalWrite(7,a.HIGH)
		print ("On")
	    valOld=val
        i = a.analogRead(6)
        p = int(155.56*i)
	print("posting power value")'''
        data={'power_value' :i}
        result = firebase.post('/powers',{'date':'12:55:45'},{'value':545})
        print(str(result.status_code)+','+result.text)
except KeyboardInterrupt:
    print("Quit")
