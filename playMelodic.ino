void playMelodic(int reps)
{
  aprintf("PlayMelodic: %d\n",reps);
  for (int i = 0; i < reps; i++) {                                                //repeat number of reps
    for (int i = 0; i < 2; i++) {                                            //repeat this subpart twice
      playMelody(4, 0, startStep);                                           //play stored melody 4 times, not transposed, move the start step if we portBd
      portB(random(0, 6), 1);                                                //portB break
      modifyMelody();                                                        //change one note in the melody
      playMelody(4, transposeAmount, startStep);                             //play the melody 4 times transposed
      portB(random (0, 6), 1);                                               // portB break
      gener8SDbeat();                                                          //make a new SD beat
    }
    gener8BDbeat();                                                           // make a new BD break
    refreshrandom();

    int s = random(1, 4);

    if (s == 1) portB(Reps, 2);
    if (s == 2) transposeAmount = random(-8, 8);
    if (s == 3) portB(Reps * 2, 1);
  }
}
