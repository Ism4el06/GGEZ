Algoritmo CalcularTotalKw
		// Declarar variables
		Definir cantidadKw, precioKw, totalPagar Como Real
		Definir excesoKw Como Real
		
		// Leer los datos de entrada
		Escribir "Ingrese la cantidad de Kw consumidos: "
		Leer cantidadKw
		Escribir "Ingrese el precio por Kw: "
		Leer precioKw
		
		// Calcular el valor total a pagar
		Si cantidadKw > 700 Entonces
			excesoKw <- cantidadKw - 700
			totalPagar <- (700 * precioKw) + (excesoKw * precioKw * 1.05)
		SiNo
			totalPagar <- cantidadKw * precioKw
		Fin Si
		
		// Mostrar el resultado
		Escribir "El total a pagar es: ", totalPagar, " unidades monetarias."
FinAlgoritmo