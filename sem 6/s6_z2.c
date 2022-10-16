#include <stdio.h>


struct Game {
    char name[100];
    float mean_rate;
};


void main(){
    FILE *myfile;
    int k;

    myfile = fopen("videogames.txt", "r");
    fscanf(myfile, "%d", &k);
    struct Game games[k];

    int rates_counter;
    for (int i = 0; i < k; i++){
        fscanf(myfile, "%[^:]", games[i].name);
        fscanf(myfile, ":%i", &rates_counter);

        int rate;
        float rate_sum = 0;
        for (int j = 0; j < rates_counter; j++){
            fscanf(myfile, "%i", &rate);
            rate_sum += rate;
        }
        games[i].mean_rate = rate_sum / rates_counter;
    }
    fclose(myfile);


    for (int i = 0 ; i < k; i++){
        for (int j = 0 ; j < k - i - 1 ; j++) {  
            if (games[j].mean_rate < games[j+1].mean_rate) {           
                struct Game tmp = games[j];
                games[j] = games[j+1];
                games[j+1] = tmp;
            }
        }
    }


    for (int i = 0; i < k; i++){
        printf("%s, %0.3f", games[i].name, games[i].mean_rate);
    }
}