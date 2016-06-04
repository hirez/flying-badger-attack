void gener8melody()
{
  #ifdef DEBUG
  aprintf("GenMelody\n");
  #endif
  for (int i = 0; i < 8; i++) {                                          //go through melody array and add random shit
    melody[i] = scales[random(0, 10) + (scaleSelect * 12)];                               //populate melody with notes from the selected scale
    transposeAmount = random(-8, 8);
    meloct[i] = random(0, 4);
    mods[i] = random (0, 60);
  }
}

