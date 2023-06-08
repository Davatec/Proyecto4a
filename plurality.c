#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Número máximo de candidatos
#define MAX 9

// Los candidatos tienen nombre y número de votos
typedef struct
{
    string nombre;
    int votos;
}
candidato;

// Array de candidatos
candidato candidatos[MAX];

// Número of candidatos
int num_candidatos;

// Prototipos de funciones
bool voto(string nombre);
void imprimir_ganador(void);

int main(int argc, string argv[])
{
    // Comprueba la validez de los argumentos
    if (argc < 2)
    {
        printf("Usar: pluralidad [candidato ...]\n");
        return 1;
    }

    // Llena el array de candidatos con los nombres e inicializa sus votos en 0
    num_candidatos = argc - 1; 
    if (num_candidatos > MAX)
    {
        printf("La cantidad tope de candidatos es %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < num_candidatos; i++)
    {
        candidatos[i].nombre = argv[i + 1]; 
        candidatos[i].votos = 0;
    }

    int cant_electores = get_int("Cantidad de electores: "); 

    // Pide a los electores que voten por un candidato
    for (int i = 0; i < cant_electores; i++)
    {
        string nombre = get_string("Voto: ");

        // Comprueba el voto no válido
        if (!voto(nombre))
        {
            printf("Voto nulo.\n");
        }
    }

    // Muestra los ganadores de la elección
    imprimir_ganador();
}

// Actualiza el número total de votos dado un nombre de candidato
bool voto(string nombre)
{
    // Por hacer
}

// Imprime los nombres de los candidatos que obtuvieron el número más alto de votos
void imprimir_ganador(void)
{
    // Por hacer
}