#ifndef singleton_hh
#define singleton_hh

class DbConnection
{
public:
    static int calls;
    static DbConnection* mDb;
    static DbConnection* getInstance();
    static void printConnection();
    ~DbConnection();
private:
    DbConnection();
};


#endif // singleton_hh
