int DLCODE = 16373;   //1004 is rate awesome //17 is gnarbly //1022 catchy //1023 fast cool idm!!
#define DEBUG 1

// Notes
//const int notes[13] = {239,225,213,201,190,179,169,159,150,142,134,0,9999};
const int notes[18] = {440, 466, 494, 523, 554, 587, 622, 659, 698, 740, 784, 831, 9999, 0, 9999, 0, 9999, 440};


const int scales[50] = {
  0, 4, 5, 7, 10, 12, 13, 13, 5, 10, //mopho
  0, 1, 4, 5, 7, 8, 11, 12, 13, 13, //oriental
  0, 3, 6, 7, 9, 12, 7, 0, 12, 13, //minor
  0, 13, 2, 3, 13, 5, 6, 7, 8, 9, //chromo
  1, 3, 6, 8, 10, 1, 3, 13, 13, 13 //pentatonic
};
const int octaves[4] = {1, 2, 4, 6};
const int availReps [9] = {2, 2, 4, 4, 4, 4, 8, 8, 1};
const int availTimesigs [10] {6, 6, 6, 10, 7, 8, 8, 8, 8, 8};
const int availmodReps [6] {1, 1, 2, 3, 4, 8};

int melody[8] = {0, 4, 7, 0, 1, 5, 8, 1};
int meloct[8] = {2, 3, 3, 3, 0, 3, 3, 2};
int BD[8] = {1, 0, 0, 0, 0, 0, 0, 0};
int snare[8] = {0, 0, 0, 0, 1, 0, 0, 1};
//int mods[8] = {20, 30, 20, 30, 20, 30, 20, 30};
int mods[8] = {55, 36, 20, 30, 20, 40, 40, 50};
int hats[8] = {0, 1, 0, 1, 0, 1, 0, 1};


int oct = 0;
const int Speaker = 4;     //pin for tones, 1 on weasel board 4 or 2 on dedcats
int rate = 300;
int a;
int b;
int c;
int selector;
long runTime;
int pitch = 100;
int iterations;
long timer;
long portBtimer;
int startStep = 0;
int jamSeshLength = 8;
int timeSig = 6;
int Reps = 2;
int modReps = 2;
int tritz = 1;



int p0 = 10;
int p1 = 1;
int p2 = 7;
long t ;
int scaleSelect = 1;
int transposeAmount = 1;

void setup()
{
  #ifdef DEBUG
  Serial.begin(57600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }
  aprintf("Start!\n");
  #endif
  randomSeed(DLCODE);
  DDRB = B11111111;
  //this =76543210
  refreshrandom();
  //portB(8, 8);

  refreshrandom();
  //portB(1, 1);
  refreshrandom();
  //portB(8, 1);
  refreshAll();
  //portB(32, 1);
  rate = 250;
  playMelodic(Reps);
}

void loop()
{
  //refreshAll();
  int bepp = random(0,7);
  #ifdef DEBUG
  aprintf("Begin loop\n");
  aprintf("Bepp is %d\n",bepp);
  #endif
  switch (bepp) {
    case 1:
    case 2:
    case 3:
      playMelodic(Reps);
      break;
    case 4:
    case 5:
      //jamOrgy(random(0, 32));
      break;
    case 6:
      refreshAll();
    default:
      //portB(jamSeshLength, modReps);
      break;
  }
}
