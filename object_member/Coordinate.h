class Coordinate
{
public:
    Coordinate(int x, int y);
    ~Coordinate();
    void setX(int x);
    int getX();
    void setY(int Y);
    int getY();
private:
    int m_iX;
    int m_iY;
};
