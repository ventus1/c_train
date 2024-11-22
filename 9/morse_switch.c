#include <stdio.h>
#include <string.h>

void translateToMorse(const char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        switch (str[i]) {
            case ' ' : printf("|:_..._:|"); break;
            case 'A' : case 'a' : printf(".-|"); break;
            case 'B' : case 'b' : printf("-...|"); break;
            case 'W' : case 'w' : printf(".--|"); break;
            case 'G' : case 'g' : printf("--.|"); break;
            case 'D' : case 'd' : printf("-..|"); break;
            case 'E' : case 'e' : printf(".|"); break;
            case 'V' : case 'v' : printf("...-|"); break;
            case 'Z' : case 'z' : printf("--..|"); break;
            case 'I' : case 'i' : printf("..|"); break;
            case 'J' : case 'j' : printf(".---|"); break;
            case 'K' : case 'k' : printf("-.-|"); break;
            case 'L' : case 'l' : printf(".-..|"); break;
            case 'M' : case 'm' : printf("--|"); break;
            case 'N' : case 'n' : printf("-.|"); break;
            case 'O' : case 'o' : printf("---|"); break;
            case 'P' : case 'p' : printf(".--.|"); break;
            case 'R' : case 'r' : printf(".-.|"); break;
            case 'S' : case 's' : printf("...|"); break;
            case 'T' : case 't' : printf("-|"); break;
            case 'U' : case 'u' : printf("..-|"); break;
            case 'F' : case 'f' : printf("..-.|"); break;
            case 'H' : case 'h' : printf("....|"); break;
            case 'C' : case 'c' : printf("-.-.|"); break;
            case 'Q' : case 'q' : printf("--.-|"); break;
            case 'Y' : case 'y' : printf("-.--|"); break;
            case 'X' : case 'x' : printf("-..-|"); break;
            default: break; 
        }
    }
}

int main() {
    char input[51]; 
    fgets(input, sizeof(input), stdin);

    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }
    translateToMorse(input);

    return 0;
}
