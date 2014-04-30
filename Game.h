#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
#include <string>
#include "Drawer.h"
#include "EventHandler.h"
#include "Object.h"
#include "type.h"
class Game
{
private:
    //Data Field
    eGameStatus GameStatus = preStart;

    SDL_Window* window = NULL; //SDL����ָ��
    SDL_Surface* screenSurface = NULL;//SDL����ָ��
    SDL_Renderer* screenRen = NULL;//SDL��Ⱦ��
    SDL_TimerID mainTimer;//SDL��ʱ��
    SDL_Event Event;//SDL�¼��ṹ
    SDL_Texture *background = nullptr;

    BackGround *objBackground = nullptr;
    Object *objTextReady = nullptr;
    Object *objTextOver = nullptr;
    Ground *objGround = nullptr;
    ImageScore *imgScore = nullptr;
    PipeSetManager *mgnPipeSet = nullptr;
    Bird *objBird = nullptr;
    int Score = 0;


    //End

    //Methon
    void ObjectInit();
    void SetGameStatus(eGameStatus _GameStatus);
    void Motion();
    //EventHandle
    void EventHandler();
    void KeyEventHandler(SDL_KeyboardEvent* KeyEvent);
    void MouseEventHandler(){;};
    //End EventHandle
    //Drawer
    void Drawer();
    void EnvironmentDrawer();
    void ObjectDrawer();
    //End Drawer
    void Collision();
    //SomeUnitily
    SDL_Texture* LoadImage(std::string file);
    //End Methon
public:
    //Data Field




    //End

    //Methon
    Game();//init Game
    void run();

    //End

};


#endif // GAME_H_INCLUDED