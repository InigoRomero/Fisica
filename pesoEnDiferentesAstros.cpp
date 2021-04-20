#include <iostream>
#include <string.h>

// Peso Vs Masa
#define MS_MERCURIO 3.7
#define MS_VENUS 8.87
#define MS_LUNA 1.62
#define MS_MARTE 3.7
#define MS_JUPITER 24.79
#define MS_SATURNO 10.44
#define MS_URANO 8.87
#define MS_NEPTUNO 11.15
#define MS_PLUTON 0.62
#define MS_EUROPA 1.315
#define MS_PHOBOS 0.0057
#define MS_SOL 274
#define N_ASTROS 12

const std::string astrosName[] = {"MERCURIO", "VENUS", "LA LUNA", "MARTE", "JUPITER", "SATURNO", "URANO", "NEPTUNO", "PLUTON", "EUROPA", "PHOBOS", "SOL"};
const float astrosMS[] = {MS_MERCURIO, MS_VENUS, MS_LUNA, MS_MARTE, MS_JUPITER, MS_SATURNO, MS_URANO, MS_NEPTUNO, MS_PLUTON, MS_EUROPA, MS_PHOBOS, MS_SOL};

void calculate_weight(double weight)
{
    int i = 0;

    while (i < N_ASTROS)
    {
        std::cout << "Peso en " << astrosName[i] << " ["<< (astrosMS[i] * weight) / 9.81 << "]\n"; // 9.8 es Peso Vs Masa de la tierra
        i++;
    }
}

int main() 
{
    float weight;
    int i;

    std::cout << "¿Cual es tu peso en la tierra?\n";
    std::cin >> weight;
    calculate_weight(weight);
}