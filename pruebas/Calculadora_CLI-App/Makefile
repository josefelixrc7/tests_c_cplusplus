CPPFLAGS=-Iinclude/
OBJETOS=src/main.o src/calculadora.o
FUENTES=src/main.cpp src/calculadora.cpp

Calculadora: $(OBJETOS)
	g++ -Wall $(OBJETOS) -o Calculadora
	
depend:
	make depend: $(CPPFLAGS) $(FUENTES)
