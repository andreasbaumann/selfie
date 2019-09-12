// This C* code outputs its own source code: quine.c in C*
void init_library();
void print(uint_t* s);
void print_integer(uint_t i);
void print_string(uint_t* s);
void println();
uint_t main() {
  uint_t* source;
  uint_t i;
  init_library();
  source = malloc(41*8);
  *(source + 0) = (uint_t) "// This C* code outputs its own source code: quine.c in C*";
  *(source + 1) = (uint_t) "void init_library();";
  *(source + 2) = (uint_t) "void print(uint_t* s);";
  *(source + 3) = (uint_t) "void print_integer(uint_t i);";
  *(source + 4) = (uint_t) "void print_string(uint_t* s);";
  *(source + 5) = (uint_t) "void println();";
  *(source + 6) = (uint_t) "uint_t main() {";
  *(source + 7) = (uint_t) "  uint_t* source;";
  *(source + 8) = (uint_t) "  uint_t i;";
  *(source + 9) = (uint_t) "  init_library();";
  *(source + 10) = (uint_t) "  source = malloc(41*8);";
  *(source + 11) = (uint_t) "  // printing source code before stored code";
  *(source + 12) = (uint_t) "  i = 0;";
  *(source + 13) = (uint_t) "  while (i < 11) {";
  *(source + 14) = (uint_t) "    print(*(source + i));";
  *(source + 15) = (uint_t) "    println();";
  *(source + 16) = (uint_t) "    i = i + 1;";
  *(source + 17) = (uint_t) "  }";
  *(source + 18) = (uint_t) "  // printing stored source code";
  *(source + 19) = (uint_t) "  i = 0;";
  *(source + 20) = (uint_t) "  while (i < 41) {";
  *(source + 21) = (uint_t) "    print(*(source + 38));";
  *(source + 22) = (uint_t) "    print_integer(i);";
  *(source + 23) = (uint_t) "    print(*(source + 39));";
  *(source + 24) = (uint_t) "    print_string(*(source + i));";
  *(source + 25) = (uint_t) "    print(*(source + 40));";
  *(source + 26) = (uint_t) "    println();";
  *(source + 27) = (uint_t) "    i = i + 1;";
  *(source + 28) = (uint_t) "  }";
  *(source + 29) = (uint_t) "  // printing source code after stored code";
  *(source + 30) = (uint_t) "  i = 11;";
  *(source + 31) = (uint_t) "  while (i < 38) {";
  *(source + 32) = (uint_t) "    print(*(source + i));";
  *(source + 33) = (uint_t) "    println();";
  *(source + 34) = (uint_t) "    i = i + 1;";
  *(source + 35) = (uint_t) "  }";
  *(source + 36) = (uint_t) "  return 0;";
  *(source + 37) = (uint_t) "}";
  *(source + 38) = (uint_t) "  *(source + ";
  *(source + 39) = (uint_t) ") = (uint_t) ";
  *(source + 40) = (uint_t) ";";
  // printing source code before stored code
  i = 0;
  while (i < 11) {
    print(*(source + i));
    println();
    i = i + 1;
  }
  // printing stored source code
  i = 0;
  while (i < 41) {
    print(*(source + 38));
    print_integer(i);
    print(*(source + 39));
    print_string(*(source + i));
    print(*(source + 40));
    println();
    i = i + 1;
  }
  // printing source code after stored code
  i = 11;
  while (i < 38) {
    print(*(source + i));
    println();
    i = i + 1;
  }
  return 0;
}
