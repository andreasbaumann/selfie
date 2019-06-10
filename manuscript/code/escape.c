uint32_t main() {
  uint32_t* string;

  // the length of the string needs to be a multiple of 4
  string = "\nSelfie supports the escape sequences \\n \\t \\b \\\' \\\" \\\% \\\\    \n\n";

  while (*string != 0) {
    // 1 means that we print to the console
    // foo points to a chunk of 4 characters
    // 8 means that we print 4 characters
    write(1, string, 4);

    // go to the next chunk of 4 characters
    string = string + 1;
  }

  return 0;
}
