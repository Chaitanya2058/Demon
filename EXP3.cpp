#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define pf printf
#define sf scanf
char dc[50] = "XDGSZANYOBTMJCEVFHKWPLQURI";
char ec[50] = "abcdefghijklmnopqrstuvwxyz";
void e(char*);
void d(char*);
int main() {
    char p[50]; // Change from char *p to char p[50]
    pf("\n\nEnter plain text:");
    sf("%s", p);

    pf("\nAfter Encryption:\n-----------------\n");
    e(p);
    pf("\n%s", p);

    pf("\nAfter Decryption:\n-----------------\n");
    d(p);
    pf("\n%s", p);

    return 0;
}

void e(char *p) {
    int l = 0, m = 0;
    while (*(p + l) != '\0') {
        if (islower(*(p + l))) {
            m = *(p + l) - 'a';
            *(p + l) = dc[m];
        }
        l++;
    }
}

void d(char *p) {
    int l = 0;
    while (*(p + l) != '\0') {
        int i;
        for (i = 0; i < 26; i++) {
            if (dc[i] == *(p + l))
                break;
        }
        *(p + l) = ec[i];
        l++;
    }
}

