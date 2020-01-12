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
        deque<bool> cars;   //will contain the set of cars in that lane, have made with deque, can be made with bitset also, will impletement that later
        int width_;         
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
            if(rand()%6==1)
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
        void printLane()
        {
            for(int i=0;i<width_;i++)
            {
                if(cars[i])
                    cout<<"1";
                else cout<<"0";
            }
            cout<<"\n";
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

int main()
{
    srand (time(NULL));

    Lane trial(10);

    trial.move();
    trial.printLane();
    trial.move();
    trial.printLane();
    trial.move();
    trial.printLane();
    trial.move();
    trial.printLane();
    trial.move();
    trial.printLane();
    trial.move();
    trial.printLane();
    trial.move();
    trial.printLane();
    trial.move();
    trial.printLane();
    trial.move();
    trial.printLane();
    trial.move();
    trial.printLane();
    return 0;
}
