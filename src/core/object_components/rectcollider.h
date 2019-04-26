#ifndef RECTCOLLIDER_H
#define RECTCOLLIDER_H
#include "gameobjectcomponent.h"
#include "SFML/Graphics.hpp"
#include <iostream>




namespace engine
{
    class RectCollider;

    struct CollisionDetails
    {
        /*
        CollisionDetails(BoxCollider* obj1, BoxCollider* obj2, float depth, sf::Vector2f trajectory) :
        collider1(obj1), collider2(obj2), depth(depth), collisionTrajectory(trajectory)
        {};

        BoxCollider* collider1 = 0;
        BoxCollider* collider2 = 0;

        float depth;
        sf::Vector2f collisionTrajectory;
        */
    };


    class RectCollider : public GameObjectComponent
    {
    public:
        RectCollider();
        ~RectCollider();

        void setCollider(float x_1, float y_1, float x_2, float y_2);
        void setColliderBySprite();

        void display();
        void hide();

        sf::Vector2f leftUpper;
        sf::Vector2f rightBottom;

        bool isDynamic = true;
        bool isActive = true;

     private:
        bool displayed = false;

    };

}
#endif // RECTCOLLIDER_H
