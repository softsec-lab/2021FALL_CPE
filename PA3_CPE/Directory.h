//*****DO NOT MODIFY THIS FILE******
//*****DO NOT MODIFY THIS FILE******
//*****DO NOT MODIFY THIS FILE******
//*****DO NOT MODIFY THIS FILE******
//*****DO NOT MODIFY THIS FILE******
//
#ifndef DIRECTORY_H
#define DIRECTORY_H

#include "Entry.h"

class Directory : public Entry {
public:
    Directory(const std::string& name);
    Directory(const Directory& o);

    virtual ~Directory();

    Entry* clone() const override; //This function copies the current directory
    const std::string& name() const override; //this function returns the name of the directory
    void print(std::ostream& os, size_t indent = 0) const override; //this function prints directories and files in the current directory.
    std::string content() const override; //this function returns the content of the current directory. this is for "ls" command.
                                          //dir.content() : should returns directories and files in the "dir" directory

    size_t count() const; //this function returns number of files and directories in the current directory

    Entry* find(const std::string& name); //this function find directory or file with the given name in the current directory and returns it.

    bool add(Entry* entry); //this function creates a file or directory in the current directory.
    Entry* remove(const std::string& name); //this function remove a file or directory in the current directory.

private:
    static const size_t maxcount_ = 8;
    static const size_t print_indent_ = 3;

    std::string name_; //this stores the name of the directory
    size_t count_;
    Entry* entries_[maxcount_]; //this stores the resource such as files and directories in the current directory.
};

#endif /* DIRECTORY_H */
