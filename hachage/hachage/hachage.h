//
//  hachage.h
//  hachage
//
//  Created by Ludovic Doppler on 10/07/2022.
//

#ifndef hachage_h
#define hachage_h

int hachage(char *chaine){
    int i = 0, nombreHache = 0;
    
    for (i = 0; chaine[i] != '\0'; i++) {
        nombreHache += chaine[i];
    }
    nombreHache %= 100;
    
    
    return nombreHache;
}

#endif /* hachage_h */
