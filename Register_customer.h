class rcustomer
{
private:
 int custID;
 char custPassword;
 char custName;
 char custEmail;
 char telNo;

public:
 rcustomer(int custID,char custPassword,char custName,char 
 custEmail,char telNo);
 void logging();
 void logout();
 void displayDetails();
 ~rcustomer();
};