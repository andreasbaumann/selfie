uint_t main() {
  uint_t* string;

  // the length of the string needs to be a multiple of REGISTERSIZE
  // (4 for RISCV-32, 8 for RISCV-64), the string MUST contain a
  // multiple of 8 for this to work on both platforms!
  string = "\nSelfie supports the escape sequences \\n \\t \\b \\\' \\\" \\\% \\\\    \n\n";

  while (*string != 0) {
    // 1 means that we print to the console
    // foo points to a chunk of REGISTERSIZE (4 or 8) characters
    // REGISTERSIZE means that we print REGISTERSIZE characters
    write(1, string, REGISTERSIZE);

    // go to the next chunk of 8 characters
    string = string + 1;
  }

  return 0;
}
