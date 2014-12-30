/*
 * Bird.h
 *
 *  Created on: Dec 30, 2014
 *      Author: akbar
 */

#ifndef __BIRD_H__
#define __BIRD_H__

#include "cocos2d.h"

class Bird
{
public:
	Bird( cocos2d::Layer *layer );

private:
	cocos2d::Size visibleSize;
	cocos2d::Vec2 origin;

	cocos2d::Sprite *flappyBird;
};

#endif /* __BIRD_H__ */
