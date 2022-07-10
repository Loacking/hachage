//
//  main.c
//  hachage
//
//  Created by Ludovic Doppler on 10/07/2022.
//

#include <stdio.h>
#include "hachage.h"
int main(int argc, const char * argv[]) {

    char *prenom = "Ludovic Doppler";
    hachage(prenom);
    printf("%d \n",*prenom);
    
    
    
    return 0;
}
