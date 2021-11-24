//*****DO NOT MODIFY THIS FILE*****
//*****DO NOT MODIFY THIS FILE*****
//*****DO NOT MODIFY THIS FILE*****
//*****DO NOT MODIFY THIS FILE*****
//*****DO NOT MODIFY THIS FILE*****
//*****DO NOT MODIFY THIS FILE*****
//*****DO NOT MODIFY THIS FILE*****

#ifndef ENTRY_H
#define ENTRY_H

#include <iostream>
#include <string>

class Entry {
  public:
    virtual ~Entry() = 0;
    virtual Entry* clone() const = 0;
    virtual void print(std::ostream& os, size_t indent = 0) const = 0;
    virtual const std::string& name() const = 0;
    virtual std::string content() const = 0;
};

std::ostream& operator<<(std::ostream& os, const Entry& entry);

#endif /* ENTRY_H */
