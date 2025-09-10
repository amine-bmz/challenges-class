#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_LEN 264

const char *positif_words[] = ("good", "hapy", "perfect");
const char *positif_reponce[] = ("great to hear that !",
     "that nice");

const char *negative_words[] = ("bad", "sad", "not good");
const char *negative_reponce[] = ("I'm soory gor that", "stay strong");

const char *null_words[] = ("hello", "help");
const char *null_reponce[] = ("how i can help you");

void reponce_aleatoire(char *positif, char *negative);
