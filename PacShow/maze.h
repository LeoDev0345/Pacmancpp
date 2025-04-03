#pragma once
#include <iostream>
#include <string>
#include <array>
#include <map>
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;

class Maze
{
public:     
	//carte du labyrinthe
    static Maze* instance;
      string mazePattern[25] =
    { "#######################" , 
      "#Q   S    W#Q    S   W#" , 
      "#@### #### # #### ###@#" , 
      "# ### #### # #### ### #" , 
      "#D   X S  A A  S X   F#" , 
      "# ### # ####### # ### #" , 
      "#E   F# ####### #D   R#" , 
      "##### #E  W#Q  R# #####" , 
      "##### #### # #### #####" ,  
      "##### #Q  AGA  W# #####" ,
      "##### # ###-### # #####" , 
      "0====X F#BP*IC#D X====0" , 
      "##### # ####### # #####" ,    
      "##### #D0001000F# #####" , 
      "##### # ####### # #####" , 
      "##### # ####### # #####" , 
      "#Q   X A  W#Q  A X   W#" , 
      "# ### #### # #### ### #" , 
      "#E W#D S  AcA  S F#Q R#" , 
      "### # # ####### # # ###" , 
      "#Q A R#E  W#Q  R#E A W#" , 
      "# ######## # ######## #" ,
      "#@######## # ########@#" , 
      "#E        A A        R#" , 
      "#######################" };

     
      string mazeGrid[23][25];     
      CircleShape  dotsArr[222]; 
      int dotsCount = 0;

    Maze()
    {
        cout << "Classe labyrinthe OK"<<endl;
        instance = this;         
    }
    ~Maze()
    {
     
    }


    void initMaze()
    {      
        int colum = 0; int row = 0;      
        for (int i = 0; i < (Maze::mazeW*Maze::mazeH) ; i++)
        {              
            if (colum >= Maze::mazeW)
            {
                colum = 0; row++;

            }
            string str = mazePattern[row].substr(colum, 1);
            mazeGrid[colum][row] = str;         
            if (str == "#")
            {
     
                wallShapeCount++;
            }
            else
            {
                if (isDot(str) )                   
                {                
                 dotsArr[dotsCount] = getDots(colum, row,str);                 
                 dotsCount++;
                }                
            }
            colum++;
        }       
    }

    void drawWall( RenderWindow *window )
    {
        int i = 0;
        for ( i = 0; i < wallShapeCount; i++)
        {          
       
            if (i < dotsCount)
            {
                window->draw(dotsArr[i]);
            }            
        }        
    }

    void redrawDot()
    {
        for (int i = 0; i < dotsCount; i++)
        {           
            CircleShape dot = dotsArr[i];
            dot.setFillColor(Color::Yellow);
            dotsArr[i] = dot;          
        }
    }
    

private:
    sf::RectangleShape wallShapeArr[23*24];    
    static int mazeW, mazeH;
    int wallShapeCount = 0;

    bool isDot(string str)
    {
        return str != "0" && str != "=" &&
               str != "B" && str != "P" &&
               str != "I" && str != "C" && 
               str != "G" && str != "*" && 
               str != "1" && str != "-" && str!="c";
    }

    RectangleShape getWallShape(int col,int row)
    {
        RectangleShape rectangle;
        rectangle.setSize(sf::Vector2f(26, 26));// 30 28
        rectangle.setFillColor(Color::Blue);
        rectangle.setOutlineColor(sf::Color::Black);
        rectangle.setOutlineThickness(.5);
        rectangle.setPosition(col*30, row*30);
        return rectangle;
    }     
    CircleShape getDots(int col, int row, string str)
    {
        float radius = 3;  int offset = 12;
        Color color = Color::Yellow;
        if (str == "@")
        {
            radius = 10; offset = 6;          
        }
        CircleShape _dot;
        _dot.setRadius(radius);
        _dot.setFillColor(color);
        _dot.setPosition(col * 30 + offset, row * 30 + offset);      
        return _dot;
    }

};

Maze *Maze::instance;
int Maze::mazeW = 23;
int Maze::mazeH = 25;
 