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
  fill(0);
  circle(0, 0, 300);
  fill(50);
  circle(0, 0, 280);
  fill(0);
  circle(0, 0, 100);

  stroke(255);
  strokeWeight(0);
  noStroke();
  textSize(10);
  textAlign(CENTER, CENTER);

  //   Hour label
  fill(255);
  for (let i = 0; i < 12; i++) {
    let angle = (3 * Math.PI) / 2 + i * (Math.PI / 6);
    text(i === 0 ? 12 : i, 40 * cos(angle), 40 * sin(angle));
  }
  text("AMIT", 0, 0);

  push();

  //   Hour Arrow
  noFill();
  stroke(255);
  strokeWeight(2);
  translate(52 * cos(hourAngle), 52 * sin(hourAngle));
  rotate((hr * Math.PI) / 6);
  beginShape();
  vertex(0, 0);
  vertex(-5, -10);
  vertex(0, -15);
  vertex(5, -10);
  endShape(CLOSE);
  line(0, -15, 0, -45);
  pop();

  push();

  //   Minute Arrow
  noFill();
  stroke(255);
  strokeWeight(1);
  translate(51 * cos(minAngle), 51 * sin(minAngle));
  rotate(((mins / 5) * Math.PI) / 6);
  beginShape();
  vertex(0, 0);
  vertex(-3, -10);
  vertex(0, -20);
  vertex(3, -10);
  endShape(CLOSE);
  strokeWeight(2);
  line(0, -20, 0, -65);
  pop();
  
  //   Seconds Arrow
  fill(255);
  stroke(255);
  strokeWeight(3);
  translate(53 * cos(secAngle), 53 * sin(secAngle));
  rotate(((sec / 5) * Math.PI) / 6);
  beginShape();
  vertex(0, 0);
  vertex(-3, -5);
  vertex(0, -10);
  vertex(3, -5);
  endShape(CLOSE);
  line(0, -10, 0, -45);
}
