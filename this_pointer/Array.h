class Array
{
public:
    Array(int len);
    ~Array();
    Array* setLen(int len);
    int getLen(void);
    Array* printInfo();
private:
    int len;
};
