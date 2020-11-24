from math import sin
 
from time import time
 
tiempo_inicial = time() 
 
for i in range(10000000):
	b = 0
	 
tiempo_final = time() 
 
tiempo_ejecucion = tiempo_final - tiempo_inicial
 
print 'El tiempo de ejecucion fue:',tiempo_ejecucion
