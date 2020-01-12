//
//  main.c
//  nature_lang
//
//  Created by 堀井健吾 on 2019/12/29.
//  Copyright © 2019 kengohorii. All rights reserved.
//

/*
 文字を一文字ずつ読み取る
 その文字の場合わけ
 テキストファイルの読み込み
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define NUMBER 256   //読み取る文字の最大数


int main(void) {
    FILE *fp;
    int i,j;
    int c[10]={0};
    int n = 0;
    int mojisu = 1000;
    int alphabet[27] = {0};   //各アルファベットを格納する箱
    char letter[6] = {'a','a','a','a','a','a'}; //= "/Users/horiikengo/Documents/C言語/nature_lang/nature_lang/alphabet2020.txt";
    char alal[26] = {"abcdefghijklmnopqrstuvwxyz"};

//fscanfで文字を読み取っって一文字ずつletter[]に格納できれば完成
/*文字の読み取り*/
    fp = fopen("/Users/horiikengo/Documents/C言語/nature_lang/nature_lang/alphabet2020.txt","r");
    if (fp == NULL){
        printf("\aファイルをオープンできません。\n");
        return 0;
    }else{
        while(! feof(fp) && n < 512){
//            fscanf(fp, "%c", &(letter[6]));
            c[n] = fgetc(fp);
            n++;
            }
        }
    fclose(fp);
    for(i = 0; i < n; i++){
        printf("%c\n",c[i]);
    }
    
//    printf("アルファベットを入力してください：");
//    scanf("%s", &letter[NUMBER]);
    //printf("入力した文字は%c\n", letter);
    
    
    
    /*
    
    
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
        }else {
            alphabet[26]++;
        }
    }
  
    
//各アルファベット個数の表示
    for(i = 0; i < 26; i++){
//      printf("実行数%d回目\n",i + 1);
        printf("%c:",alal[i]);//アルファベットを順番に表示する
        for(j = 0; j < alphabet[i]; j++){
            putchar('*');
        }
        putchar('\n');
    }
   
    
    
    */
    
    return 0;
}

//alphabet[25]の処理　ノーマルの表示をif(alphabet[25]じゃないとき)printfにしておく
