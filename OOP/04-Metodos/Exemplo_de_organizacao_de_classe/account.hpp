#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include <string>

class Account {
    private:
        std::string name;
        double balance;
    
    public:
        inline void set_balance(double bal);
        inline double get_balance();
        inline void set_name(std::string n);
        inline std::string get_name();

        bool deposit(double amount);
        bool withdraw(double amount);
};

inline void Account::set_balance(double bal) {
    balance = bal;
}

inline double Account::get_balance() {
    return balance;
}

inline void Account::set_name(std::string n) {
    name = n;
}

inline std::string Account::get_name() {
    return name;
}

#endif // ACCOUNT_HPP