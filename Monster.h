#ifndef __MONSTER_H__
#define __MONSTER_H__

#include "cocos2d.h"

#include "Breed.h"

using namespace std;
using namespace cocos2d;

class InputComponent;
class GraphicComponent;
class GameScene;

class Monster
{
public:
	Monster();
	Monster(Breed& breed, InputComponent& inputComponent, GraphicComponent& graphicComponent, GameScene& gameScene);

	Breed&					GetBreed();
	void					Update(float dt);
	int						GetAttack();
	int						GetCountSprite();
	EventKeyboard::KeyCode	GetKeyCode();
	void					SetKeyCode(EventKeyboard::KeyCode keyCode);
	void					SetCountSprite(int countSprite);
	void					SetChangeKeyCode(bool stateKeyCode);

	void					onKeyPressed(EventKeyboard::KeyCode keyCode, Event* event);
	
	~Monster();

public:
	Breed&					m_heroes;
	InputComponent& 		m_inputComponent;
	GraphicComponent&		m_graphicComponent;
	GameScene&				m_gameScene;
	int						m_health;
	int						m_attack;
	string					m_filename;
	EventKeyboard::KeyCode	m_keyCode;
	int						m_countSpriteInVector;
	bool					m_changeKeyCode;
	cocos2d::Sprite*		m_sprite;
};

#endif