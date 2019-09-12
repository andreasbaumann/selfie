uint_t x;

uint_t f(uint_t x) {
  while (x > 0)
    x = x - 1;

  return x;
}

uint_t main() {
  x = 0;

  x = x + 1;

  if (x == 1)
    x = x + 1;
  else
    x = x - 1;

  return f(x);
}
