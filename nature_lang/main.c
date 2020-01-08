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
#define NUMBER 80   //読み取る文字の最大数


int main(void) {
    FILE *fp;
    int i,j;
    int mojisu = 0;
    int alphabet[27] = {0};   //各アルファベットを格納する箱
    char letter[NUMBER];//テキストファイルの代わり
    char alal[26] = {"abcdefghijklmnopqrstuvwxyz"};

    
/*文字の読み取り*/
    if ((fp = fopen("alphabet2020.txt", "r")) == 'NULL'){
        printf("\aファイルをオープンできません。\n");
    }else{
        for(i = 0; i < NUMBER; i++){
            if(fscanf(fp, "%s", letter[mojisu]) != 1){
                break;
            }
            mojisu++;
        }
    }
    fclose(fp);
    for(i = 0; i < 80; i++){
        printf("%s\n",letter[NUMBER]);
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
