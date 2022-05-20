// Feedback
class Feedback
{
private:
 char custName[40];
 int FeedbackID;
public:
 Feedback(int fbID,char name);
 void displayFeedback();
 ~Feedback();
};