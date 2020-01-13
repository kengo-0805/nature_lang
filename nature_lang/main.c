//
//  main.c
//  nature_lang
//
//  Created by 堀井健吾 on 2019/12/29.
//  Copyright © 2019 kengohorii. All rights reserved.
//
//英字小文字のみをカウントする。
//大文字、スペース、ピリオド等はカウントされない
//


/*
 文字を一文字ずつ読み取る
 その文字の場合わけ
 テキストファイルの読み込み
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define NUMBER 16384   //読み取る文字の最大数
#define MOJI 29


int main(void) {
    FILE *sfp;
    FILE *dfp;
    int i,j;
    int n = 0;
    int alphabet[MOJI] = {0};   //各アルファベットを格納する箱
    int letter[NUMBER] = {0};
    char alal[28] = {"abcdefghijklmnopqrstuvwxyz!?"};

/*文字の読み取り*/
    sfp = fopen("/Users/horiikengo/Documents/C言語/nature_lang/nature_lang/alphabet2020.txt","r");
    if (sfp == NULL){
        printf("\aファイルをオープンできません。\n");
        return 0;
    }else{
        while(! feof(sfp) && n < NUMBER){
            letter[n] = fgetc(sfp);
            n++;
            }
        }
    fclose(sfp);

    
//     読み取ったテキストの表示
    for(i = 0; i < n; i++){
        printf("%c",letter[i]);
    }
    
    
    
    
    
//アルファベットカウントの場合わけ
    for(i = 0; i < letter[i]; i++){
        if(letter[i] == 'a'){
            alphabet[0]++;
        }else if(letter[i] == 'b'){
            alphabet[1]++;
        }else if(letter[i] == 'c'){
            alphabet[2]++;
        }else if(letter[i] == 'd'){
            alphabet[3]++;
        }else if(letter[i] == 'e'){
            alphabet[4]++;
        }else if(letter[i] == 'f'){
            alphabet[5]++;
        }else if(letter[i] == 'g'){
            alphabet[6]++;
        }else if(letter[i] == 'h'){
            alphabet[7]++;
        }else if(letter[i] == 'i'){
            alphabet[8]++;
        }else if(letter[i] == 'j'){
            alphabet[9]++;
        }else if(letter[i] == 'k'){
            alphabet[10]++;
        }else if(letter[i] == 'l'){
            alphabet[11]++;
        }else if(letter[i] == 'm'){
            alphabet[12]++;
        }else if(letter[i] == 'n'){
            alphabet[13]++;
        }else if(letter[i] == 'o'){
            alphabet[14]++;
        }else if(letter[i] == 'p'){
            alphabet[15]++;
        }else if(letter[i] == 'q'){
            alphabet[16]++;
        }else if(letter[i] == 'r'){
            alphabet[17]++;
        }else if(letter[i] == 's'){
            alphabet[18]++;
        }else if(letter[i] == 't'){
            alphabet[19]++;
        }else if(letter[i] == 'u'){
            alphabet[20]++;
        }else if(letter[i] == 'v'){
            alphabet[21]++;
        }else if(letter[i] == 'w'){
            alphabet[22]++;
        }else if(letter[i] == 'x'){
            alphabet[23]++;
        }else if(letter[i] == 'y'){
            alphabet[24]++;
        }else if(letter[i] == 'z'){
            alphabet[25]++;
        }else if(alphabet[i] == ' '){
            alphabet[26]++;
//            !で表示
        }else if(alphabet[i] == '\n'){
            alphabet[27]++;
//            ?で表示
        }else{
            alphabet[28]++;
        }
    }
  
    
//各アルファベット個数の表示
    for(i = 0; i < MOJI; i++){
//      printf("実行数%d回目\n",i + 1);
        printf("%c:",alal[i]);//アルファベットを順番に表示する
        for(j = 0; j < alphabet[i]; j++){
            putchar('*');
        }
        putchar('\n');
    }
  /*その他の記号の処理
    printf("その他:");
    for(i=0; i < alphabet[26];i++){
        putchar('*');
    }
    putchar('\n');
    printf("%d",alphabet[26]);
    */
    printf("その他に入れた数:%d\n",alphabet[28]);
    return 0;
}

//alphabet[25]の処理　ノーマルの表示をif(alphabet[25]じゃないとき)printfにしておく
