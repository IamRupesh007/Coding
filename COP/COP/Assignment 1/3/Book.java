public class Book
{
  String bookName;
  int bookId,bookPrice;
  Book()
  {
   bookId=1001;
   bookName="Incognito";
   bookPrice=100;
  }
 
 Book(int a,String b,int c)
  {
    bookName=b;
    bookId=a;
    bookPrice=c;
   System.out.println("Details of Book Name: "+bookName+ "BoodID: "+bookId+ "Book Price :"+bookPrice);
  }

  void display()
  {
    System.out.println("BookID :"+bookId+" Book Name: "+bookName+" Book Price : "+bookPrice);
   
  }


}