Action()
{
	char username[10] = "Tester";
	char name[10];
	char fullname[20]; //Contiene nombre y apellido
	char nombreCompleto[30];
	//Converir valores inicializados con c para que LRunner los pueda leer
	//El valor de username es traspasado a "Myname"
	//char username[10] = "Tester";
	lr_save_string(username, "Myname");
	//Se imprime el valor de Myname
	lr_eval_string("{Myname}"); //Salida: Tester

	/*Usando parametros*/
	
	//strcpy asigna el valor de p_Username a name. En ' c ' no hay asignación con el operador ' = '
	strcpy(name, lr_eval_string("{p_Username}"));
	lr_output_message("%s", name); //Salida: Im Tester
	
	/*sprintf sirve para dar formato a una cadena de caracteres*/
	//sprintf(destino, "formatter", variables, variables);
	sprintf(fullname, "%s*%s", "FirstName", "LastName");
	lr_output_message("%s", fullname);
	sprintf(nombreCompleto, "%s %s", "César", "Vargas");
	lr_output_message("%s", nombreCompleto);
	return 0;
}
