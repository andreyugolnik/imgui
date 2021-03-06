/**********************************************\
*
*  Andrey A. Ugolnik
*  http://www.ugolnik.info
*  andrey@ugolnik.info
*
\**********************************************/

#pragma once

class ImInputStream
{
public:
    virtual ~ImInputStream()
    {
    }

    virtual unsigned size() const = 0;
    virtual unsigned read(void* buffer, unsigned count) = 0;
};

class ImOutputStream
{
public:
    virtual ~ImOutputStream()
    {
    }

    virtual unsigned write(const void* buffer, unsigned count) = 0;
    virtual unsigned format(const char* fmt, ...) = 0;
};

class ImFile
{
public:
    virtual ~ImFile()
    {
    }

    virtual ImInputStream* open(const char* path, const char* mode) const;
    virtual ImOutputStream* create(const char* path, const char* mode) const;
};
