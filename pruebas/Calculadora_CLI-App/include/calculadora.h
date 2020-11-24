#ifndef CALCULADORA_H
#define CALCULADORA_H

class calculadora
{
	private:
		float resultado = 0, n1, n2;
		int opcion;
	public:
		calculadora();
		void suma();
		void resta();
		void multiplicacion();
		void division();
		float getResultado();
};

#endif //CALCULADORA_H
