// El gobierno de la Ciudad de Buenos Aires realiza una encuesta en casas de
// familia. De cada familia conoce: 
// -Domicilio
// -Tipo de vivienda (‘C’:casa, ‘D’:departamento)
// -Cantidad de integrantes.
//
// De cada integrante de la familia se conoce: 
//-Nombre y Apellido
//-Edad
//-Sexo (‘F’, ‘M’)
//-Nivel de estudios alcanzados (‘N’: no posee, ‘P’: primario, ‘S’: secundario, ‘T’: terciario, ‘U’: universitario)
//-Un indicador (‘I’: incompleto, ‘C’: completo) que se refiere al ítem anterior.
//
// Los datos finalizan cuando la cantidad de integrantes sea igual a cero.
//
// Se pide emitir un listado con los resultados:
//A) La cantidad de encuestados que hayan completado los estudios primarios
//B) El porcentaje de analfabetismo en la ciudad (se considera analfabetos a los mayores de 10 años que no posean estudios)
//C) El domicilio de la familia con mayor cantidad de integrantes que viven en departamento
//D) Edad promedio de cada familia y de la ciudad
//E) Cantidad de encuestados en cada tipo de nivel de estudios alcanzados incompletos.
//F) Porcentaje de encuestados de sexo femenino y masculino.

//  n p s t u
//c 0 1 1 1 1
//i 0 0 1 1 1


#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

int main(){
    int cantIntegrantes=0, cantDomicilios=0, edadIntegrante=0, cantHabitantesPrimario=0, mayorCantIntegrantesDepto=0, cantPrimariosIncompletos=0, cantSecundariosIncompletos=0, cantTerciariosIncompletos=0, cantUniversitariosIncompletos=0;
    char tipoVivienda, sexoIntegrante, estudiosIntegrante, estadoEstudiosIntegrante;
    string dirDomicilio, nombreIntegrante, dirDeptoMasIntegrantes, edadesPromedioFamilias;
    float porcentajeAnalfabetos=0, edadPromedioCiudad=0, edadPromedioFamilia=0, cantHabitantes=0, totalEdadesCiudad=0, totalEdadesFamilia=0, cantHabitantesMasculinos=0, cantHabitantesFemeninos=0, cantAnalfabetos=0;

    do{
        cout << "Ingrese la cantidad de integrantes del domicilio " << cantDomicilios+1 << " (o un 0 para dejar de ingresar domicilios): ";
        cin >> cantIntegrantes;

        if (cantIntegrantes != 0){
            cantDomicilios++;
            totalEdadesFamilia=0;

            cout << "Ingrese la direccion del domicilio " << cantDomicilios << ": ";
            cin.ignore();
            getline(cin, dirDomicilio);

            cout << "Ingrese el tipo de vivienda del domicilio " << cantDomicilios << " ('C':casa, 'D':departamento): ";
            cin >> tipoVivienda;
            tipoVivienda = toupper(tipoVivienda);

            for (int integrante=1; integrante<=cantIntegrantes; integrante++){
                cantHabitantes++;

                cout << "Ingrese el nombre y apellido del integrante " << integrante << ": ";
                cin.ignore();
                getline(cin, nombreIntegrante);

                cout << "Ingrese la edad del integrante " << integrante << ": ";
                cin >> edadIntegrante;

                cout << "Ingrese el sexo del integrante " << integrante << " ('M': masculino, 'F': femenino): ";
                cin >> sexoIntegrante;
                sexoIntegrante = toupper(sexoIntegrante);

                cout << "Ingrese el nivel de los estudios del integrante " << integrante << " (‘N’: no posee, ‘P’: primario, ‘S’: secundario, ‘T’: terciario, ‘U’: universitario): ";
                cin >> estudiosIntegrante;
                estudiosIntegrante = toupper(estudiosIntegrante);

                if (estudiosIntegrante!='N'){
                    cout << "Ingrese el estado de los estudios del integrante " << integrante << " ('I': incompleto, 'C': completo): ";
                    cin >> estadoEstudiosIntegrante;
                }else{
                    estadoEstudiosIntegrante = 'N';
                }

                //A) cantidad de habitantes con estudios primarios aprobados
                if ((estudiosIntegrante != 'N' && estudiosIntegrante != 'P') || (estudiosIntegrante == 'P' && estadoEstudiosIntegrante == 'C')){
                    cantHabitantesPrimario++;
                }
                
                //B) Porcentaje de analfabetismo en la ciudad (se considera analfabetos a los mayores de 10 años que no posean estudios)
                if (edadIntegrante > 10 && estudiosIntegrante == 'N'){
                    cantAnalfabetos++;
                }

                //D) Edad promedio de cada familia y de la ciudad
                totalEdadesFamilia+=edadIntegrante;
                totalEdadesCiudad+=edadIntegrante;

                //E) Cantidad de habitantes en cada tipo de nivel de estudios alcanzados incompletos.
                switch (estudiosIntegrante){
                    case 'P':
                        if (estadoEstudiosIntegrante == 'I')
                            cantPrimariosIncompletos++;
                        break;
                    case 'S':
                        if (estadoEstudiosIntegrante == 'I')
                            cantSecundariosIncompletos++;
                        break;
                    case 'T':
                        if (estadoEstudiosIntegrante == 'I')
                            cantTerciariosIncompletos++;
                        break;
                    case 'U':
                        if (estadoEstudiosIntegrante == 'I')
                            cantUniversitariosIncompletos++;
                        break;
                    default:
                        break;
                }

                //F) Porcentaje de encuestados de sexo femenino y masculino.
                if (sexoIntegrante=='M'){
                    cantHabitantesMasculinos++;
                }else{
                    cantHabitantesFemeninos++;
                }
                
            }

            //C) El domicilio de la familia con mayor cantidad de integrantes que viven en departamento
            if (cantIntegrantes > mayorCantIntegrantesDepto && tipoVivienda == 'D'){
                mayorCantIntegrantesDepto = cantIntegrantes;
                dirDeptoMasIntegrantes = dirDomicilio;
            }

            //D) Edad promedio de cada familia y de la ciudad
            edadPromedioFamilia = totalEdadesFamilia/cantIntegrantes;
            edadesPromedioFamilias += "Domicilio " + to_string(cantDomicilios) + " (Direccion " + dirDomicilio + "): " + to_string(edadPromedioFamilia) + "\n";
        }

    } while (cantIntegrantes != 0);

    edadPromedioCiudad = totalEdadesCiudad/cantHabitantes;
    porcentajeAnalfabetos = cantAnalfabetos*(float)100/cantHabitantes;


    //A) cantidad de habitantes con estudios primarios aprobados
    cout << "\nHay " << cantHabitantesPrimario << " habitantes que han aprobado sus estudios primarios\n" << endl;

    //B) El porcentaje de analfabetismo en la ciudad (se considera analfabetos a los mayores de 10 años que no posean estudios)
    cout << fixed << setprecision(6) << "Un " << porcentajeAnalfabetos << "% de los ciudadanos son analfabetos\n" << endl;

    //C) El domicilio de la familia con mayor cantidad de integrantes que viven en departamento
    cout << "La direccion del domicilio con mas integrantes es: " << dirDeptoMasIntegrantes << "\n" << endl;

    //D) Edad promedio de cada familia y de la ciudad
    cout << "Las edades promedio de cada familia son: " << endl;
    cout << edadesPromedioFamilias;
    cout << fixed << setprecision(6) << "Y la edad promedio de la ciudad es " << edadPromedioCiudad << "\n" << endl;

    //E) Cantidad de encuestados en cada tipo de nivel de estudios alcanzados incompletos.
    cout << "Las cantidades de habitantes con cada tipo de estudio incompleto son:" << endl;
    cout << "Estudios primarios: " << cantPrimariosIncompletos << endl;
    cout << "Estudios secundarios: " << cantSecundariosIncompletos << endl;
    cout << "Estudios terciarios: " << cantTerciariosIncompletos << endl;
    cout << "Estudios universitarios: " << cantUniversitariosIncompletos << "\n" << endl;

    //F) Porcentaje de encuestados de sexo femenino y masculino.
    cout << fixed << setprecision(6) << "De todos los habitantes, un " << cantHabitantesMasculinos*(float)100/cantHabitantes << "% son de sexo masculino y un " << cantHabitantesFemeninos*(float)100/cantHabitantes << "% son de sexo femenino" << endl;

    cout << cantAnalfabetos;

    system("pause");
    return 0;
}