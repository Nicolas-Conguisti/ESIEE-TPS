#include <stdio.h>
#include <stdlib.h>


/*
EXO 1
int main(int argc, char * argv[]){
    printf("Hello, world ! \n");
    return 0;
}
*/

/*
EXO 2
int main(int argc, char * argv[]){
    printf("Tapez 2 entiers dans la console : ");
    int nb1, nb2;
    scanf("%d %d",&nb1,&nb2);
    int result = nb1 + nb2;
    printf("La somme est %d \n", result);
    return 0;
}

int main(int argc, char * argv[]){
    int result = atoi(argv[1]) + atoi(argv[2]);
    printf("La somme est %d \n", result);
    return 0;
}
*/

/*
EXO 3
int main(int argc, char * argv[]){
    int i;
    for (i = atoi(argv[1]); i > 0; i--){
        printf("%d ", i);
    }
    for (i = 0; i <= atoi(argv[1]); i++){
        printf("%d ", i);
    }
    printf("\n");
    
    return 0;
}

void calling_print_recurs(int nb1){
    if(nb1>=1){
        printf("%d ", nb1);
        calling_print_recurs(nb1-1);
        printf("%d ", nb1);
    }
}
int main(int argc, char * argv[]){
    int nb = atoi(argv[1]);
    calling_print_recurs(nb);
    printf("\n");
    return 0;
}

*/


/*
EXO 4
void print_var(int n){
    printf("Value_of_the_variable_:_%d\n", n);
}

void print_pointer(int* p){
    printf("Pointer_adress_:_%p_and_Pointed_value_:_%d\n", p, *p);
}


void set_pointer(int* p, int n){
    *p = n;
}

int main(int argc, char * argv[]){
    int a;
    int* p=&a;

    print_var(a);
    a = 53;
    print_var(a);
    print_pointer(p);
    set_pointer(p, 42);
    print_var(a);

    return 0;
}
Value_of_the_variable_:_32765 // Garbage value
Value_of_the_variable_:_53 // Valeur initialisée
Pointer_adress_:_0x7ffd7f6b3b64_and_Pointed_value_:_53 //Adresse et valeur à l'adresse du pointeur
Value_of_the_variable_:_42 // Nouvelle valeur à l'adresse du pointeur

*/

/*
EXO 5
int main (int argc, char * argv[]){

    FILE* tp = fopen("./tp1.c", "r");

    if(tp != NULL){
        char caractere_courant = fgetc(tp);
        while (caractere_courant != EOF){
            printf("%c",caractere_courant);
            caractere_courant = fgetc(tp);
        }
    }
    else{
        printf("erreur lecture du fichier");
    }
    
    fclose(tp);
    
    return 0;
}
*/