マクロは読みやすい名前をつけた

    #define SIZEREAD 256 /* 1度に読み込むサイズ */
    
    #define SIZELIEN 100 /* 読み込む行数のサイズ */

##午後
実際のコード
char read_data[N] = {'\0'}; /* 読み込んだデータを格納用 */
char **data_list; /* 読み込んだデータを格納する配列 */

理由
コメントが多く書かれていてリーダブル

ほとんどすべてに処理がわかるようにコメントがされていた．

実際のコード
if ((fp = fopen(argv[1], "r")) == NULL) { /* ファイルオープンのエラーチェック*/
  printf("FILE OPEN ERROR\n");
  exit(EXIT_FAILURE);
}

理由
exit前にメッセージを表示しているのでリーダブル
