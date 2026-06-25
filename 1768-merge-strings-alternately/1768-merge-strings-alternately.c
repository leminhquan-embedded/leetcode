

char * mergeAlternately(char * word1, char * word2){
    int len = strlen(word1) + strlen(word2) + 1;
    char *word3 = malloc(len);
    char *p = word1;
    char *q = word2;
    char *dest = word3;
    while (*p != '\0' && *q != '\0'){
        *dest++ = *p++;
        *dest++ = *q++;
    }
    while (*p != '\0'){
        *dest++ = *p++;
    }
    while (*q != '\0'){
        *dest++= *q++;
    }
    *dest = '\0';
    return word3;
}