Proceso problema13_camisas
	//entrada de datos
	Escribir "Cuantas camisas compraste?";
	Leer  c;
	//declaro las variables y su funcion
	p<-350;
	pt<- c*350;
	d1<-pt-(pt*.20);
	d2<-pt-(pt*.10);
	//procesamiento
	Si c>=3 Entonces
		Escribir "Compraste ",c ," camisas";
		Escribir "Se hara un descuento del 20%";  //salidas
		Escribir  "El precio total es:", pt;
		Escribir  "Con descuento:";
		Escribir  d1 ,"$";
	Sino
		Escribir "Compraste ",c ," camisas";
		Escribir "Se hara un descuento del 10%";
		Escribir  "El precio total es:", pt;
		Escribir  "Con descuento:";
		Escribir  d2 ,"$";
	FinSi
	
	
FinProceso
