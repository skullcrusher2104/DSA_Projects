#ifndef QUADRATICPROBING_H
#define QUADRATICPROBING_H

#include "BaseClass.h"
#include <iostream>

class QuadraticProbing : public BaseClass {
public:
    void createAccount(std::string id, int count) override;
    std::vector<int> getTopK(int k) override;
    int getBalance(std::string id) override;
    void addTransaction(std::string id, int count) override;
    bool doesExist(std::string id) override;
    bool deleteAccount(std::string id) override;
    int databaseSize() override;
    int hash(std::string id) override;
    QuadraticProbing(){
        size=0;
        bankStorage1d.resize(100020);
    }

private:
    int size;
    void account_created();
    void account_deleted();
    int get_max(std::vector<int>& balances);  
};

#endif // QUADRATICPROBING_H
