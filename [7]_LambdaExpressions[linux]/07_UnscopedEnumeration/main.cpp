#include <iostream>
#include <vector>

// Test1 start
enum class Grocery_Item {Milk = 350, Bread = 250, Apple = 132, Orange = 100};

std::ostream &operator<<(std::ostream &os, Grocery_Item grocery_item)
{
    std::underlying_type_t<Grocery_Item> value = std::underlying_type_t<Grocery_Item>(grocery_item);
    switch(grocery_item)
    {
        case Grocery_Item::Milk:
            os << "Milk";
            break;
        case Grocery_Item::Bread:
            os << "Bread";
            break;
        case Grocery_Item::Apple:
            os << "Apple";
            break;
        case Grocery_Item::Orange:
            os << "Orange";
            break;
        default:
            os << "Invalid item";
    }

    os << " : " << value;
    return os;
}

bool is_valid_grocery_item(Grocery_Item grocery_item)
{
    switch(grocery_item)
    {
        case Grocery_Item::Milk:
        case Grocery_Item::Bread:
        case Grocery_Item::Apple:
        case Grocery_Item::Orange:
            return true;
        default:
            return false;
    }
}

void display_grocery_list(const std::vector<Grocery_Item> &grocery_list)
{
    std::cout << "Grocery List" << "\n============================" << std::endl;
    int invalid_item_count {0};
    int valid_item_count {0};
    for(Grocery_Item grocery_item: grocery_list)
    {
        std::cout << grocery_item << std::endl;

        if(is_valid_grocery_item(grocery_item))
        {
            valid_item_count++;
        }
        else
        {
            invalid_item_count++;
        }
    }

    std::cout << "============================" << std::endl;
    std::cout << "Valid Items: " << valid_item_count << std::endl;
    std::cout << "Invalid Items: " << invalid_item_count << std::endl;
    std::cout << "Total items: " << valid_item_count + invalid_item_count << std::endl;
}
// test1 end

//test2
class Player
{
    friend std::ostream &operator<<(std::ostream &os, const Player &p);

public:
    enum class Mode {Attack, Defense, Idle};
    enum class Direction {North, South, East, West};

private:
    std::string name;
    Mode mode;
    Direction direction;

public:
    Player(std::string name, Mode mode = Mode::Idle, Direction direction = Direction::North)
        :name{name}, mode{mode}, direction{direction}
        {

        }
    std::string get_name() const
    {
        return name;
    }
};

std::string get_player_mode(Player::Mode mode)
{
    std::string result;
    switch(mode)
    {
        case Player::Mode::Attack:
            result = "Attack";
        case Player::Mode::Defense:
            result = "Defense";
        case Player::Mode::Idle:
            result = "Idle";
    };

    return result;
}

std::string get_player_direction(Player::Direction direction)
{
    std::string result;
    switch(direction)
    {
        case Player::Direction::North:
            result = "North";
            break;
        case Player::Direction::South:
            result = "South";
            break;
        case Player::Direction::East:
            result = "East";
            break;
        case Player::Direction::West:
            result = "West";
            break;
    }

    return result;
}

std::ostream &operator<<(std::ostream &os, const Player &p)
{
    os << "Player name: " << p.get_name() << "\n"
       << "Player mode: " << get_player_mode(p.mode) << "\n"
       << "Player direction: " << get_player_direction(p.direction) << "\n";

    return os;
}

// function prototype
void test_1();
void test_2();

int main()
{
    test_1();
    test_2();
    std::cout << "\n";
    return 0;
}

void test_1()
{
    std::cout << "---test1---------------------------\n" << std::endl;

    std::vector<Grocery_Item> shopping_list;

    shopping_list.push_back(Grocery_Item::Milk);
    shopping_list.push_back(Grocery_Item::Milk);
    shopping_list.push_back(Grocery_Item::Apple);
    shopping_list.push_back(Grocery_Item::Apple);
    shopping_list.push_back(Grocery_Item::Orange);

    int Helicopter {1000};

    shopping_list.push_back(Grocery_Item(Helicopter));
    shopping_list.push_back(Grocery_Item(350));

    display_grocery_list(shopping_list);

}
void test_2()
{
    std::cout << "---test2---------------------------\n" << std::endl;

    Player p1("cloud Strife", Player::Mode::Attack, Player::Direction::North);
    Player p2("Tifa Lockhart", Player::Mode::Defense, Player::Direction::West);
    Player p3("Sephiroth", Player::Mode::Idle, Player::Direction::South);

    std::cout << p1 << std::endl;
    std::cout << p2 << std::endl;
    std::cout << p3 << std::endl;
}
