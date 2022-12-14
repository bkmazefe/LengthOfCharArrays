#include <stdio.h>
//space: 32
int calculateLength(char arr[]){
    int size = 0;
    for (int i=0; i > -1; i++){
        //printf("%c\n", arr[i]);
        if (arr[i] <= 0) {
            size = i+1;
            break;
        }
    }

    return size; //with spaces counted
}

int shortest_word_length (char arr[]) {
    int current_shortest = 1000;
    int current_length = 0;

    for (int i = 0; i < calculateLength(arr); i++){
        //printf("%d\n", arr[i]);
        if (arr[i] == 0) {
            if (current_length != 0 && current_length < current_shortest) {
                current_shortest = current_length;
            }
            break;
        }

        if (arr[i] != 32){
            current_length += 1;
        } else{
            if (current_length != 0 && current_length < current_shortest){
                current_shortest = current_length;
            }
            current_length = 0;
        }
    }

    return current_shortest;
}

int main() {
    char arr[] = "This place is cool";
    //calculateLength(arr);
    int shortest_length = shortest_word_length(arr);
    printf("%d", shortest_length);
}
