#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZEREAD 256 /* 1度に読み込むサイズ */
#define SIZELINE 100 /* 読み込む行数のサイズ */

int main(int argc, char* argv[]){
  FILE *fp;
  char read_data[SIZEREAD] = {'\0'}; /* 読み込んだデータを格納用 */
  int i,j;/*ループ変数*/
  int recipe_id; /*ユーザが入力するレシピID*/
  int file_lines;/*ファイル内の登録されている数をチェック*/

  char data_list[256][256]; /* 読み込んだデータを格納する配列 */
  for(i=0 ; i < 256 ; i++){/*初期化*/
    for(j=0 ; i < 256 ; i++){
      data_list[i][j] = NULL;
    }
  }

  if (argc < 2) { /* 引数エラーチェック */
    printf("Usage Error");
    exit(EXIT_FAILURE);
  }

  if ((fp = fopen(argv[1], "r")) == NULL) { /* ファイルオープンのエラーチェック*/
    printf("FILE OPEN ERROR\n");
    exit(EXIT_FAILURE);
  }

  /* ファイルの終わりまでループ */
  for(i = 0;i < SIZELINE && fgets(read_data, SIZEREAD, fp) != NULL; i++) { /* 1行ずつ読み込み */

    for(j = 0; j < strlen(read_data); j++){
      data_list[i][j] = read_data[j];
    }

    /*登録数をチェック*/
    file_lines = i + 1;
  }

  fclose(fp); /* ファイルのクローズ */

  printf("Please type the ID to show the recipe\n");
  scanf("%d", &recipe_id);

  if(file_lines >= recipe_id){
    printf("%d:%s",recipe_id, data_list[recipe_id -1]);/* 読み込んだデータを表示 */
  }else{
    printf("THIS ID DOES NOT EXISTS.\n");
    exit(EXIT_FAILURE);
  }

  return EXIT_SUCCESS;
}
