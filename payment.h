class payment
{
private:
 int PaymentID;
 char PayType;
 double Payamount;
public:
 payment(int PaymentID,char PayType,double Payamount);
 void displayPayment();
 void calculatePayment();
 ~payment();
};