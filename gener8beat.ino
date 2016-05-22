void gener8BDbeat() {
  for (int i = 0; i < 8; i++) {
    BD[i] = random (0, 4);                  //each step has a 1 in 4 chance of generating a BD
  }
}

void gener8SDbeat() {
  for (int i = 0; i < 8; i++) {
    snare[i] = random(0, 4);                //each step has a 1 in 4 chance of generating a SD
  }
}

void gener8hats() {
  for (int i = 0; i < 8; i++) {
    hats[i] = random(0, 3);                 //each step has a 1 in 3 chance of generating a hiHat
  }
}

