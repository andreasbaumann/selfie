// printing bounds on 32-/64-bit integers in C*

// libcstar procedures for printing
void init_library();
void print(uint_t* s);
void print_unsigned_integer(uint_t n);
void print_integer(uint_t n);
void print_hexadecimal(uint_t n, uint_t a);
void print_octal(uint_t n, uint_t a);
void print_binary(uint_t n, uint_t a);
void println();

uint_t UINT_MAX;

uint_t INT_MAX;
uint_t INT_MIN;

uint_t main() {
  // initialize selfie's libcstar library
  init_library();

  // print UINT_MAX in decimal
  print("UINT_MAX in decimal:     ");
  print_unsigned_integer(UINT_MAX);
  println();

  // print UINT_MAX in decimal
  print("UINT_MAX in decimal:     ");
  print_integer(UINT_MAX);
  print(" (as signed integer)\n");

  // print UINT_MAX in hexadecimal
  print("UINT_MAX in hexadecimal: ");
  print_hexadecimal(UINT_MAX, 0);
  println();

  // print UINT_MAX in octal
  print("UINT_MAX in octal:       ");
  print_octal(UINT_MAX, 0);
  println();

  // print UINT_MAX in binary
  print("UINT_MAX in binary:      ");
  print_binary(UINT_MAX, CPUBITWIDTH);
  println();

  // print 0 in decimal
  print("0 in decimal:              ");
  print_unsigned_integer(0);
  println();

  // print 0 in hexadecimal
  print("0 in hexadecimal:          ");
  print_hexadecimal(0, 0);
  println();

  // print 0 in octal
  print("0 in octal:                ");
  print_octal(0, 0);
  println();

  // print 0 in binary
  print("0 in binary:               ");
  print_binary(0, CPUBITWIDTH);
  println();

  // print INT_MAX in decimal
  print("INT_MAX in decimal:      ");
  print_integer(INT_MAX);
  println();

  // print INT_MAX in hexadecimal
  print("INT_MAX in hexadecimal:  ");
  print_hexadecimal(INT_MAX, 0);
  println();

  // print INT_MAX in octal
  print("INT_MAX in octal:        ");
  print_octal(INT_MAX, 0);
  println();

  // print INT_MAX in binary
  print("INT_MAX in binary:       ");
  print_binary(INT_MAX, CPUBITWIDTH);
  println();

  // print INT_MIN in decimal
  print("INT_MIN in decimal:      ");
  print_integer(INT_MIN);
  println();

  // print INT_MIN in decimal
  print("INT_MIN in decimal:      ");
  print_unsigned_integer(INT_MIN);
  print(" (as unsigned integer)\n");

  // print INT_MIN in hexadecimal
  print("INT_MIN in hexadecimal:  ");
  print_hexadecimal(INT_MIN, 0);
  println();

  // print INT_MIN in octal
  print("INT_MIN in octal:        ");
  print_octal(INT_MIN, 0);
  println();

  // print INT_MIN in binary
  print("INT_MIN in binary:       ");
  print_binary(INT_MIN, CPUBITWIDTH);
  println();
}
