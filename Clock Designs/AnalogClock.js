let xmin, ymin, xhr, yhr;
let r2 = 95, r3 = 75;
let lengthsec = 120, theta = (3 * Math.PI) / 2, beta = (3 * Math.PI) / 2, gamma = (3 * Math.PI) / 2;
let endX, endY;

function setup() {
  createCanvas(500, 500);
  background(250);
  
  let s = second();
  let m = minute();
  let h = hour();

  theta = (3 * Math.PI) / 2 + (s * (Math.PI / 30));
  beta = (3 * Math.PI) / 2 + ((m + (s / 60.0)) * (Math.PI / 30));
  gamma = (3 * Math.PI) / 2 + ((h + (m / 60.0)) * 5 * (Math.PI / 30));
}

function draw() {
  background(250);

  // Draw the clock face
  fill(0);
  ellipse(250, 250, 310, 310);
  fill(250);
  ellipse(250, 250, 300, 300);

  // Draw numbers
  textSize(25);
  fill(0, 102, 153);
  text("12", 235, 140);
  text("3", 367, 263);
  text("6", 242, 379);
  text("9", 120, 260);

  // Draw marks
  fill(0);
  rect(247, 102, 6, 15);
  rect(383, 250, 15, 6);
  rect(247, 383, 6, 15);
  rect(102, 247, 15, 6);

  // Calculate seconds hand
  endX = lengthsec * Math.cos(theta);
  endY = lengthsec * Math.sin(theta);
  theta += Math.PI / 30;

  // Draw seconds hand
  translate(width / 2, height / 2);
  frameRate(1);
  line(0, 0, endX, endY);

  // Calculate and draw minutes hand
  beta += Math.PI / 1800;
  xmin = r2 * Math.cos(beta);
  ymin = r2 * Math.sin(beta);
  line(0, 0, xmin, ymin);
  line(0, 0, xmin + 1, ymin + 1);
  line(0, 0, xmin - 1, ymin - 1);

  // Calculate and draw hours hand
  gamma += Math.PI / 21600;
  xhr = r3 * Math.cos(gamma);
  yhr = r3 * Math.sin(gamma);
  line(0, 0, xhr, yhr);
  line(0, 0, xhr + 1, yhr + 1);
  line(0, 0, xhr + 2, yhr + 2);
  line(0, 0, xhr - 1, yhr - 1);
  line(0, 0, xhr - 2, yhr - 2);
}
