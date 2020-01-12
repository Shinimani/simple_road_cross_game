#include <bits/stdc++.h>
using namespace std;

class player
{
    private:
        int x,y; //x and y coordinates of the player
    public:
        player(int width) //initialised at the center
        {
            x=width/2;
            y=0;
        }
};

class Lane
{
    private:
        deque<bool> cars;
        int width_;   //will contain the set of cars in that lane
    public:
        Lane(int width)     //initialised with all false, i.e. no cars
        {
            width_=width;
            for(int i=0;i<width_;i++)
            {
                cars.push_front(false);
            }
        }

        void move()
        {
            if(rand()%6==0)
            {
                cars.push_front(true);
            } else cars.push_front(false);

            cars.pop_back();
        }

        bool checkPos(int pos)
        {
            if (pos<width_)
                return cars[pos];
            else return false;
        }
};
class game
{
    private:
        bool quit;
    public:
        
        void Draw()
        {

        }

        void Input()
        {

        }
        
        void Logic()
        {

        }

        void Run()
        {
            while(!quit)
            {
            Input();
            Draw();
            Logic();
            }
        }

};

