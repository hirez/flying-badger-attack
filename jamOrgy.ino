void jamOrgy(int reps)
{
  aprintf("JamOrgy: %d\n",reps);
  for (int i = 0; i < reps; i++) {
    portB(1, 1);
    refreshrandom();
  }
}

