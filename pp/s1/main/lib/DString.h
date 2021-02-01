
class DString{
private:
    char tst[1024];
public:
    DString();
    DString(char teste[]);
    void copy(DString obj);
    void setStr(DString obj);
    void setStr(char teste[]);
    void concat(DString obj);
    char* getStr();
};
