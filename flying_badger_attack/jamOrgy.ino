void jamOrgy(int reps)
{
  #ifdef DEBUG
  aprintf("JamOrgy: %d\n",reps);
  #endif
  for (int i = 0; i < reps; i++) {
    portB(1, 1);
    refreshrandom();
  }
}

