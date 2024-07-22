int x = 0; // global variable (the first variable)

int main( ) { // the body of the main function
  printf( "1) x = %d\n", x ); // 0
  char x = '1'; // the second variable
  {  // code block
     float x = -1.0; // the third variable
     printf( "2) x = %f\n", x ); // -1.0
  }
  printf( "3) x = %c\n", x ); // '1'
  return 0;
}