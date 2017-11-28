//Analog Clock made having names of programming languages

float xmin, ymin, xhr, yhr ;
int r2=95, r3=75 ;
float beta = 3*PI/2, gamma = 3*PI/2;
float endX, endY;
int s = second();  
int m = minute(); 
int h = hour();
void setup() {
  size(500, 500) ; 
  background(250) ;
  beta = (3*PI/2) + ((m+(s/60.00))*(PI/30));
  gamma = (3*PI/2) + ((h+(m/60.00))*5*(PI/30));

}

void draw() {
  background(200) ;
  
  fill(255);
  stroke(0);
  strokeWeight(5);
  ellipse (250, 250, 317, 317) ;
  
  strokeWeight(1);
  stroke(0);
  fill (0) ;
  ellipse (250, 250, 300, 300) ;
 
textSize(25) ;
  fill(255);
  text("C", 240, 140);
  textSize(25) ;
  text("C++", 347, 257);
  text("Java", 230, 379);
  text("Python", 115, 255);
    
  frameRate (1) ;
  translate(width/2, height/2);
  text("©Amit", -40, 220);
  beta += PI/1800 ;
  xmin = r2 * cos(beta) ;
  ymin = r2 * sin(beta) ;
  stroke(100);
  strokeWeight(3);
  line(0, 0, xmin, ymin);
  gamma += PI/21600 ;
  xhr = r3 * cos(gamma) ;
  yhr = r3 * sin(gamma) ;
  strokeWeight(5);
  line (0, 0, xhr, yhr);
  
}
