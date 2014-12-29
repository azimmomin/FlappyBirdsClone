/*
 * Pipe.h
 *
 *  Created on: Dec 29, 2014
 *      Author: akbar
 */

#ifndef PIPE_H_
#define PIPE_H_

#include "cocos2d.h"

class Pipe
{
public:
	Pipe();
	void SpawnPipe( cocos2d::Layer *layer);
private:
	cocos2d::Size visibleSize;
	cocos2d::Vec2 origin;
};

#endif // __PIPE_H__

