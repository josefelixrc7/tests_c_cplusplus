#include <iostream>
#include <string.h>

class String
{
    public:
        // constructors
        String();
        String(const char *const);
        String(const String&);
        ~String();
        // overloaded operators
        char& operator[](int offset);
        char operator[](int offset) const;
        String operator+(const String&);
        void operator+=(const String&);
        String& operator= (const String &);
        // general accessors
        int getLen() const { return len; }
        const char* getString() const { return value; }
        // static int constructorCount;
    private:
        String(int); // private constructor
        char* value;
        int len;
};
