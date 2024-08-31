#include <M5StickCPlus2.h>

// Game variables
int score = 0;

void setup() {
  M5.begin();
  M5.Lcd.setRotation(0); // Set screen orientation
  M5.Lcd.fillScreen(BLACK);
  M5.Lcd.setTextColor(WHITE);
  M5.Lcd.setTextSize(2);
  M5.Lcd.setCursor(10, 10);
  M5.Lcd.print("Clicker");
  M5.Lcd.setCursor(10, 30);
  M5.Lcd.print("Game");
  M5.Lcd.setCursor(10, 50);
  M5.Lcd.print("Score: ");
  M5.Lcd.print(score);
}

void loop() {
  M5.update(); // Update button status

  if (M5.BtnA.wasPressed()) {
    // Increment score and update display
    score++;
    updateScore();
  }
}

void updateScore() {
  // Display the current score on the screen
  M5.Lcd.fillRect(10, 50, 100, 20, BLACK);  // Clear the previous score
  M5.Lcd.setCursor(10, 50);
  M5.Lcd.print("Score: ");
  M5.Lcd.print(score);
}
