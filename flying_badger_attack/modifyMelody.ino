void modifyMelody()
{
  #ifdef DEBUG
  aprintf("ModifyMelody\n");
  #endif
  melody[random(0, 9)] = random(0, 16);
  mods[random(0, 9)] = random(28, 69);
}

