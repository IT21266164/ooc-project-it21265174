class staff{
private:
 int staffID;
 char staffName[20];
 char staffemail[50];
public:
 staff(int staddID, const char staffName[], char staffemail);
 void display_confamation_details();
 void conform_payment_details();
 ~staff();