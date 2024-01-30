#include <iostream>
#include "fruit.hpp"

void RawPtrExample(const Fruit &favFruit);
void DynamicPtrExample();

int main()
{
    ////////////////////////////////////////////////////////
    // 🚩BE SURE TO FINISH fruit.hpp before progressing🚩
    ////////////////////////////////////////////////////////

    ////////////////////////////////////////////////////////
    // Part 2: Raw Pointers
    ////////////////////////////////////////////////////////
    // ⭐TODO: Instantiate a new fruit object that is called your favorite fruit with the parameterized constructor

    // ⭐TODO: Jump to RawPtrExample function and finish it
    // When its done call the function below and pass the Fruit object you instantiated above

    ////////////////////////////////////////////////////////
    // Part 3: Dynamic Pointers
    ////////////////////////////////////////////////////////
    // ⭐TODO: Jump to RawPtrExample function and finish it
    DynamicPtrExample();

    return 0;
}

void RawPtrExample(const Fruit &favFruit)
{
    // ⭐TODO: Using RAW pointers, create a pointer to the object your instantiated above

    // ⭐TODO: Print to the terminal the the strawberry objects classification_, color_, and tier_

    // ⭐TODO: Using the Raw Pointer Print to the terminal the the strawberry objects classification_, color_, and tier_

    // ⭐TODO: Using the Raw Pointer change the tier to 'F' tier

    // ⭐TODO: Print to the terminal the strawberry objects tier_

    // ⭐TODO: Using the Raw Pointer Print to the terminal the the strawberry objects tier_

    // 💡Reflect: With your partner discuss what happened and why it happened. Write it below in a comment
}

void DynamicPtrExample()
{
    // ⭐TODO: USING DYNAMIC POINTERS, instantiate a new fruit object that is called your second favorite fruit with the DEFAULT constructor
    // ⚠ DO NOT USE SHARED OR UNIQUE POINTERS

    // ⭐TODO: Change the classification_, color_, and tier_

    // ⭐TODO: Print to the terminal the objects memory address

    // ⭐TODO: Print to the terminal the objects classification_, color_, and tier_

    // ⭐TODO: Change the objects tier_ to 'C'

    // ⭐TODO: Print to the terminal the objects classification_, color_, and tier_

    // ⭐TODO: Do the necessary clean up since you used dynamic pointers

    // 💡Reflect: With your partner discuss what happened and some benefits and drawbacks to using dynamic memory allocation. Write it below in a comment
}