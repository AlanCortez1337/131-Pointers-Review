#include <string>
#include <iostream>

class Fruit
{
public:
    Fruit() : classification_("FRUIT"), color_("COLORFUL"), tier_('Z') {}
    // ⭐TODO: create a parameterized constructor that initializes all of the private member variables

    // ⭐TODO: create a destructor that prints the fruit name and the following sentence " has been eaten!"

    // Accessors
    std::string GetClassification() const
    {
        return classification_;
    }

    std::string GetColor() const
    {
        return color_;
    }

    char GetTier() const
    {
        return tier_;
    }

    // Mutators
    void SetClassification(const std::string &classification)
    {
        classification_ = classification;
    }

    void SetColor(const std::string &color)
    {
        color_ = color;
    }

    void SetClassification(char tier)
    {
        tier_ = tier;
    }

private:
    std::string classification_;
    std::string color_;
    char tier_;
};