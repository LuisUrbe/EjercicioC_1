/******************************************************************************
 
 autor -> Luis Acosta	
 Carrera -> Ing. Informatica
 
*******************************************************************************/
 
 // Libreria
#include <iostream>
 // Final de librerias

using namespace std; // Facilidad para hacer el codigo

int main(){	// Comienzo del prgrama

    // Variables
    	
		//Inicio y repeticion del programa
		int entrada; // para la inicial el programa y cerrar
		int vuelta; // Condicion para evualuar si se repite o no el programa 
		//final del inicio y repeticion del programa
		
		string articulo[5] = {"Primer", "Segundo", "Tercero", "Cuarto", "Quinto"}; // Letras en Numero para saber que articulo es
		string sucursal[4] = {"Primera", "Segunda", "Tercera", "Cuarta"}; // Letras en Numero para saber que articulo es
		
		// Precios de los productos
		float productos[5]; // precios de la Primera sucursal
		// final de los Precios de los productos
		
		//cantidades
		float cantidadUno[5]; // Guarda las Cantidades vendidas de la Primera sucursal
		float cantidadDos[5]; // Guarda las Cantidades vendidas de la Segunda sucursal
		float cantidadTres[5]; // Guarda las Cantidades vendidas de la Tercera sucursal
		float cantidadCuatro[5]; // Guarda las Cantidades vendidas de la Cuarta sucursal
		//final cantidades
		
		//precio del total de articulos vendido
		float precioUno[5]; // Guarda los precios de los articulos vendidos Primera sucursal
		float precioDos[5]; // Guarda los precios de los articulos vendidos Segunda sucursal
		float precioTres[5]; // Guarda los precios de los articulos vendidos Tercera sucursal
		float precioCuatro[5]; // Guarda los precios de los articulos vendidos Cuarta sucursal
		//precio del total de articulos vendido
		
		//para mostrar el precio del articulo total
		float precioTota[4]; // Guarda el monto total de los articulos vendidos Primera sucursal
		//fianl para mostrar el precio del articulo total
		
		//Monto total de total
		float precioTotaempresa; // Guarda el monto total de todas las sucurseles
		//final monto total
   
    //Fin de Variables

entrada = 1;
while(entrada == 1){ // Inicio del programa en un bucle

	//Presentacion del autor

    cout << "#######################################"<<endl;
    cout << "autor -> Luis Acosta "<<endl;
    cout << "Carrera -> Ing. Informatica"<<endl;
    cout << "#####################################"<<endl;

	//final de presentacion
	
	// precio de los articulos
			
		cout << "\n#####################################"<<endl;
		cout << "Introducce el precio de los articulos"<<endl;
		cout << "#####################################\n"<<endl;
		
		for (int i = 0; i <= 4; ++i) // bucle para introducir el precio y marcar cada dia de la semana automaticamente
    {
    	cout << "ingrese el precio del " <<articulo[i]<< " articulo en Bs: "; 
		cin >>productos[i]; // almacenar el precio de los articulos
    } // final bucle for 
    system("CLS");
    
    //final del precio de los articulos
    
    //Sucuarsales
    
    	// primera sucusal
		
		cout << "\n################################"<<endl;
		cout << "Bienvenido a la primera sucursal"<<endl;
		cout << "################################"<<endl;
    
    	cout << "\n###################################################"<<endl;
		cout << "Introducce las cantidades vendidas de cada articulo"<<endl;
		cout << "###################################################\n"<<endl;
    
    	//cantidades del primer articulo
    	for (int i = 0; i <= 4; ++i) // bucle para introducir la cantidades vendidas 
    {
    	cout << "Cantidades vendidas del " <<articulo[i]<< " articulo : "; 
    	cin >> cantidadUno[i];
    	} // final bucle for 

    	// calcular los datos de los articulo vendidos

    	for (int i = 0; i <= 4; ++i) // bucle para calcular la cantidades vendidas 
    	{
    	precioUno[i] = cantidadUno[i] * productos[i]; // articulos
    	} // final bucle for 

    	// final de calcular los datos de los articulo vendidos
    
    	precioTota[0] = precioUno[0] + precioUno[1] + precioUno[2] + precioUno[3] + precioUno[4];

    	cout << "\n######################################"<<endl;
		cout << "Dinero recaudado por ventas de articulos"<<endl;
		cout << "########################################\n"<<endl;

    	for (int i = 0; i <= 4; ++i) // se muestran las cantidades vendidas y el precio ganado por ventas
    	{
    		cout << "Ventas del "<<articulo[i]<<" articulo : "<<precioUno[i]<<" Bs"<<endl;
    	} // final de for de muestra del dinero ganado
    
    	cout << "\nDinero total recaudado de los articulos : " << precioTota[0]<< " BS" <<endl;
    	cout <<endl;
    	system("PAUSE");
    	system("CLS");
    	
		// final de la primera sucursal
		
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
		// Segunda sucusal
		
		cout << "\n################################"<<endl;
		cout << "Bienvenido a la Segunda sucursal"<<endl;
		cout << "################################\n"<<endl;
    
    	cout << "\n###################################################"<<endl;
		cout << "Introducce las cantidades vendidas de cada articulo"<<endl;
		cout << "###################################################\n"<<endl;
    
    	//cantidades del primer articulo
    	for (int i = 0; i <= 4; ++i) // bucle para introducir la cantidades vendidas 
    {
    	cout << "Cantidades vendidas del " <<articulo[i]<< " articulo : "; 
    	cin >> cantidadDos[i];
    	} // final bucle for 
    	
    	// calcular los datos de los articulo vendidos

    	for (int i = 0; i <= 4; ++i) // bucle para calcular la cantidades vendidas 
    	{
    	precioDos[i] = cantidadDos[i] * productos[i]; // articulos
    	} // final bucle for 

    	// final de calcular los datos de los articulo vendidos */
    
    	precioTota[1] = precioDos[0] + precioDos[1] + precioDos[2] + precioDos[3] + precioDos[4];

    	cout << "\n######################################"<<endl;
		cout << "Dinero recaudado por ventas de articulos"<<endl;
		cout << "########################################\n"<<endl;

		for (int i = 0; i <= 4; ++i) // se muestran las cantidades vendidas y el precio ganado por ventas
    	{
    		cout << "Ventas del "<<articulo[i]<<" articulo : "<<precioDos[i]<<" Bs"<<endl;
    	} // final de for de muestra del dinero ganado
    	
    	cout << "\nDinero total recaudado de los articulos : " << precioTota[1]<< " BS" <<endl;
    	cout <<endl;
    	system("PAUSE");
    	system("CLS");
    	
		// final de la segunda sucursal
		
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
		// Tercera sucusal
		
		cout << "\n################################"<<endl;
		cout << "Bienvenido a la Tercera sucursal"<<endl;
		cout << "################################\n"<<endl;
    
    	cout << "\n###################################################"<<endl;
		cout << "Introducce las cantidades vendidas de cada articulo"<<endl;
		cout << "###################################################\n"<<endl;
    
    	//cantidades del primer articulo
    	for (int i = 0; i <= 4; ++i) // bucle para introducir la cantidades vendidas 
    {
    	cout << "Cantidades vendidas del " <<articulo[i]<< " articulo : "; 
    	cin >> cantidadTres[i];
    	} // final bucle for 
    	
    	// calcular los datos de los articulo vendidos

    	for (int i = 0; i <= 4; ++i) // bucle para calcular la cantidades vendidas 
    	{
    	precioTres[i] = cantidadTres[i] * productos[i]; // articulos
    	} // final bucle for

    	// final de calcular los datos de los articulo vendidos
    
    	precioTota[2] = precioTres[0] + precioTres[1] + precioTres[2] + precioTres[3] + precioTres[4];

    	cout << "\n######################################"<<endl;
		cout << "Dinero recaudado por ventas de articulos"<<endl;
		cout << "########################################\n"<<endl;

		for (int i = 0; i <= 4; ++i) // se muestran las cantidades vendidas y el precio ganado por ventas
    	{
    		cout << "Ventas del "<<articulo[i]<<" articulo : "<<precioTres[i]<<" Bs"<<endl;
    	} // final de for de muestra del dinero ganado
    
    	cout << "\nDinero total recaudado de los articulos : " << precioTota[2] << " BS" <<endl;
    	cout <<endl;
    	system("PAUSE");
    	system("CLS");
    
		// final de la tercera sucursal
		
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		
		// cuarta sucusal
		
		cout << "\n################################"<<endl;
		cout << "Bienvenido a la cuarta sucursal"<<endl;
		cout << "################################\n"<<endl;
		
		cout << "\n###################################################"<<endl;
		cout << "Introducce las cantidades vendidas de cada articulo"<<endl;
		cout << "###################################################\n"<<endl; 
    
    	//cantidades del primer articulo
    	for (int i = 0; i <= 4; ++i) // bucle para introducir la cantidades vendidas 
    {
    	cout << "Cantidades vendidas del " <<articulo[i]<< " articulo : "; 
    	cin >> cantidadCuatro[i];
    	} // final bucle for 
    	
    	// calcular los datos de los articulo vendidos

    	for (int i = 0; i <= 4; ++i) // bucle para calcular la cantidades vendidas 
    	{
    	precioCuatro[i] = cantidadCuatro[i] * productos[i]; // articulos
    	} // final bucle for

    	// final de calcular los datos de los articulo vendidos
    
    	precioTota[3] = precioCuatro[0] + precioCuatro[1] + precioCuatro[2] + precioCuatro[3] + precioCuatro[4];

    	cout << "\n######################################"<<endl;
		cout << "Dinero recaudado por ventas de articulos"<<endl;
		cout << "########################################\n"<<endl;

		for (int i = 0; i <= 4; ++i) // se muestran las cantidades vendidas y el precio ganado por ventas
    	{
    		cout << "Ventas del "<<articulo[i]<<" articulo : "<<precioCuatro[i]<<" Bs"<<endl;
    	} // final de for de muestra del dinero ganado
    
    	cout << "\nDinero total recaudado de los articulos : " << precioTota[3] << " BS" <<endl;
    	cout <<endl;
    	system("PAUSE");
    	system("CLS");
    	
    	// final de la Cuarta sucursal
    	
	// final de las sucursal    
    	
    //Recaudacion total de la empresa
    	
    	//se suma las cantidades
    	precioTotaempresa = precioTota[0] + precioTota[1] + precioTota[2] + precioTota[3];
    	
    	cout << "######################################################"<<endl;
    	cout << "El precio total recaudado de todas las sucursales es : "<<endl;
    	cout << "######################################################\n"<<endl;

    	for (int i = 0; i <= 3; ++i) // se muestran las cantidades vendidas y el precio ganado por ventas
    	{
    		cout <<sucursal[i]<< " sucursal : "<<precioTota[i]<<" Bs"<<endl;
    	} // final de for de muestra del dinero ganado
    
    	cout << "\nDinero Total de todas las surcusales es : " <<precioTotaempresa << " Bs"<<endl;
    	//se termina de calcular las cantidades
    	
    //final de la recaudacion de la empresa
    
    // Final del codigo de la practica
    
    // Terminar o empezar de nuevo el programa
    
    cout << "\nDesea Volver a ejecutar el programa? 1-Si / 2-No : ";
    cin >> vuelta;

    if (vuelta == 1){ // Empezar de nuevo el programa
      	cout << "\nVolvemos!!!!!!\n"<<endl;
      	system("CLS");
    } // final de if comienzo

    else if (vuelta == 2){ // Cerrar el programa
        entrada = entrada + 2;
    } // final del else if opcion 2 dentro del if

    else{  // Repuesta incorrecta y cierra el programa
        cout << "\nRepuesta incorrecta!! el programa se terminara!!";
        entrada = entrada + 2;
    } // final del else dentro del if

}// Final del while

cout << "\nFin del Programa Vuelve pronto!!\n";

    return 0; // Fin
}
