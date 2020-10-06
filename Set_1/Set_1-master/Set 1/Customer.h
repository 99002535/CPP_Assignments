enum AccountType {Savings, Current};
class Customer {
    int m_custId;
    int m_phone;
    char m_type;
    std::string m_custName;
    double m_balance;
  public:
    Customer();
    Customer(int, std::string, int, double);
    Customer(int, std::string, int);
    Customer(const Customer &p);
    void credit(AccountType);
    void makeCall();
    double getBalance() const;
    void display();
};
