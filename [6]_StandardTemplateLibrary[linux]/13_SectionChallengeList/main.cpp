#include <iostream>
#include <list>
#include <algorithm>
#include <iomanip>
#include <string>

class Music
{
private:
    std::string song_name;
    std::string artist;
    double rating;
public:
    Music();
    Music(std::string song_name, std::string artist, double rating)
    :song_name{song_name}, artist{artist}, rating{rating}
    {

    }
    ~Music(){};
    friend std::ostream &operator<<(std::ostream &os, const Music &rhs)
    {
        os << std::setw(15) << std::left << rhs.song_name
        << std::setw(15) << std::left << rhs.artist
        << std::setw(10) << std::right << rhs.rating << std::endl;
        return os;
    }

    bool operator==(const Music &rhs)
    {
        return (this->song_name == rhs.song_name && this->artist == rhs.artist && this->rating == rhs.rating);
    }


};

void print_choices();
void print_list_of_song(const std::list<Music> &music_list);
void add_song(std::list<Music> &music_list,std::list<Music>::iterator &it);
void play_first_song(std::list<Music> &music_list, std::list<Music>::iterator &it);
void play_last_song(std::list<Music> &music_list, std::list<Music>::iterator &it);
void next_song(std::list<Music> &music_list, std::list<Music>::iterator &it);
void previous_song(std::list<Music> &music_list, std::list<Music>::iterator &it);

int main()
{
    std::list<Music> music_list {
        {"Tala", "Janna Gives", 4.5},
        {"Kabute", "JK Labajo", 4.7},
        {"Sigla", "Kuya Kim", 5}
    };
    std::list<Music>::iterator it = music_list.begin();

    char c;
    bool end_program {false};

    print_list_of_song(music_list);
    std::cout << std::endl;
    print_choices();
    std::cin >> c;

    while(end_program == false)
    {
        switch(c)
        {
            case 'F':
            case 'f':
                std::cout << std::endl << "Currently playing -----------------------" << std::endl;
                play_first_song(music_list, it);
                print_choices();
                std::cin >> c;
            break;
            case 'N':
            case 'n':
                std::cout << std::endl << "Currently playing -----------------------" << std::endl;
                next_song(music_list, it);
                print_choices();
                std::cin >> c;
            break;
            case 'P':
            case 'p':
                std::cout << std::endl << "Currently playing -----------------------" << std::endl;
                previous_song(music_list, it);
                print_choices();
                std::cin >> c;
            break;
            case 'A':
            case 'a':
                add_song(music_list, it);
                std::cout << std::endl << "Currently playing -----------------------" << std::endl;
                play_last_song(music_list, it);
                print_choices();
                //play song
                std::cin >> c;
            break;
            case 'L':
            case 'l':
                print_list_of_song(music_list);
                print_choices();
                std::cin >> c;
            break;
            default:

            break;
        };
    }

    return 0;
}

void print_choices()
{
    std::cout << "F - " << "Play first song" << std::endl;
    std::cout << "N - " << "Play next song" << std::endl;
    std::cout << "P - " << "Play Previous song" << std::endl;
    std::cout << "A - " << "Add and play a new Song at current location" << std::endl;
    std::cout << "L - " << "List the current playlist" << std::endl;
    std::cout << "*************************************************" << std::endl;
    std::cout << "Enter a selection (Q to quit)" << std::endl;
}

void print_list_of_song(const std::list<Music> &music_list)
{
    int num {1};
    for(const auto &mem:music_list)
    {
        std::cout << "[" << num << "]" << mem;
        num++;
    }
}

void add_song(std::list<Music> &music_list,std::list<Music>::iterator &it)
{
    std::string song ;
    std::string artist;
    int rating {0};

    std::cout << "Enter song name" << std::endl;
    std::cin >> song;

    std::cout << "Enter artist name" << std::endl;
    std::cin >> artist;

    std::cout << "Enter rating" << std::endl;
    std::cin >> rating;

    music_list.emplace_back(song,artist,rating);

}



void play_first_song(std::list<Music> &music_list, std::list<Music>::iterator &it)
{
    it = music_list.begin();
    std::cout << *it << std::endl;
}



void play_last_song(std::list<Music> &music_list, std::list<Music>::iterator &it)
{
    it = music_list.begin();
        for(size_t i = 0; i < music_list.size()-1; i++)
            it++; //equates iterator to the last song
    std::cout << *it << std::endl;
}



void next_song(std::list<Music> &music_list, std::list<Music>::iterator &it)
{
    if(*it == music_list.back())
    {
        it = music_list.begin();
        std::cout << *it << std::endl;
    }
    else
    {
        it++;
        std::cout << *it << std::endl;
    }
}



void previous_song(std::list<Music> &music_list, std::list<Music>::iterator &it)
{
    if(*it == music_list.front())
    {
        it = music_list.begin();
        for(size_t i = 0; i < music_list.size()-1; i++)
            it++; //equates iterator to the last song
        std::cout << *it << std::endl;
    }
    else
    {
        it--;
        std::cout << *it << std::endl;
    }
}




