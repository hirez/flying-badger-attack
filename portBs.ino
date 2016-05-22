void playPortBsamp(int i) {
  timer = micros() + pitch;                                                                         //approx 97.9797979797979 bpm
  for (long o = 0; timer > o; o = micros()) {
    PORTB = (PORTB & B11101001) | OutPut(i); //MASK THE PINS WE WANT TO WRITE TO
  }
}

byte OutPut(long i) {
  if (i == 1) return  i * (i >> a | i >> b);
  if (i == 2) return i * (i >> a | i >> b) & (c * 3) ;
  if (i == 3) return (i >> b + i << c);
  if (i == 4) return ((i * (i >> b | i >> 9) | (i / 256 + a)&i >> 8)) ^ (i & i >> c | i >> 6);
  if (i == 5) return (i * (b / 2) | i >> a) | (i * c & i >> 3);
  if (i == 6) return (i & i >> a | i >> (b / 2));
  if (i == 7) return i % ((i >> a) & (i >> c)) ;
  if (i == 8) return i * ( ((i >> 9) & 10) | ((i >> 11)&a) ^ ((i >> b) & 15 & (i >> c)) );
  if (i == 9) return i * ((i >> 3 | i >> b) & (a * 3)&i >> 9);
  if (i == 10) return i * ((i >> a | i >> b)&c & i >> 6);
  if (i == 11) return i >> (i | b) >> c >> i;
  if (i == 12) return i * (i >> a | i >> b) >> (i >> c);
  if (i == 13) return ((i * 2) & (i >> (i >> a))) + ((i * 1) & (i >> c) & 31);
  if (i == 14) return ((i >> a | i % b) & (i >> c | i % 19));
  if (i == 15) return i >> (i | b) >> c >> i;
  if (i == 16) return i * (i >> a | i >> b) >> (i >> c);
  if (i == 17) return i >> a;
  if (i == 18) return ((i >> 7 - a | (i & i) * 5) | (i & i >> 8) | (i >> b)) | (i * (i >> 8)) | (i >> c - 1) * 3;
  if (i == 19) {
    i = i + 7;
    return  (((i >> 4) | (i % a)) + 3) | (((i % 1000) | (i >> b)) & ((i >> 7) | (i * i % c)));
  }
  if (i == 20) return ((((25 * i / 2) / 50) * (((14 * i) / 50) >> a | i >> 9) & ((77 * 46) / 50)&i >> 8)) ^ (i & i >> b | i >> 6);
  if (i == 21) return (i * (i >> (i >> a)) % i) + (i * ( ((i >> 9) & 10) | ((i >> c)&a) * ((i >> a)&b & (i >> 15)) ));
  if (i == 22) return ((1 - (((i + 10) >> ((i >> a) & 15)) & 2)) * 2) * ((((i) >> 10) ^ ((i + b) >> 10)) & 1) * 32 + (((i & 4095 + c) - 2047) * ((i / ((i >> 10 & 3) + 1)) & ((i >> 10 & 7) + 5)) + (i >> (((i >> 12) + 16) & (c + 5)) & 1) * i % 512 * (i % 256 - 128) / 2) / 1024 + 128;
  return 0;
}
