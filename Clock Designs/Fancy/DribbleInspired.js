const months = [
  "JAN",
  "FEB",
  "MAR",
  "APR",
  "MAY",
  "JUN",
  "JUL",
  "AUG",
  "SEP",
  "OCT",
  "NOV",
  "DEC",
];

function setup() {
  createCanvas(500, 500);
  textStyle(BOLD);
  textFont("Verdana");
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
  fill(0);
  circle(0, 0, 320);
  fill(50);
  circle(0, 0, 300);
  fill(0);
  circle(0, 0, 250);
  fill(50);
  circle(0, 0, 170);
  fill(0);
  circle(0, 0, 100);

  stroke(255);
  strokeWeight(0);
  noStroke();
  textSize(12);
  textAlign(CENTER, CENTER);

  //   Hour label
  for (let i = 0; i < 12; i++) {
    let angle = (3 * Math.PI) / 2 + i * (Math.PI / 6);
    if (i % 3 == 0) {
      fill(255);
    } else {
      fill(150);
    }
    text(i === 0 ? 12 : i, 137.5 * cos(angle), 137.5 * sin(angle));
  }
  text("AMIT", 0, 0);

  textAlign(RIGHT);
  text(months[date.getMonth()], 0, 105);
  textAlign(LEFT);
  fill(255, 0, 0);
  textSize(14);
  let today = date.getDate();
  text(today < 10 ? "0" + today : today, 2, 105);

  push();

  //   Hour Triangle
  fill(255, 0, 0);
  translate(105 * cos(hourAngle), 105 * sin(hourAngle));
  rotate((hr * Math.PI) / 6);
  triangle(-12, 0, 12, 0, 0, -16);
  pop();

  fill(255);
  push();

  //   Minute Triangle
  translate(65 * cos(minAngle), 65 * sin(minAngle));
  rotate(((mins / 5) * Math.PI) / 6);
  triangle(-10, 0, 10, 0, 0, -15);
  pop();

  // Seconds Triangle
  translate(32 * cos(secAngle), 32 * sin(secAngle));
  rotate(((sec / 5) * Math.PI) / 6);
  triangle(-8, 0, 8, 0, 0, -13);
}
