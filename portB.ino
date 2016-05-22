void portB(int steps, int modReps) {
  refreshrandom();
  for (int i = 0; i < modReps; i++) {
    portBtimer = millis() + (rate * (steps / modReps));
    for (long i = 0 ; i < runTime; i++) {
      if (portBtimer < millis()) {
        break;
      }
      playPortBsamp(i);
    }
    b++;
    a--;
  }
  startStep = steps;
}
