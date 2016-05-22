void playMelody(int iterationz, int transpose, int startstep) {
  for (int i = 0; i < iterationz; i++) {
    for (int i = startstep; i < timeSig; i++) {
      TinyTone(melody[i] + transpose, meloct[i], rate / 2, rate, BD[i], snare[i], mods[i], hats[i]);
    }
    startstep = 0;                                                                    //local startStep (unnecessary)
    startStep = 0;                                                                    //global startStep
  }

}

