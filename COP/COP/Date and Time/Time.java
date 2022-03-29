public class Time
{
 int hh,mm,ss;
 
 Time(int h,int m,int s)
 {
  hh=h;
  mm=m;
  ss=s;
 }
 
 Time()
 {
  hh=1;
  mm=1;
  ss=30;
 }

 void display()
 {
   System.out.println(hh+" : " +mm+" : "+ss+"\n");
 }
}