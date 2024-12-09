const SECOND_LENGTH = 120;
const MINUTE_LENGTH = 95;
const HOUR_LENGTH = 75;

function setup() {
  createCanvas(500, 500);
  background(250);
  frameRate(1);
}

function draw() {
  const sec = second();
  const min = minute();
  const hr = hour();

  const theta = (3 * Math.PI) / 2 + sec * (Math.PI / 30);
  const beta = (3 * Math.PI) / 2 + (min + sec / 60.0) * (Math.PI / 30);
  const gamma = (3 * Math.PI) / 2 + (hr + min / 60.0) * 5 * (Math.PI / 30);

  background(250);
  fill(250);

  // Translate everything to the center
  translate(width / 2, height / 2);

  // Clock face
  stroke(0);
  strokeWeight(8);
  circle(0, 0, 308);

  strokeWeight(1);

  // Hour markers
  fill(0);
  rect(-3, -150, 6, 15);
  rect(-3, 135, 6, 15);
  rect(-150, -3, 15, 6);
  rect(135, -3, 15, 6);

  // Digital time display
  textSize(35);
  fill(80, 102, 153);
  let displayHour = hr % 12 === 0 ? "12" : hr % 12;
  displayHour += " : " + (min % 60 >= 10 ? min % 60 : "0" + (min % 60));
  displayHour += " : " + (sec % 60 >= 10 ? sec % 60 : "0" + (sec % 60));
  textAlign(CENTER, CENTER);
  text(displayHour, 0, 200);

  textSize(25);
  fill(150, 102, 0);
  text(hr % 24 >= 12 ? "PM" : "AM", 115, 200);

  // Hour numbers
  textSize(25);
  fill(0, 102, 153);
  text("12", 0, -120);
  text("3", 120, 0);
  text("6", 0, 120);
  text("9", -120, 0);

  stroke(0);
  // Second hand
  const endX = SECOND_LENGTH * cos(theta);
  const endY = SECOND_LENGTH * sin(theta);
  line(0, 0, endX, endY);

  // Minute hand
  const xmin = MINUTE_LENGTH * cos(beta);
  const ymin = MINUTE_LENGTH * sin(beta);
  strokeWeight(2);
  line(0, 0, xmin, ymin);

  // Hour hand
  const xhr = HOUR_LENGTH * cos(gamma);
  const yhr = HOUR_LENGTH * sin(gamma);
  strokeWeight(4);
  line(0, 0, xhr, yhr);
}
