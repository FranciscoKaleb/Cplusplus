#include <iostream>
#include <vector>
#include <string>

// used for test 1
enum Direction {North = 0, South = 1, East = 2, West};

//enum Street {Main, North, Elm} // error cant use North again

// Used for test1
// This function expects a Direction parameter
// and returns its string representation
std::string direction_to_string(Direction direction)
{
    std::string result;

    switch (direction)
    {
        case North:
            result = "North";
            break;
        case South:
            result = "South";
            break;
        case East:
            result = "East";
            break;
        case West:
            result = "West";
            break;
        default:
            result = "Unknown direction";
    }

    return result;
}





// test2
enum Grocery_Item {Milk, Bread, Apple, Orange};

std::ostream &operator<<(std::ostream &os, Grocery_Item grocery_item)
{
    switch (grocery_item)
    {
        case Milk:
            os << "Milk";
            break;
        case Bread:
            os << "Bread";
            break;
        case Apple:
            os << "Apple";
            break;
        case Orange:
            os << "Orange";
            break;
        default:
            os << "Invalid item";
    }

    return os;
}

bool is_valid_grocery_item(Grocery_Item g_i)
{
    switch(g_i)
    {
        case Milk:
        case Bread:
        case Apple:
        case Orange:
            return true;
        default:
            return false;
    }
}

void display_grocery_list(const std::vector<Grocery_Item> &grocery_list)
{
    std::cout << "Grocery List" << "\n==============================" << std::endl;
    int invalid_item_count {0};
    int valid_item_count {0};
    for(Grocery_Item g_i: grocery_list)
    {
        std::cout << g_i << std::endl;

        if(is_valid_grocery_item(g_i))
        {
            valid_item_count++;
        }
        else
        {
            invalid_item_count++;
        }
    }

    std::cout << "=======================================" << std::endl;
    std::cout << "Valid item: " << valid_item_count << std::endl;
    std::cout << "Invalid item: " << invalid_item_count << std::endl;
    std::cout << "Total items: " << valid_item_count + invalid_item_count << std::endl;
}

// test3

enum State {Engine_Failure, Inclement_Weather, Nominal, Unknown};
enum Sequence {Abort, Hold, Launch};

std::istream &operator>>(std::istream &is, State &state)
{
    // int user_input will work too
    std::underlying_type_t<State> user_input;
    is >> user_input;

    switch(user_input)
    {
        case Engine_Failure:
        case Inclement_Weather:
        case Nominal:
        case Unknown:
            state = State(user_input);
            break;
        default:
            std::cout << "User input is not a valid launch state" << std::endl;
            state = Unknown;
    }

    return is;
}

std::ostream &operator<<(std::ostream &os, const Sequence &sequence)
{
    switch(sequence)
    {
        case Abort:
            os << "Abort";
            break;
        case Hold:
            os << "Hold";
            break;
        case Launch:
            os << "Launch";
            break;
    }

    return os;
}

void initiate(Sequence sequence)
{
    std::cout << "Initiate " << sequence << " sequence!" << std::endl;
}

void test_1();
void test_2();
void test_3();

int main()
{
    // enumeration - user defined data type

    // motivation
    // to avoid using magic numbers in if statements
    // causes low readability ang high number of logic errors

    // switch statements are mostly used in enumerations
    // better readability, equal access time for each case -- wont have to read each if

    test_1();
    //test_2();
    //test_3();
    return 0;
}

void test_1()
{
    std::cout << "\n---Test1------------------------------\n" << std::endl;
    Direction direction {South}; // can only have 4 values 0 - North, 1 - South, 2 - East, 3 - West

    std::cout << "\nDirection: " << direction << std::endl;
    std::cout << direction_to_string(direction) << std::endl;

    direction = West;
    std::cout << "\nDirection: " << direction << std::endl;
    std::cout << direction_to_string(direction) << std::endl;

    direction = Direction(200);
    std::cout << "\nDirection: " << direction << std::endl;
    std::cout << direction_to_string(direction) << std::endl;

    direction = static_cast<Direction>(100);
    std::cout << "\nDirection" << direction << std::endl;
    std::cout << direction_to_string(direction) << std::endl;

    std::string name {"kaleb"};
    int num {100};
    double m = static_cast<double>(num);

    m = 23.44;
    std::cout << m << std::endl;


}

void test_2()
{
    std::vector<Grocery_Item> shopping_list;

    shopping_list.push_back(Apple);
    shopping_list.push_back(Apple);
    shopping_list.push_back(Milk);
    shopping_list.push_back(Orange);

    int Helicopter {1000};

    shopping_list.push_back(Grocery_Item(Helicopter));

    display_grocery_list(shopping_list);
}


void test_3()
{
    std::cout << "\n---test3----------------------------\n" << std::endl;

    State state;
    std::cout << "Launch state: " ;
    std::cin >> state; // accepts 0-2

    switch(state)
    {
        case Engine_Failure:
        case Unknown:
            initiate(Abort);
            break;
        case Inclement_Weather:
            initiate(Hold);
            break;
        case Nominal:
            initiate(Launch);
            break;
    }
}