#include <iostream>

int ammo = 3;
bool basementChecked = false;
bool playing;
int choice;

//description functions

void describeBasement() {
    std::cout << "You find the basement stairs easily enough, creaking under your weight\n";
    std::cout << "as you creep slowly downwards. This building probably isn't up to OSHA\n";
    std::cout << "standards anymore, if it ever was.\n\n";
    std::cout << "You pull out your flashlight, tracing a path down a dark musty hallway.\n";
    std::cout << "Suddenly, movement! Your flashlight falls upon a pair of gnashing teeth,\n";
    std::cout << "glistening in the darkness.\n\n It's a zombie!\n";
}

int main() {
    //Main Menu
    std::cout << "Z O M B I E  Q U E S T :  W A R E H O U S E  E D I T I O N\n";
    std::string room = "menu";

    while (room == "menu") {
        std::cout << "1) Start\n";
        std::cout << "2) Quit\n";

        int menuChoice;
        std::cin >> menuChoice;

        if (menuChoice == 1) {
            room = "lookingForFood";
            playing = true;
        } else if (menuChoice == 2) {
            return 0;
        } else {
            std::cout << "Invalid input.\n";
        }
    }
    
    //Story Starts
    std::cout << "It's cold. You haven't eaten in two days. Neither of you have.\n";
    std::cout << "Your eyes hurt as you stumble into the warehouse, half blinded by the snow outside.\n";
    std::cout << "After a moment your eyes adjust. The warehouse is pretty smashed up but it's not like\n";
    std::cout << "you have a ton of options.\n\n";
    std::cout << "Beater gestures to a row of dilapidated shelves spanning the length of the warehouse.\n";
    std::cout << "\"I'm gonna check it out. You good on your own?\"\n";
    std::cout << "You nod.\n\n";

    while (playing) {

        while (room == "lookingForFood") {
            if (!basementChecked) {
                std::cout << "1) Check the basement\n";
            }
            std::cout << "2) Check the freezer\n";
            std::cout << "3) Check upstairs\n";

            std::cin >> choice;

            if (choice == 1 && !basementChecked) {
                describeBasement();
                room = "basement";
            } else if (choice == 2) {
                room = "outsideFreezer";
            } else if (choice == 3) {
                room = "upstairsHall";
            }
        }

        while (room == "basement") {
            std::cout << "1) Fight\n";
            std::cout << "2) Run\n";

            std::cin >> choice;

            if (choice == 1) {
                std::cout << "You draw your weapon, aim and fire. The zombie falls to the ground.\n";
                ammo--;
                std::cout << "Your ears ring as you search what remains of the basement.\n";
                std::cout << "There's a restroom at the end of the hallway, a boiler room, and a room\n";
                std::cout << "filled with filing cabinets. Useless. What a waste.\n";
                std::cout << "You head back upstairs\n";
                basementChecked = true;
                room = "lookingForFood";
            }

            else if (choice == 2) {
                std::cout << "You run!\nBut wait, which way should you go?\n";
                std::cout << "1) Left\n";
                std::cout << "2) Right\n";

                std::cin >> choice;

                if (choice == 1) {
                    std::cout << "Wrong way! The stairs were to the right.\n";
                    std::cout << "Now you're in some kind of boiler room.\n";
                    std::cout << "No way out, and the zombie is right behind you.\n";

                    std::cout << "1) Fight\n";

                    std::cin >> choice;

                    if (choice == 1) {
                        std::cout << "Back to the wall, you have no choice but to fight.\n";
                        std::cout << "You draw your 9mm and fire. First shot goes wide but\n";
                        std::cout << "the second finds its mark. The zombie drops.\n";
                        ammo -= 2;
                        std::cout << "The basement has a boiler room, a bathroom, and a room\n";
                        std::cout << "full of filing cabinets. Useless. Time to head back upstairs.\n\n";
                        basementChecked = true;
                        room = "lookingForFood";
                    }
                } else if (choice == 2) {
                    std::cout << "You sprint up the stairs and slam the door behind you\n\n";
                    std::cout << "That was a close call.\n\n";
                    basementChecked = true;
                    room = "lookingForFood";
                }     
            }
        }
    }
}