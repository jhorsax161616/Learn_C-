#include <iostream>
using namespace std;

int cant = 0, muje_apro = 0, hom_cas_des = 0, muj_sol_apro = 0;

double sum_nots = 0, prom;

char gen, estad;
float nota;

double inputd()
{
	double dato;
	cin>>dato;
	return dato;	
}

char inputc()
{
	char dato;
	cin>>dato;
	return dato;	
}

void ReporteFinalEstudiante()
{
	cout<<"\nCantidad de mujeres aprobadas: "<<muje_apro<<endl;
	cout<<"Catidad de hombres casados desaprobados: "<<hom_cas_des<<endl;
	cout<<"Cantidad de mujeres solteras aprobadas: "<<muj_sol_apro<<endl;
	cout<<"Sumatoria de todas las notas ingresadas: "<<sum_nots<<endl;
	cout<<"Promedio de notas: "<<prom<<endl;
}

void contadores()
{
	cant++;
	if (gen == 'F' or gen == 'f')
	{
		if (nota >= 11)
		{
			muje_apro++;
			if (estad == 'S' or estad == 's')
				muj_sol_apro++;
		}
	}			
	
	if(gen == 'M' or gen == 'm')
		if (estad == 'C' or estad == 'c')
			if (nota < 11)
				hom_cas_des++;
	
}

void ing_gene()
{
	do{
			cout<<"Ingresa tu género (M m ó F f): "<<endl;
			gen = inputc();
			if(gen != 'M' && gen != 'm' && gen != 'F' && gen != 'f')
				cout<<"\nERROR. Vuelva a ingresar (M m ó F f)\n";
		}while(gen != 'M' && gen != 'm' && gen != 'F' && gen != 'f');
}

void ing_estad()
{
	do{
			cout<<"Ingresa tu estado Civil (S s ó C c):"<<endl;
			estad = inputc();
			if(estad != 'S' && estad != 's' && estad != 'C' && estad != 'c')
				cout<<"\nERROR. Vuelva a ingresar (S s ó C c)\n";
		}while(estad != 'S' && estad != 's' && estad != 'C' && estad != 'c');
}

void ing_nota()
{
	do{
			cout<<"Ingrese su nota: "<<endl;
			nota = inputd();
			
			if (nota <= 0 or nota >20)
			{
				cout<<"\nERROR. Vuelva a ingresar la nota..."<<endl;
			}	
		}while(nota <= 0 or nota >20);
}

int main()
{
	char rpta;
	
	do{
		ing_gene();
		ing_estad();
		ing_nota();
		sum_nots += nota;
		contadores();
		
		do{
			cout<<"\nDesea ingresar otro dato? (Ss - Nn):\t";
			rpta = inputc();
			if(rpta != 'S' && rpta != 's' && rpta != 'N' && rpta != 'n')
				cout<<"\nERROR. Vuelva a ingresar S o s o N o n.\n";
		}while(rpta != 'S' && rpta != 's' && rpta != 'N' && rpta != 'n' );
	
	//system("pause");
	system("cls");		
	}while(rpta == 'S' || rpta == 's');
	prom = sum_nots / cant;
	ReporteFinalEstudiante();
}
