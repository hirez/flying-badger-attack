void refreshrandom() {
  a = random(1, 20);
  b = random(1, 20);
  c = random(5, 31);
  selector = random (1, 23);
  runTime = 26200 - (pitch * 20);
  //runTime = random (10000, 60000);
  iterations = random(0, 3) * 2;
  pitch = random(50, 600);
  jamSeshLength = random(1, 17) * 8;

  modReps = availmodReps[random (0, 6)];
}

void refreshAll() {
  Reps = availReps[random(0, 9)];
  refreshrandom();
  gener8melody();
  gener8BDbeat();
  gener8SDbeat();
  rate = random(100, 701);
  runTime = 16500;
  scaleSelect = random(0, 6);
  gener8BDbeat();
  timeSig = availTimesigs[random(0, 10)];
  if (rate < 200) {                                     //if we are playing really fast, play more repetitions!
    Reps = Reps * 2;
  }
  if (rate < 150) {
    rate = 150;
  }
}

