Algoritmo problema11_descuento
	Escribir "ingrese el valor de cuanto ha sido su compra ";
	Leer  c;
	//procesamiento
	Si c > 1000 Entonces
		d<-c-(c*.20);
		Escribir "Tu compra es mayor a 1000$", "  se aplicara un descuento del 20%";	
		Escribir "Total gastado:",c," con descuento: ", d;
	SiNo
		Escribir "Tu compra es menor a 1000$";
		Escribir "No se aplicara ningun descuento";
	Fin Si
	
	
	
	
FinAlgoritmo
