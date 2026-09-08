# include <iostream>

using namespace std;

struct Card
{
    int face;
    int shape;
    int color;
};


int main(int argc, char const *argv[])
{
    Card cards[52] = {{1,0,1},{3,1,1},{5,1,1},{4,0,0},{3,1,1},{8,0,0}};

    cout<<"Size of: "<< sizeof(cards)<<endl;

    for(Card c: cards){
        cout<<"======================="<<endl;
        cout<<"face: "<<c.face<<endl;
        cout<<"shape: "<<c.shape<<endl;
        cout<<"color: "<<c.color<<endl;
    }
    return 0;
}
