float xmin, ymin, xhr, yhr ;
int r2=95, r3=75 ;
float lengthsec = 120, theta = 3*PI/2, beta = 3*PI/2, gamma = 3*PI/2;
float endX, endY;
int s = second();  
int m = minute(); 
int h = hour();   
void setup() {
  size(500, 500) ; 
  background(250) ;
  theta = (3*PI/2) + (s*(PI/30));
  beta = (3*PI/2) + ((m+(s/60))*(PI/30));
  gamma = (3*PI/2) + ((h+(m/60))*5*(PI/30));
}

void draw() {
  background(250) ;
  fill (0) ;
  ellipse (250, 250, 310, 310) ;
  fill (250) ;
  ellipse (250, 250, 300, 300) ;
  textSize(25) ;
  fill(0, 102, 153);
  text("12", 235, 140);
  text("3", 367, 263);
  text("6", 242, 379);
  text("9", 120, 260);
  fill (0) ;
  rect(247, 102, 6, 15) ;
  rect(383, 250, 15, 6) ;
  rect(247, 383, 6, 15) ;
  rect(102, 247, 15, 6) ;
  endX  = lengthsec * cos(theta);
  endY = lengthsec * sin(theta) ;
  theta +=PI/30;

  translate(width/2, height/2);
  frameRate (1) ;
  line(0, 0, endX, endY);
  beta += PI/1800 ;
  xmin = r2 * cos(beta) ;
  ymin = r2 * sin(beta) ;
  line(0, 0, xmin, ymin);
  line (0, 0, xmin+1, ymin+1) ;
  line (0, 0, xmin-1, ymin-1); 
  gamma += PI/21600 ;
  xhr = r3 * cos(gamma) ;
  yhr = r3 * sin(gamma) ;
  line (0, 0, xhr, yhr);
  line (0, 0, xhr+1, yhr+1) ;
  line (0, 0, xhr+2, yhr+2) ;
  line (0, 0, xhr-1, yhr-1) ;
  line (0, 0, xhr-2, yhr-2);
}