#include "Population.h"
#include "Statistician.h"

void Population::create_population() {
    printf("To add a new member to the population,\n");
    printf("please enter their data.\n");
    printf("Their gender can be either female ('F') or male ('M').\n");
    printf("Print 'S' to stop.\n");
    while(true) {
        printf("Gender: ");
        char c;
        scanf("%c", &c);
        if (c=='S')
            return;
        size_t weight, height;
        printf("Weight: ");
        scanf("%d", &weight);
        printf("Height: ");
        scanf("%d", &height);
        switch (c) {
            case 'F':
                people.push_back(new Female(weight, height));
                break;
            case 'M':
                people.push_back(new Male(weight, height));
            default:
                printf("Error! Incorrect input. Please remember that you should enter either 'F' or 'M' as a gender.\n");
                break;
        }
    }
}

void Population::get_statictics() {
    Statistician * s = new Statistician();
    Visitor * v = s;
    for (size_t i=0; i<people.size(); ++i)
        people[i]->accept(v);
    size_t f = s->female_weight_average(), m = s->male_weight_average();
    printf("Average weight of a female: %d\n", f);
    printf("Average weight of a male: %d\n", m);
}
