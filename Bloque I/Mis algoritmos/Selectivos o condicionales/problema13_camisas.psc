Algoritmo problema12_camisas
	//entrada de datos
	Escribir  "¿cuantas camisas compraste?";
	Leer c;
	p<-350;
	pt<- p*c;
	
	Si c>=3 Entonces
		d<-pt-(p*.20);
		Escribir "compraste", c , " camisas , se aplicara un descuento del 20%";
		Escribir  "Precio:", pt, " con descuento:",d;
	SiNo
		d<-pt-(p*.10);
		Escribir "compraste", c , " camisas , se aplicara un descuento del 10%";
		Escribir  "Precio:", pt, " con descuento:",d;
	Fin Si
	
	
	
	
	
FinAlgoritmo
