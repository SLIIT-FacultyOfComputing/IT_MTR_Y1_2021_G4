#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//calss Registered User
class RegisteredUser :public UnregisteredUser
{
private:
	//Class Relationship
	Game* game[SIZE];
	Feedback* feedback;
	Payment* payment[SIZE];
public:
	RegisteredUser();
	RegisteredUser(const char uname[25], const char ppwd[8]);
	void login();
	void passwordvalidation();
	void logout();
	~RegisteredUser();
};

// class methods RegisteredUser
RegisteredUser::RegisteredUser()
{
	strcpy_s(PlayerUserName, " ");
	strcpy_s(PlayerPassword, " ");
}
RegisteredUser::RegisteredUser(const char uname[25], const char ppwd[8])
{
	strcpy_s(PlayerUserName, uname);
	strcpy_s(PlayerPassword, ppwd);
}
void RegisteredUser::login()
{
}
void RegisteredUser::passwordvalidation()
{
}
void RegisteredUser::logout()
{
}
RegisteredUser::~RegisteredUser()
{
}


//class Unregistererd User
class UnregisteredUser
{
private:
	//Class Relationship
	Game* game;

protected:
	int PlayerID;
	char PlayerName[30];
	char PlayerEmail[50];
	char PlayerUserName[10];
	char PlayerPassword[10];
public:
	UnregisteredUser();
	UnregisteredUser(int pid, const char pname[], const char pmail[], const char uname[], const char pword[]);
	void regisration();
	void cancelRegistration();
	~UnregisteredUser();
};

// class methods UnregisteredUser
UnregisteredUser::UnregisteredUser() {
	class UnregisteredUser {
		{
			PlayerID = 0;
			strcpy_s(PlayerName, " ");
			strcpy_s(PlayererEmail, " ");
			strcpy_s(PlayerUserName, " ");
			strcpy_s(PlayerPassword, "");

		}

		UnregisteredUser::UnregisteredUser(int pid, const char pname[], const char pmail[], const char uname[], const char pword[])

		{
			PlayerID = pid;
			strcpy_s(PlayerName, pname);
			strcpy_s(PlayerEmail, pmail);
			strcpy_s(PlayerUserName, uname);
			strcpy_s(PlayerPassword, pword);
		}

		void UnregisteredUser::regisration()

		{
		}
		void UnregisteredUser::cancelRegistration()
		{
		}
		UnregisteredUser:: ~UnregisteredUser()
		{
		}

	};

	
//class Game
class Game
{
private:
  int GameID;
  char GameName[10];
  double GamePrice;

public:
  Game();
  Game(int G_GameID, char* G_GameName, double G_GamePrice);
  void addGame();
  void removeGame();
  void GameDetails();
  ~Game();
};

//Game Method
Game::Game() {
  GameID = 0;
  strcpy_s(GameName,"");
  GamePrice = 0.00;
}

Game::Game(int G_GameID, char* G_GameName, double G_GamePrice)
{
  GameID = G_GameID;
  strcpy_s(GameName, "");
  GamePrice = G_GamePrice;
}

void Game::addGame()
{

}

void Game::removeGame()
{

}
void Game::GameDetails()
{
  cout << "GameID=" << GameID << endl;
  cout << "Game Name=" << GameName << endl;
  cout << "Game Price=" << GamePrice << endl;
  cout << "*************************" << endl;
}
Game::~Game()
{
  cout << "Dleting Game" << GameID<<endl;
}

//calss Paymennt
class Payment
{
      private : 
              int paymentID;
              double amount;
              string  paymentMethod;
              string  payDate;
      public :
              Payment();
              Payment(int ppaymentID,string  ppaymentMethod,double pamount, string        
              ppayDate );  
              void displayPayment();
              void validatePayment();
              double getAmount(); 
};


// calss credit card
class CreditCard
 {
          private :
                     int cardNumber;
                     string  type;
                     string expDate;
         public :
                    void doTransaction();
                    void validateTransaction();
 };


 // class Debit card
class DebitCard
 {
          private :
                   int cardNumber;
                   string type;
                   string expDate;
         public :
                   void doTransaction();
                   void validateTransaction();
};

// constuctor of payment
Payment :: Payment(int ppaymentID,string  ppaymentMethod,double pamount, string ppayDate )
{
                 paymentID = ppaymentID;
                 paymentMethod=ppaymentMethod;
                 amount =pamount;
                 payDate= ppayDate;;
} 
void Payment:: displayPayment()
{
                 cout <<"Payment for Game:"<<endl;
                 cout << endl<<"paymentID  :"<<paymentID<< endl;
                 cout <<"  payDate:"<< " paymentMethod :"<<endl;
}
double Payment :: getAmount();
{
                return amount ;
}
  Payment ::Payment()
{
                cout << "delete payments  "<< endl;
}
void Payment :: validatePayment()  
{        }


//class discount
class Discount
{
           private:
                   int DiscountID;
                   float discount;
          public:
                  Discount();
                  Discount(int DID);
                  void addDiscount();
                  void displayDiscount();
                  ~Discount();
};

//Discount methods
Discount::Discount()
{
              DiscountID=0;
}
               Discount::Discount(int DID)
{
                DiscountID=DID;
}
void Discount::addDiscount()
{           }
void Discount::displayDiscount()
{
  cout << "========Discount========"<< endl;
  cout << "ID :"<< DiscountID << endl;
  cout << "Discount = " << discount << endl;
}
Discount::~Discount()
{ 
}

//class Feedback
class Feedback{
    private:
       int feedbackNo;
       char playerName;
       string feedbackmessage;

    public:
       Feedback(int fbNo, char pName, string fbm);
       void displayFeedback ();
       ~Feedback();
};

//class methods Feedback
Feedback::Feedback(int fbNo, char pName, string fbm)
{
    feedbackNo = fbNo;
    playerName = pName;
    feedbackmessage = fbm;
}
 
 void Feedback::displayFeedback()
 {
      cout << "Feedback no: " << feedbackNo << endl;
      cout << "Feedback message: " << feedbackmessage << endl;
 }

 Feedback::~Feedback();
 {
 }

#include "RegistredUser.h"
#include "UnregistredUser.h"
#include "Game.h"
#include "Payment.h"
#include "CreditCard.h"
#include "DebitCard.h"
#include "Discount.h"
#include "Feedback.h"

int main()
{
     //Register User class object
     RegisteredUser* registeredUser;

     //Register User class object
     UnregisteredUser* unregisteredUser;

     //Game class object
     Game* game;

     //Payment class object
     Payment* payment;

     //Credit card class object
     CreditCard* creditCard;

     //Debit card class object
     DebitCard* debitCard;

     //Discount class object
     Discount* discount;

     //Feedback class object
     Feedback* feedback;

    //Method calling
    game = new Game(234, "Puzzle game", 1000);//create Game object
    game->addGame();
    game->removeGame();
    game->GameDetails();


    //Delete object
    delete game;
}