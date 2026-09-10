#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
  // Make sure the user provided an N parameter on the command line
  if (argc != 2) {
    fprintf(stderr, "Usage: %s N (N must be >= 1)\n", argv[0]);
    exit(1);
  }

  // Convert the N parameter to an integer
  int N = atoi(argv[1]);

  // Make sure N is >= 1
  if (N < 1) {
    fprintf(stderr, "Invalid N value %d\n", N);
    exit(1);
  }

  // TODO: read from standard input and print out ngrams until you reach the end of the input
  
  int c;
  int stringIndex = 0;
  int currentWindow[N];

  while ((c = fgetc(stdin)) != EOF) {
    int currIndex = stringIndex % N;
    currentWindow[currIndex] = c;

   // If we filled the first window, print it
    if (stringIndex >= N - 1) {

      //loop our currentWindow array and print the window
      for (int i = 0; i < N; i++) {

        // Subtract N from how many chars we've seen so far and add 1 
        // --> finds start of our window
        int idx = (stringIndex - N + 1 + i) % N;
        printf("%c", currentWindow[idx]);
      }
      printf("\n");
    }
    
    stringIndex++;
  }

  return 0;
}
