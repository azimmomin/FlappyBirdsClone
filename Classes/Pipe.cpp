/*
 * Pipe.cpp
 *
 *  Created on: Dec 29, 2014
 *      Author: akbar
 */

#include "Pipe.h"
#include "Definitions.h"

USING_NS_CC;

Pipe::Pipe()
{
	visibleSize = Director::getInstance()->getVisibleSize();
	origin = Director::getInstance()->getVisibleOrigin();
}

void Pipe::SpawnPipe( cocos2d::Layer *layer )
{
	CCLOG( "Spawn Pipe" );
}

