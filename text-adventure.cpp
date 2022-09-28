#include <iostream>

int ammo = 3;
bool basementChecked = false;
bool freezerChecked = false;
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

void describeOutsideFreezer() {
    std::cout << "The walk-in freezer door is massive, shiny chrome handle standing out against\n";
    std::cout << "its grimy surroundings. You try the handle and it gives way with surprising\n";
    std::cout << "ease. The door opens with a loud creak, and you immediately feel a burning\n";
    std::cout << "in your nostrils; the smell coming from the fridge is overwhelming. Rotten\n";
    std::cout << "food and worse, coating every surface in a rancid coagulated sludge.\n\n";
    std::cout << "As if the smell wasn't enough, you hear shambling footsteps coming from two\n";
    std::cout << "aisles over. You draw your pistol and wait.\n\n";
    std::cout << "Moments later, four zombies squeeze around the corner. As they see you their\n";
    std::cout << "jaws drop, blank eyes suddenly hard and lasered in on you.\n";
    std::cout << "This is very bad!\n";
}

void describeFreezer() {
    std::cout << "You run in and slam the freezer door behind you, almost slipping on the biosludge.\n";
    std::cout << "As bad as the smell was at first whiff, it really is ten times worse with the door\n";
    std::cout << "shut. The door rattles as hungry hands claw at it from the other side.\n";
    std::cout << "What are you going to do now?\n\n";
}

void describeCallForHelpFreezer() {
    std::cout << ""
}

void describeFightOutOfFreezer() {
    std::cout << "You can't wait in here forever. You take a deep breath, draw your 9mm, and kick the\n";
    std::cout << "door open. The impact knocks the zombies back, but they're on you almost immediately.\n\n";
    if (ammo == 3) {
        std::cout << "You drop one with your first shot. The others pile into the freezer, clambering\n";
        std::cout << "over the corpse of the fallen zombie. You back up all the way until you run into\n";
        std::cout << "a shelving unit, and take aim once again.\n\n";
        std::cout << "You shoot twice more, taking out the two on the left in a succession of headshots.\n";
        std::cout << "You're so amazed at your good aim that it almost doesn't register when your gun CLICKS\n";
        std::cout << "as you try to shoot the fourth one. It's kind of embarrassing that you keep forgetting\n";
        std::cout << "to load your gun when you go out of scavenging missions. It just keeps happening.\n\n";
        std::cout << "Anyway, the last zombie charges at you. Thinking fast, you knock over the shelving unit\n";
        std::cout << "behind you onto it, pinning it to the ground. It howls with rage, but you don't stick\n";
        std::cout << "around to listen, sprinting out the freezer door, slamming it shut behind you.\n";
        std::cout << "That was a close one.\n\n";
    } else if ( ammo == 2) {
        std::cout << "You get lucky with your first shot, taking out the zombie closest to the door.\n";
        std::cout << "His friends clamber over him, piling into the freezer. Your second shot also\n";
        std::cout << "lands, dropping a second. You aim and fire at a third, but even as they are\n";
        std::cout << "almost upon you your gun lets out nothing but a CLICK! Out of ammo.\n\n";
        std::cout << "Thinking fast, you try to knock over a shelving unit to block their path and\n";
        std::cout << "buy you time, but you're too slow! The two remaining zombies grab your shoulders\n";
        std::cout << "and push you down. You cry out but it's too late. One sinks its teeth into your\n";
        std::cout << "shoulder, coming away with a hunk of meat. Pain shoots down your arm. You struggle\n";
        std::cout << "but the other works its way under your jacket, grimy fingers clawing at your belly.\n";
        std::cout << "It leans over and bites, tearing a hole in your stomach. You feel distant, like you're\n";
        std::cout << "watching a movie of yourself, as you watch it tear your intestines out, gobbling them\n";
        std::cout << "down without even pausing to chew. The first zombie starts working on your neck but\n";
        std::cout << "you are so very very far away. And cold.\n";
        std::cout << "G A M E  O V E R  :  Y O U  H A V E  D I E D !\n";
    } else if (ammo = 1) {
        std::cout << "Your first shot lands, taking out the zombie in the doorway, but that's about as far\n";
        std::cout << "as you get. You aim and fire at the second zombie as it clambers through the door over\n";
        std::cout << "its fallen comrade, but hear only a CLICK! You're out of ammo.\n\n";
        std::cout << "The remaining three zombies pile into the freezer. You look around for a way out as they\n";
        std::cout << "close in on you. Thinking fast, you knock over a shelving unit, hoping it'll buy you time\n";
        std::cout << "to escape. It slows one zombie, but the other two just go around it. You back up, feeling\n";
        std::cout << "the cold metal of the shelving unit behind you. Nowhere else to go.\n\n";
        std::cout << "In desperation you try to run through, jumping over the shelving unit, and that's when they\n";
        std::cout << "grab you. One zombie has you by the wrist, while the zombie pinned under the shelving unit \n";
        std::cout << "manages to latch onto your ankle. You thrash to get away, but their claws just dig into you.\n";
        std::cout << "The third zombie gets your other wrist and pulls, hard. Ankle zombie takes a big bite out of\n";
        std::cout << "your leg. You kick and kick, but to no avail. The zombies on your arms pull and pull, until\n";
        std::cout << "you start to feel something in your shoulder popping and cracking. Slowly, horribly the \n";
        std::cout << "zombie begins to rip your arm off. You feel a terrible stretching sensation, like a wrench\n";
        std::cout << "was taken to your shoulder and twisted. Your vision grows dim from the pain, and you hear\n";
        std::cout << "faint screaming. In fact, your own screaming. You fall limp, and the three zombies go to\n";
        std::cout << "work on your body, tearing and biting away.\n";
        std::cout << "G A M E  O V E R  :  Y O U  H A V E  D I E D !\n";
    }
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
            if (!freezerChecked) {
                std::cout << "2) Check the freezer\n";
            }
            std::cout << "3) Check upstairs\n";
            
            std::cin >> choice;

            if (choice == 1 && !basementChecked) {
                describeBasement();
                room = "basement";
            } else if (choice == 2 && !freezerChecked) {
                describeOutsideFreezer();
                room = "outsideFreezer";
            } else if (choice == 3) {
                room = "upstairsHall";
            }

        }

        while (room == "basement") {
            if (ammo > 0) {
                std::cout << "1) Fight\n";
            }
            std::cout << "2) Run\n";

            std::cin >> choice;

            if (choice == 1 && ammo > 0) {
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

                while (room == "basement") {
                    std::cout << "1) Left\n";
                    std::cout << "2) Right\n";

                    std::cin >> choice;

                    if (choice == 1) {
                        std::cout << "Wrong way! The stairs were to the right.\n";
                        std::cout << "Now you're in some kind of boiler room.\n";
                        std::cout << "No way out, and the zombie is right behind you.\n";
                        
                        while (room == "basement") {
                            if (ammo > 0) {
                                std::cout << "1) Fight\n";
                            }
                            std::cout << "2) Die\n";
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
                            } else if (choice == 2) {
                                std::cout << "Well, this is it. Cornered and out of ammo. You cry out\n";
                                std::cout << "for help but Beater doesn't call back. The zombie shambles\n";
                                std::cout << "through the doorway, eyes locked on your throat. You try to\n";
                                std::cout << "strike it with the butt of your pistol but it just grabs your\n";
                                std::cout << "arm and takes a big bite. You scream in pain, dropping your\n";
                                std::cout << "weapon. The zombie latches onto you, and goes for your throat.\n";
                                std::cout << "You struggle but to no avail, as bites deep into your neck, tearing\n";
                                std::cout << "away a strip of flesh. Blood runs down your chest as your consciousness\n";
                                std::cout << "grows faint. You fall to the ground, and the zombie comes with you,\n";
                                std::cout << "holding you down. This is how you die, apparently, alone in some\n";
                                std::cout << "disgusting boiler room in a warehouse. This sucks.\n";
                                std::cout << "G A M E  O V E R  :  Y O U  H A V E  D I E D !\n";
                            }
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

        while (room == "outsideFreezer") {
            std::cout << "1) Fight\n";
            std::cout << "2) Shut yourself in the freezer\n";
            std::cout << "3) Call for help\n";

            std::cin >> choice;

            if (choice == 1) {
                std::cout << "You draw and fire.\n";
                if (ammo == 3) {
                    std::cout << "Your first shot catches the lead zombie in the neck.\n";
                    std::cout << "Makes a big hole but he doesn't seem bothered much.\n";
                    std::cout << "Second shot does the trick, clean through the brain.\n";
                    std::cout << "You waste your third shot on the far wall, and then CLICK!\n";
                    std::cout << "Gun's out of ammo. You might be fucked.\n";
                } else if (ammo == 2) {
                    std::cout << "You fire two shots and drop the lead zombie, but then CLICK!\n";
                    std::cout << "Must have forgotten to reload before leaving the house. Very, very bad.\n";
                } else if (ammo == 1) {
                    std::cout << "You get off one worthless shot on the lead zombie, and then CLICK!\n";
                    std::cout << "Gun's empty. You can't believe you left your spare ammo at home.\n";
                }

                std::cout << "Maybe you could run past them? Or maybe not.\n";

                while (room == "outsideFreezer") {
                    std::cout << "1) To the freezer\n";
                    std::cout << "2) Call for help\n";
                    std::cout << "3) Run past them\n";

                    std::cin >> choice;

                    if (choice == 1) {
                        describeFreezer();
                        room = "freezer";
                    } else if (choice == 2) {
                        describeCallForHelpFreezer();
                        room = "partnerGrabbed";
                    } else if (choice == 3) {
                        std::cout << "You try and run for it, shoving zombies out of your way.\n";
                        std::cout << "It seems like you're going to make it, when suddenly sharp pain!\n";
                        std::cout << "A zombie has you by the hair. He pulls you back with a horrible yank\n";
                        std::cout << "and falls upon you, teeth clicking in anticipation.\n";
                        std::cout << "You struggle with all your might but the zombie sinks his teeth into your\n";
                        std::cout << "neck. Slowly, horribly he rips your throat out. You gag on blood as he\n";
                        std::cout << "feasts upon your insides. The last thing you perceive before losing\n";
                        std::cout << "losing consciousness is the sound of smacking lips, and chewing.\n";
                        std::cout << "G A M E  O V E R  :  Y O U  A R E  D E A D !";
                        room = "";
                        playing = false;
                    }
                }
                
            } else if (choice == 2) {
                std::cout << "Definitely too many of them to fight\n";
                describeFreezer();
                room = "freezer";
            } else if (choice == 3) {
                describeCallForHelpFreezer();
                room = "partnerGrabbed";
            }
        }

        while (room == "freezer") {
            std::cout << "1) Wait.\n";
            if (ammo > 0) {
                std::cout << "2) Fight your way out.\n";
                std::cout << "3) Shoot self.\n";
            }
            std::cout << "4) Call for help\n";

            std::cin >> choice;

            if (choice == 1 && ammo > 0) {
                std::cout << "You wait. Zombies bang on the door. This does nothing useful.\n";
            } else if (choice == 1) {
                std::cout << "You wait. Eventually you starve.\n";
                std::cout << "G A M E  O V E R  :  Y O U  A R E  D E A D !\n";
                room = "";
                playing = false;
            } else if (choice == 2 && ammo > 0) {
                describeFightOutOfFreezer();
                if (ammo == 3) {
                    room = "lookingForFood";
                    ammo = 0;
                    freezerChecked = true;
                } else {
                    room = "";
                    playing = false;
                }
            } else if (choice == 4) {
                std::cout << "You yell and yell. Minutes pass.\n";
                std::cout << "No response, from Beater or anyone. Only scraping and thumping\n";
                std::cout << "from zombies outside the door. Guess they can't hear you in here.\n";
            }
        }
    }
}