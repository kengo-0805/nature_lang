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
#define NUMBER 8   //読み取る文字の最大数
int main(void) {
    
    //テキストファイルの読み込みなしで作成ver
    int i,j;
    int alphabet[27];   //各アルファベットを格納する箱
    char letter[NUMBER] = {"ababbaa"};   //テキストファイルの代わり

/*文字の読み取り*/
    printf("アルファベットを入力してください：");
//    scanf("%s", &letter[NUMBER]);
    //printf("入力した文字は%c\n", letter);
    printf("6番目のアルファベットは%c\n", letter[5]);
    
/*アルファベットカウントの場合わけ*/
    for(i = 0; i < alphabet[i]; i++){
        if(letter[i] = 'a'){
            alphabet[0]++;
        }else if(letter[i] = 'b'){
            alphabet[1]++;
        }
    }
    
    /*各アルファベット個数の表示*/
    for(i = 0; i < alphabet[i]; i++){
        printf("%c:",letter[i]);  //アルファベット表示
        for(j = 0; j < alphabet[i]; j++){
            putchar('*');
            putchar('\n');
        }
    }
   
    return 0;
}
