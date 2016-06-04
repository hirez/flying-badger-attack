void TinyTone(int pitch, unsigned char octave, unsigned long decay, unsigned long duration, int BD, int snr, int mod, int hats)
{
  #ifdef DEBUG
  aprintf("Tinytone: %d %d %l %l %d %d %d %d\n",pitch,octave,decay,duration,BD,snr,mod,hats);
  #endif
  int oct = octaves[octave];
  //LDR = analogRead (A1);
  t = 200;
  if (pitch > 999) {
    //portB(1, 1);
  } else {
    if (mod > 40) {
      decay = decay / 3;
      tritz = 3;
    } else if (mod > 30) {
      decay = decay / 2;
      tritz = 2;
    } else  {
      tritz = 1;
    }
    for (int i = 0; i < tritz; i++) {
      if ( (mod % 2) == 0) {
        tone(Speaker, ((notes[pitch] / 2)*octaves[i]) / oct);
      } else {
        tone(Speaker, (notes[pitch] / 2) / oct);
      }
      for (long i = millis() + decay; i > millis(); t++) {
        if (millis() < ((i - decay) + (decay / 2))) {
          if (snr == 1) {
            PORTB = (PORTB & B11111011) | (t * (t >> 3) >> (t >> 7)); //MASK THE PINS WE WANT TO WRITE TO
            //this =76543210
          }
          if (BD == 1) {
            PORTB = (PORTB & B11111011) | t * (t >> 3) >> (t >> 6);
          }
          if (hats == 1) {
            PORTB = (PORTB & B11111011) | t * (t >> a | t >> b);//( t * (t >> 3) >> (t >> 6));
          }
        }
      }
      noTone(Speaker);
      delay((duration / tritz) - decay);
    }
  }
}
