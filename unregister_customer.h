//IT21261596
class unregister_customer{
private:
 char custName[30];
 char custEmail[50];
 int Tel; 
public:
 unregister_customer(const char custName[30],const char custEmail[50],int Tel);
 virtual void registration();
 void searchservice(); 
 ~unregister_customer();
 
};
