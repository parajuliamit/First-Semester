let xmin, ymin, xhr, yhr;
let r2 = 95, r3 = 75;
let beta = (3 * Math.PI) / 2, gamma = (3 * Math.PI) / 2;

function setup() {
  createCanvas(500, 500);
  background(250);

  let s = second();
  let m = minute();
  let h = hour();

  beta = (3 * Math.PI) / 2 + ((m + (s / 60.0)) * (Math.PI / 30));
  gamma = (3 * Math.PI) / 2 + ((h + (m / 60.0)) * 5 * (Math.PI / 30));
}

function draw() {
  background(200);

  // Draw clock outline
  fill(255);
  stroke(0);
  strokeWeight(5);
  ellipse(250, 250, 317, 317);

  // Draw clock face
  strokeWeight(1);
  stroke(0);
  fill(0);
  ellipse(250, 250, 300, 300);

  // Draw programming language labels
  textSize(25);
  fill(255);
  text("C", 240, 140);
  text("C++", 347, 257);
  text("Java", 230, 379);
  text("Python", 115, 255);

  // Draw the copyright text
  frameRate(1);
  translate(width / 2, height / 2);
  text("©Amit", -40, 220);

  // Draw minute hand
  beta += Math.PI / 1800;
  xmin = r2 * Math.cos(beta);
  ymin = r2 * Math.sin(beta);
  stroke(100);
  strokeWeight(3);
  line(0, 0, xmin, ymin);

  // Draw hour hand
  gamma += Math.PI / 21600;
  xhr = r3 * Math.cos(gamma);
  yhr = r3 * Math.sin(gamma);
  strokeWeight(5);
  line(0, 0, xhr, yhr);
}
