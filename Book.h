#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>

class Book {
private:
    std::string bookName;//书名
    std::string isbn;//isbn
    std::string publisher;//出版社
    double price;//价格
    int pageNum;//页数
    bool isAvailable;//在馆状态
public:
    void initData(const std::string& n, const std::string& id, const std::string& pub, double p, int pg, bool sta);
    std::string getIsbn();
    void setStatus(bool s);
    void print();
    bool verifyIsbn();
};
#endif
