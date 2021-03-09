#include <cassert>
#include <iostream>
#include <fstream>
#include <math.h>
#include "desvest.h"
using namespace std;
//Función principal MAIN
int main(int argc, char* argv[])
{
	int N=80;
float y[N];
float desvest=0;
leer_datos(y);
desvest=desviacion(y);

cout<<"sigma= +-"<<desvest<<endl;

}//Fin de MAIN
