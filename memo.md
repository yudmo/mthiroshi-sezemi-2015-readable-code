�}�N���͓ǂ݂₷�����O������

    #define SIZEREAD 256 /* 1�x�ɓǂݍ��ރT�C�Y */
    
    #define SIZELIEN 100 /* �ǂݍ��ލs���̃T�C�Y */

##�ߌ�
���ۂ̃R�[�h
char read_data[N] = {'\0'}; /* �ǂݍ��񂾃f�[�^���i�[�p */
char **data_list; /* �ǂݍ��񂾃f�[�^���i�[����z�� */

���R
�R�����g������������Ă��ă��[�_�u��

�قƂ�ǂ��ׂĂɏ������킩��悤�ɃR�����g������Ă����D

���ۂ̃R�[�h
if ((fp = fopen(argv[1], "r")) == NULL) { /* �t�@�C���I�[�v���̃G���[�`�F�b�N*/
  printf("FILE OPEN ERROR\n");
  exit(EXIT_FAILURE);
}

���R
exit�O�Ƀ��b�Z�[�W��\�����Ă���̂Ń��[�_�u��
