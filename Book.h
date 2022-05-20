//IT21265006 Gunathilaka K.A.R
class Book
{
private:
 int bookID;
 char bookDate;
 char bookDescription;
 double bookPrice;
public:
 Book(int bookID,char bookDate,char 
 bookDescription,double bookPrice);
 void calculateBookingPrice();
 void displayBookingDetails();
 void addBooking();
 ~Book();
};
