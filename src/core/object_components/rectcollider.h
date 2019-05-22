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

        CollisionDetails(RectCollider* object_1, RectCollider* object_2, float depth_x, float depth_y) :
        collider1(object_1), collider2(object_2), depth_x(depth_x), depth_y(depth_y)
        {}

        RectCollider* collider1 = 0;
        RectCollider* collider2 = 0;

        float depth_x;
        float depth_y;


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
        sf::Vector2f velocity;

        bool isDynamic = true;
        bool isActive = true;
        bool isPossibleCollision = true;

     private:
        bool displayed = false;

    };

}
#endif // RECTCOLLIDER_H
