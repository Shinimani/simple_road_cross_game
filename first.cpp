#include <bits/stdc++.h>
using namespace std;

class Player
{
    // private:
    public:
        int x,y; //x and y coordinates of the player
        Player(int width) //initialised at the center
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
                cars.push_front(true);
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
                    cout<<"#";
                else cout<<" ";
            }
            cout<<"\n";
        }
};
class game
{
    private:
        bool quit;
        int numLanes;
        int width;
        Player * player;
        vector<Lane*> map;
    public:
        game(int num = 10, int w=20)
        {
            numLanes=num;
            width=w;
            quit=false;
            for(int i =0;i<numLanes;i++)
            {
                map.push_back(new Lane(width));
            }
            player = new Player(width);
        }
        void Draw()
        {
            // system("clear");
            cout<<"\n";
            for(int y=0;y<numLanes;y++)
            {
                if(player->y==y)
                {
                    for(int x=0;x<width;x++)
                    {
                        if(map[y]->checkPos(x))
                        {
                            if(player->x==x)
                                cout<<"X";
                            else cout<<"#";
                        } else if(player->x==x)
                                cout<<"V";  
                        else cout<<" ";
                    }
                    cout<<"\n";
                } else map[y]->printLane();
            }
        }

        void Input()
        {

        }
        
        void Logic()
        {

        }

        void Run()
        {
            // while(!quit)
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
    game g(5,30);
    g.Run();
    // Lane trial(10);

    // trial.move();
    // trial.printLane();
    // trial.move();
    // trial.printLane();
    // trial.move();
    // trial.printLane();
    // trial.move();
    // trial.printLane();
    // trial.move();
    // trial.printLane();
    // trial.move();
    // trial.printLane();
    // trial.move();
    // trial.printLane();
    // trial.move();
    // trial.printLane();
    // trial.move();
    // trial.printLane();
    // trial.move();
    // trial.printLane();
    return 0;
}
