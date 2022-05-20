#include<iostream>
#include "Register_customer.h"
#include"Recipe.h"
#include"Book.h"
#include"payment.h"
#include"staff.h"
#include"Hall.h"
#include"feedback.h"
#include"unregister_customer.h"
 
using namespace std;

int main()
{
 unregistercustomer*nUser;
 nUser->unregistercustomer();
 nUser->searchservice();
 
 Hall * H;
 H->Hall();
 H->displayHall();
 
 staff *s1;
 s1->display_confamation_details();
 s1->conform_payment_details();

 Feedback*fb;
 fb->displayFeedback();
 fb->~Feedback();

 Recipe *r1;
 r1->addRecipe();
 r1->displayRecipe();

 Book *bk;
 bk->calculateBookingPrice();
 bk-> displayBookingDetails();
 bk-> addBooking();

 payment *p1;
 p1->displayPayment();
 p1-> calculatePayment();

 rcustomer *rc1;
 rc1-> logging();
 rc1-> logout();
 rc1-> displayDetails();
}
