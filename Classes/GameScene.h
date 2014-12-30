/*
 * GameScene.h
 *
 *  Created on: Dec 28, 2014
 *      Author: akbar
 */

#ifndef __GAME_SCENE_H__
#define __GAME_SCENE_H__

#include "cocos2d.h"
#include "Pipe.h"
#include "Bird.h"

class GameScene : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();

    // implement the "static create()" method manually
    CREATE_FUNC(GameScene);
private:
    void SetPhysicsWorld( cocos2d::PhysicsWorld *world ) { sceneWorld = world; };
    void SpawnPipe( float dt );

    cocos2d::PhysicsWorld *sceneWorld;
    Pipe pipe;
    Bird *bird;
};

#endif // __GAME_SCENE_H__
