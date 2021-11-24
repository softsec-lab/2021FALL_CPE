//DO NOT MODIFY THIS FILE
//DO NOT MODIFY THIS FILE
//DO NOT MODIFY THIS FILE
//DO NOT MODIFY THIS FILE
//DO NOT MODIFY THIS FILE

#ifndef FILE_H
#define FILE_H

#include "Entry.h"

class File : public Entry {
public:
    File(const std::string& name, const std::string& content = "");
    File(const File& o);

    virtual ~File();

    //std::unique_ptr<Entry> clone() const override;
    Entry* clone() const override; //this function copies the current file
    const std::string& name() const override; //this function returns the name of the current file
    void print(std::ostream& os, size_t indent = 0) const override; //this functions prints the name of the current file
    std::string content() const override; //this function returns the content of the current file

    std::string content(const std::string& text); //this function updates the content of the current file.
                                                  //it returns the result of the content update such as "Content updated!"

private:
    std::string name_; //stores the name of the current file.
    std::string text_; // stores the content of the current file.
};

#endif /* FILE_H */
