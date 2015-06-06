#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZEREAD 256 /* 1度に読み込むサイズ */
#define SIZELIEN 100 /* 読み込む行数のサイズ */

int main(int argc, char* argv[]){
    FILE *fp;
    char read_data[N] = {'\0'}; /* 読み込んだデータを格納用 */

    char **data_list; /* 読み込んだデータを格納する配列 */

    if (argc < 2) { /* 引数エラーチェック */
        printf("Usage Error");
        exit(EXIT_FAILURE);
    }

    if ((fp = fopen(argv[1], "r")) == NULL) { /* ファイルオープンのエラーチェック*/
        printf("FILE OPEN ERROR\n");
        exit(EXIT_FAILURE);
    }

    data_list = malloc(sizeof(char) * SIZELINE);
    /* ファイルの終わりまでループ */
    for(i = 0;i < SIZELINE || fgets(read_data, SIZEREAD, fp) != NULL; i++) { /* 1行ずつ読み込み */

        /* 開発途中のためコメントアウト */
        // data_list = malloc(sizeof(char) * strlen(read_data)):

        printf("%s", read_data);/* 読み込んだデータを表示 */
    }

    fclose(fp); /* ファイルのクローズ */

    return EXIT_SUCCESS;
}
