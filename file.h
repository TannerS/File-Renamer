#ifndef FILE_H
#define FILE_H

#include "boost/filesystem/path.hpp"

// needed to get sorting working
// only solutions I can find was using struc
// and not a class
struct File
{
    boost::filesystem::path path;
    time_t last_modified_state;
};

// this struc holds a method that describes the sorting method
struct FileCMP
{
    bool operator()( const File& f1, const File& f2 ) const
    {
        return f1.last_modified_state < f2.last_modified_state;
    }
};






/*
class File
{
    public:
        boost::filesystem::path getPath();
        void setPath(boost::filesystem::path path);
        time_t getModifiedTime();
        void setModifiedTime(time_t time);

    private:
        boost::filesystem::path path;
        time_t last_modified_state;
};
*/

#endif // FILE_H
