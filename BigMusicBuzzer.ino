
const byte BUZZER_PIN = 8;

// Notes (Hz)
#define NOTE_E5 659
#define NOTE_D5 587
#define NOTE_FS4 370
#define NOTE_GS4 415
#define NOTE_CS5 554
#define NOTE_B4 494
#define NOTE_A4 440
#define NOTE_E4 330
#define NOTE_A5 880

int melody[] = {
  NOTE_E5, NOTE_D5, NOTE_FS4, NOTE_GS4,
  NOTE_CS5, NOTE_B4, NOTE_D5, NOTE_E5,
  NOTE_B4, NOTE_A4, NOTE_FS4, NOTE_E4,
  NOTE_A4, NOTE_B4, NOTE_A4
};

int noteDurations[] = {
  8, 8, 4, 4,
  8, 8, 8, 8,
  4, 4, 8, 8,
  4, 4, 2
};

void setup() {
  for (int i = 0; i < 15; i++) {
    int duration = 1000 / noteDurations[i];
    tone(BUZZER_PIN, melody[i], duration);
    delay(duration * 1.3);
    noTone(BUZZER_PIN);
  }
}

void loop() {
  // plays once
}
