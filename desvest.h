#ifndef SUMATORIA_H
#define SUMATORIA_H
using namespace std;
void leer_datos(float y[80]);
float desviacion(float x[80]);
void leer_datos(float y[]){
std::ifstream read_file("pulso.dat");
assert(read_file.is_open());
for (int i=0; i<80; i++)
{
read_file >> y[i];
}
}
//desviacion
float desviacion(float x[]){
	int N=80;
	float mean=0;float sigma=0; float sum=0; float desvest=0;
	for (int i=0; i<N; i++)
	{
	sum+=x[i];
	}
	mean=sum/N;
	cout<<"mean ="<<mean<<endl;
	for (int j=0; j<N; j++)
	{
	sigma+=pow((x[j]-mean),2);
	}
	desvest=sqrt(sigma/(N-1));
	return desvest;
	}

#endif // SUMATORIA_H
