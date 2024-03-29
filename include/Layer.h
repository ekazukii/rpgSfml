#ifndef LAYER_H
#define LAYER_H

#include <SFML/Graphics.hpp>

class Layer : public sf::Drawable, public sf::Transformable
{
    public:
        bool load(const std::string& tileset, sf::Vector2u tileSize, const int* tiles, unsigned int width, unsigned int height);

    private:
        virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
        sf::VertexArray m_vertices;
        sf::Texture m_tileset;
};

#endif // TILEMAP_H
