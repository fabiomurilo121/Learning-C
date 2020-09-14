//
// Created by Fabio-PC on 13/09/2020.
//

#include <stdio.h>
int entrada,unid,dezspe,deze,cent;

int main(){
    char *uni[] = {"","um","dois","tres","quatro","cinco","seis","sete","oito","nove"};
    char *dezesp[] = {"","onze","doze","treze","quatorze","quinze","desesseis","dessesete","dezoito","dezenove"};
    char *dez[] = {"","dez","vinte","trinta","quarenta","cinquenta","sessenta","setenta","oitenta","noventa"};
    char *cen[] = {"","cento","duzentos","trezentos","quatrocentos","quinhentos","seissentos","setecentos","oitocentos","novecentos"};

    scanf("%d",&entrada);

    if (entrada > 1 && entrada < 999){
        if (entrada >= 11 && entrada <= 19){
            dezspe = entrada % 10;
            printf("Numero: %s\n",dezesp[dezspe]);
        } else{
            if (entrada == 100){
                printf("Cem");
            } else {
                unid = entrada % 10;
                deze = entrada % 100;
                deze = deze / 10;
                cent = (int) entrada / 100;
                if ( dez[deze] == "" && cen[cent] == ""){
                    printf("Numero: %s\n", uni[unid]);
                }else if (dez[deze] == ""){
                    printf("Numero: %s e %s\n", cen[cent], uni[unid]);
                }else if(uni[unid] == ""){
                    printf("Numero: %s e %s\n", cen[cent], dez[deze]);
                }else if(cen[cent] == ""){
                    printf("Numero: %s e %s\n", dez[deze], uni[unid]);
                }else{
                    printf("Numero: %s e %s e %s\n", cen[cent], dez[deze], uni[unid]);
                }
            }
        }
    } else{
        printf("\nvalor fornecido fora dos limites operacionais");
    }
    return 0;
}
