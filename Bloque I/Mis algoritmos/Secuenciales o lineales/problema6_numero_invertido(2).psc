Algoritmo problema6_numero_invertido
	//inicia  entrada de datos
	Escribir "Ingresa un numero de 2 cifras:";
	Leer N;
	//inicia procesamiento de datos
	//D = (N/10) 
	//D = Trunc(N/10) = solo genera el cociente entero
	//2do proceso:
	//U= N mod 10 = solo genera el residuo
	//3er Proceso 
	// i = (u*10)+D
	D<-Trunc(N/10);
	U<-N mod 10;
	I<- (U*10)+D;
	//salida de datos
	Escribir "tu numero:",n , " invertido es :" ,I;
	
FinAlgoritmo
