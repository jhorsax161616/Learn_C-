#include <iostream>
using namespace std;

int main()
{
    //Declarando arreglos de temp max, min y media
    float temp_min[5];
    float temp_max[5];
    float temp_med[5];

    float menor[2];
    int dia_menor[2];
    

    cout<<"===ANALIZANDO TEMPERATURA DE 5 DIAS==="<<endl;
    cout<<"\n\t==Ingreso de datos=="<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout<<"\nIngrese temperatura MINIMA del dia "<<i+1<<": ";
        cin>>temp_min[i];
        cout<<"\nIngrese temperatura MAXIMA del dia "<<i+1<<": ";
        cin>>temp_max[i];

        //Hallando temperaturas medias
        temp_med[i] = (temp_min[i] + temp_max[i])/2;

        //Dias con menor temperatura
        if (i == 0){
            menor[0] = temp_min[i];
            dia_menor[0] = i;}
        else if (i == 1){
            menor[1] = temp_min[i];
            dia_menor[1] = i;}
        else
        {
            if (temp_min[i] < menor[0]){
                menor[1] = menor[0];
                dia_menor[1]= i-1;
                menor[0] = temp_min[i];
                dia_menor[0] = i;}
        }

    }

    cout<<"\n\t=TEMPERATURAS MEDIAS="<<endl;
    for (int i=0; i<5;i++)
    {
        cout<<"Dia "<<i+1<<": "<<temp_med[i]<<endl;
    }

    cout<<"\n\t==Analisis=="<<endl;
    cout<<"\nLos dias con menor temperatura son el Dia "<<dia_menor[0] + 1<<" y "<<dia_menor[1] + 1<<endl;

    cout<<"\nLos dias con temperatura maxima similar son: \n"<<endl;
    for (int i= 0 ; i < 4; i++)
    {
        for (int x = i+1; x < 5; x++)
            {
                if (temp_max[i] - temp_max[x] > -1 && temp_max[i] - temp_max[x] < 1)
                    cout<<"Dia "<<i + 1<< " y "<<x + 1<<endl;
            }
    }
    cout<<"\n\n ";
    system("pause");
    return 0;
}