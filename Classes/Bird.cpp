/*
 * Bird.cpp
 *
 *  Created on: Dec 29, 2014
 *      Author: Azim Momin
 */

#include "Bird.h"
#include "Definitions.h"

USING_NS_CC;

Bird::Bird( cocos2d::Layer *layer )
{
	visibleSize = Director::getInstance()->getVisibleSize();
	origin = Director::getInstance()->getVisibleOrigin();

	flappyBird = Sprite::create( "Ball.png" );
	flappyBird->setPosition( visibleSize.width / 2 + origin.x, visibleSize.height/ 2 + origin.y );

	auto flappyBody = PhysicsBody::createCircle( flappyBird->getContentSize().width/2 );
	flappyBody->setCollisionBitmask( BIRD_COLLISION_BITMASK );
	flappyBody->setContactTestBitmask( true );
	flappyBird->setPhysicsBody( flappyBody );

	layer->addChild( flappyBird, 100 );

	isFalling = true;
}

void Bird::Fall( )
{
	if ( isFalling == true )
	{
		flappyBird->setPositionX( visibleSize.width / 2 + origin.x );
		flappyBird->setPositionY( flappyBird->getPositionY() - ( BIRD_FALLING_SPEED * visibleSize.height ) );
	}
	else
	{
		flappyBird->setPositionX( visibleSize.width / 2 + origin.x );
		flappyBird->setPositionY( flappyBird->getPositionY() + ( BIRD_FALLING_SPEED * visibleSize.height ) );
	}
}
