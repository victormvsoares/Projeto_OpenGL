#include "MyScene.h"
#include <iostream>

MyScene::MyScene()
{

}

MyScene::~MyScene()
{

  std::cout << "MyScene DESTRUCTOR" << std::endl;

}

void MyScene::update()
{
  // afeta o resultado final da tela

  std::cout << "MyScene update" << std::endl;

}