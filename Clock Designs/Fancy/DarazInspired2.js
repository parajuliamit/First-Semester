function setup() {
  createCanvas(500, 500);
  frameRate(10);
}

function draw() {
  const date = new Date();
  const ms = date.getMilliseconds();
  const sec = date.getSeconds() + ms / 1000;
  const mins = date.getMinutes() + sec / 60.0;
  const hr = (date.getHours() % 12) + mins / 60.0;

  const secAngle = (3 * Math.PI) / 2 + sec * (Math.PI / 30);
  const minAngle = (3 * Math.PI) / 2 + mins * (Math.PI / 30);
  const hourAngle = (3 * Math.PI) / 2 + hr * (Math.PI / 6);

  background(200);
  fill(250);
  strokeWeight(0);

  // Translate everything to the center
  translate(width / 2, height / 2);

  // Clock face
  fill(50);
  circle(0, 0, 300);
  fill(0);
  circle(0, 0, 280);

  noStroke();
  textAlign(CENTER, CENTER);
  push();

  fill(50);
  circle(0, 0, 190);

  //  Hour Label
  fill(255);
  textSize(18);
  textStyle(BOLD);
  rotate(-(hr / 6) * Math.PI);
  for (let i = 0; i < 12; i++) {
    let angle = Math.PI + i * (Math.PI / 6);
    text(i === 0 ? "12" : i, -80 * cos(angle), -80 * sin(angle));
  }
  pop();

  fill(0);
  arc(0, 0, 190, 190, HALF_PI / 2, PI + HALF_PI + HALF_PI / 2);
  fill(0);
  circle(0, 0, 135);

  //  Minute Label
  push();
  fill(50);
  circle(0, 0, 120);
  textSize(12);
  textStyle(BOLD);
  rotate(-(mins / 30) * Math.PI);
  fill(355);
  for (let i = 0; i < 12; i++) {
    let angle = Math.PI + i * (Math.PI / 6);
    text(5 * i, -50 * cos(angle), -50 * sin(angle));
  }
  pop();

  fill(0);
  arc(0, 0, 120, 120, HALF_PI / 2, PI + HALF_PI + HALF_PI / 2);
  fill(0);
  circle(0, 0, 80);
  fill(50);
  circle(0, 0, 65);
  fill(0);
  circle(0, 0, 35);
  fill(255);
  circle(0, 0, 8);
  push();

  //  Second Label
  fill(255);
  textSize(9);
  rotate(-(sec / 30) * Math.PI);
  for (let i = 0; i < 12; i++) {
    let angle = Math.PI + i * (Math.PI / 6);
    text(5 * i, -25 * cos(angle), -25 * sin(angle));
  }
  pop();

  fill(255);
  triangle(100, 0, 115, -5, 115, 5);

  push();
  textSize(9);
  rotate(Math.PI / 4);
  text("HOUR", 80, 8);
  textSize(8);
  text("MIN", 50, 8);
  pop();
  
  textSize(20);
  textStyle(BOLD);
  text("AMIT", -100, 0);
}