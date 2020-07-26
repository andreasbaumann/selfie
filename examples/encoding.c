// printing the decimal number 85 in C*

// libcstar procedures for printing
void init_library();
void print(uint_t* s);
void print_character(uint_t c);
void print_string(uint_t* s);
void print_integer(uint_t n);
void print_hexadecimal(uint_t n, uint_t a);
void print_octal(uint_t n, uint_t a);
void print_binary(uint_t n, uint_t a);
void println();

uint_t main() {
  // initialize selfie's libcstar library
  init_library();

  // print the integer literal 85 in decimal
  print("85 in decimal:     ");
  print_integer(85);
  println();

  // print the ASCII character 85 (which is U)
  print("85 in ASCII:       ");
  print_character(85);
  println();

  // print the integer literal 85 in hexadecimal
  print("85 in hexadecimal: ");
  print_hexadecimal(85, 0);
  println();

  // print the integer literal 85 in octal
  print("85 in octal:       ");
  print_octal(85, 0);
  println();

  // print the integer literal 85 in binary
  print("85 in binary:      ");
  print_binary(85, 0);
  println();
}
