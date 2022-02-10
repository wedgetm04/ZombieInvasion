#include <iostream>
#include <string>
#include "Project 2.h"


int main() {
    int restart;
    do {

        std::cout << "If you played the first zombie invasion, you're in for a treat! It'll be like the first time around... only worse." << std::endl;
        std::cout << "What is your name?" << std::endl;

        std::string name;
        std::cin >> name;

        std::cout << "Great to meet you, " << name << "!" << std::endl;
        std::cout << "Now you get to pick one perk. Would you like the charming personality, so other survior groups are more likely to help you?" << std::endl;
        std::cout << "Or would you prefer the stand-offish personality, which gives you a higher chance of survival in battle?" << std::endl;

        int answer1;
        answer1 = prompt_user("1. Charming, or 2. Stand-offish.");

        std::cout << " " << std::endl;

        user_2choice(answer1, "Other people find you approachable and trustworthy!", "Maybe you'll actually make it out of this alive and kicking.");

        std::cout << "Let's go meet the team, shall we?" << std::endl;

        int brk0;
        brk0 = break_txt();

        std::cout << "First we see Rachel, she's the one who plans where we're safely sleeping that night. Best not to make her mad. She also sets up camp." << std::endl;
        std::cout << "Next we have Henry, he's the weapon master. He can make any scraps into a useful weapon, essential for survival!" << std::endl;
        std::cout << "Third, there's Xavier. He's the hunter and gatherer, he also cooks when we have the luxury of a fire or stove." << std::endl;
        std::cout << "Last but not least, the jack of all trades. Hauna, she knows the land by the back of her hand and has great strategy for survival." << std::endl;

        int brk1;
        brk1 = break_txt();

        std::cout << "We won't survive without each other, so we have to keep in mind that we're a team. What do you bring to the table, " << name << "?" << std::endl;
        std::cout << "If you have a charming personality, pick option 1. If you're stand-offish, pick option 2." << std::endl;

        int answer2;
        answer2 = prompt_user("1. 'Well, I'm good at talking us out of tricky situations. I can get along with just about anyone.' 2. 'I'm strong and strategic when it comes to battle, I rarely lose.'");

        user_2choice(answer2, "Hauna: 'Well that's good, I'm sure we'll need to defend ourselves with words from other survivalists to avoid conflict.'", "Henry: 'Perfect! I won't have to do all the physical fighting myself anymore!'");

        std::cout << "Now that you've met the team and have started your journey, let's take a break. It's unlikely you'll get another one of these in the near future." << std::endl;

        int brk2;
        brk2 = break_txt();

        std::cout << "THE NEXT DAY" << std::endl;


        std::cout << "Rachel: 'It's unlikely we can keep this space much longer. Let's get moving East to the next camp, an abandoned grocery store." << std::endl;
        std::cout << "Now... I know what you are probably thinking, the zombies always seem to come for people when they're in a grocery store! Well, we need supplies." << std::endl;
        std::cout << "Hauna: 'Most survivors leave this specific grocery store stocked for others, as long as we don't take the supplies for granted we should be safe. It's heavily guarded.'" << std::endl;
        std::cout << "Xavier: 'As per tradition, newbie gets to pick out the first item. We think it says a lot about their priorities." << std::endl;

        int brk3;
        brk3 = break_txt();

        std::cout << "Which type of resource would you like to get first from the grocery store?" << std::endl;

        int answer3;
        answer3 = prompt_user("1. First-Aid kit, 2. Water and snacks, or 3. Blankets");

        user_3choice(answer3, "Your team knows you will take their health seriously and offer help in a time of need. You now have infinite medkits.",
            "Your team understands that clean water and good snacks are hard to find in the wild, it's okay to indulge in this time! Clean water will always be at your disposal.",
            "Blankets often go overlooked in comparison to other resources, your team notices your attention to detail! You no longer have to worry about freezing at night.");

        std::cout << " " << std::endl;
        std::cout << "This first trip gave you your first resource. Choosing to explore certain places, and certain events will trigger the gain of a resource that you will be able to use for the rest of the game." << std::endl;
        std::cout << "Upon exit of the grocery store, your team finds a grassy spot under some trees for a place to camp. You've been walking all day, and are tired." << std::endl;
        std::cout << "You notice that a 'survivor' nearby seems... off. They won't stop staring, and seem to stagger when they walk. Do you bring this to the attention of your team?" << std::endl;

        int answer4;
        answer4 = prompt_user("1. Yes, he seems dangerous! or 2. No, I'm sure he's just delirious or tired. Don't want any drama.");

        user_2choice(answer4, "Hauna wasn't up for risking it by a possible zombie. She alerted the guards to watch for him, and you moved camp to the other side of the store.",
            "Turns out he was a zombie, just not quite turned. He was pretending to fit in, not willing to admit he had been infected. He attacks, and everything spirals. You die! Game Over.");

        if (answer4 == 2) {
            return EXIT_SUCCESS;
        }

        std::cout << "Your group decides to set up camp for a few hours and plan out the next day's strategy." << std::endl;
        std::cout << "Rachel: 'We don't have anywhere to be, but we can't camp here long. We usually like to keep moving.'" << std::endl;
        std::cout << "Henry: 'We could use a trip to the junkyard, I need some scrap for weapons.'" << std::endl;
        std::cout << "Rachel: 'So I guess that's our plan, we'll walk 5 miles north to the junk yard and set up camp at the site 2 miles east of that.'" << std::endl;

        int brk4;
        brk4 = break_txt();

        std::cout << "Your group heads 5 miles north, carrying your new resources from the grocery store. Another group follows a short distance away." << std::endl;
        std::cout << "The group behind you alerts you to movement on the left coming up, about a quarter mile ahead. It's best to keep your guard up." << std::endl;
        std::cout << "Here, you can make an alliance. Do you choose to close in on the ruckus with your group, or combine groups for a combined effort?" << std::endl;

        int answer5;
        answer5 = prompt_user("1. Reach the noise alone, let the other group see what happens! or 2. Combine forces!");

        user_2choice(answer5, "Your group inches closer to the rustling, fully alert, but hoping it's nothing. And it is! Just some squirrels messing around in the trees.",
            "The group is hesitant, but figures a zombie will easily be taken down by a larger group. You join together and discover a squirrel digging a hole!");

        std::cout << "Your group, startled yet relieved, continues to the junkyard. Along the way, you make sure to gather some berries and let Xavier identify them later." << std::endl;
        std::cout << "Henry: 'I see the gates, we have under a hundred feet to go. You can all sit at the camp while I gather scrap." << std::endl;
        std::cout << "As your team gets closer, you're all tired and overheated. You decide to sip water while sitting on tree stumps arranged in a perfect circle." << std::endl;
        std::cout << "Henry: '" << name << ", want to come with? I'll show you what to look out for.'" << std::endl;

        int answer6;
        answer6 = prompt_user("1. 'No thanks, I'm so tired. I'm not used to all this walking!', or 2. 'Yeah sure, let me just grab an extra water bottle and hat!'");

        user_2choice(answer6, "You sit this one out and wait 15 minutes for Henry, who comes with lots of scrap metal, and a few blocks of wood.",
            "Henry appreciates the help, he'll remember your willingness to learn even when you're tired! You now have the ability to forge metal or plastic scraps into weapons in emergencies.");

        std::cout << " " << std::endl;
        std::cout << "You wander in a separate part of the junk yard to see what you can find for yourself." << std::endl;
        std::cout << "You see a group of 3 zombies. Xavier is too far away to help. Do you venture farther anyways?" << std::endl;

        int answer10;
        answer10 = prompt_user("1. Nope. Too new to risk that!, 2. Well, maybe one of these scraps is a really good weapon...");
        user_2choice(answer10, "The zombies venture off a ways, and you quietly and quickly make it back to Xavier. You make a mental note to stay alert, but this is normal for him.", "A zombie sees you as you turn away, and all 3 are too much for you! You attempt to use scraps, but fail. You die!");
        
        if (answer10 == 2) {
        return EXIT_SUCCESS;
        }

        std::cout << "As everyone rests, you think this is the perfect time to show Xavier those berries." << std::endl;
        std::cout << name << ": 'Xavier, I found these oddly shaped berries on the trail here. Are they edible? Or anything special?" << std::endl;
        std::cout << "Xavier: 'I've seen these, but don't know what they are. I think only a few bushes around here produce them. We can take them to the lab up the path tomorrow!" << std::endl;
        std::cout << "Hauna: 'Yes, tomorrow, we're all so tired. Let's rest for a bit." << std::endl;
        std::cout << " " << std::endl;
        std::cout << "While everyone is asleep, the berries smell super good in your satchel. Do you eat just one?" << std::endl;

        int answer11;
        answer11 = prompt_user("1. I can wait a day to eat a berry..., 2. I have no self control, we could die any moment, why not?");
        user_2choice(answer11, "Curiousity doesn't kill you! You'll find out what the berries are tomorrow.", "This is the moment you die. You lose the game.");
       
        if (answer11 == 2) {
            std::cout << "End of game." << std::endl;
            return 1;
        }

        std::cout << "THE NEXT DAY" << std::endl;
        std::cout << " " << std::endl;
        std::cout << "Rachel: 'Alright, let's keep moving in case any stray zombies picked up on our scent. It's unlikely considering the miniscule population of them around here, but best not to risk it.'" << std::endl;
        std::cout << "As the group ditched the plans to camp south of the junk yard, they got some extra sleep that would've been spent walking. Everyone is well rested." << std::endl;

        if (answer3 == 3) {
            std::cout << "The blankets provided a nice layer between body and ground, and were nice and warm. The comfort provided boosted group morale!" << std::endl;
        }

        std::cout << "Xavier: 'The lab is 7 miles west. Since my cousin runs it, not many people know about it. Let's keep our destination quiet if anyone asks." << std::endl;
        std::cout << "The group is exhausted by the third mile, the heat is overwhelming. A stream runs nearby, encouraging a dip!" << std::endl;
        std::cout << "Everyone gets up to their ankles in the water. Luckily, zombie infection isn't spread this way, or we'd be suffering from dehydration." << std::endl;
        std::cout << "After being refreshed, it's time to complete the last 4 miles. The sun is starting to lower, so it's not at its highest heat index anymore." << std::endl;
        std::cout << " " << std::endl;
        std::cout << "Xavier points to a run down, stone building full of vines and ivy. It's well hidden in rubble, concealing its true identity." << std::endl;
        std::cout << "Xavier and " << name << " head inside, as only a few people should be in at once. A bearded middle aged man, tall and lean, approaches you." << std::endl;
        std::cout << "Cousin: 'Xavier! You've brought a friend, and my favorite! New berries, let's see what they are!" << std::endl;
        std::cout << "The berries are placed in a vial and are prodded by small needles. The needles place drops of juice into small trays, where a heat lamp examines them." << std::endl;

        if (answer6 == 2) {
            std::cout << "The berries you found were the cure to the zombie infection! Your kindness karma in helping Henry has come back! You win the game!" << std::endl;
            return 1;
        }
        else {
            std::cout << "The berries you found were a rare, delicious snack! You and your group enjoy them." << std::endl;
        }

        std::cout << "You are all safe in the lab for the night. Exhausted, everyone is looking forward to a night in a bed, even if it is just a cot." << std::endl;
        std::cout << "Rachel states that you haven't been to a bonfire yet! The team decides to have one tomorrow, give everyone something to look forward to." << std::endl;
        std::cout << "The beds are stiff, but much better than the ground outside. You all feel safe." << std::endl;
        std::cout << "As you are falling asleep, you hear a loud crash of glass breaking. Could it be a beaker drop, or someone breaking in?" << std::endl;
        std::cout << "Will you investigate? If so, will you go alone?" << std::endl;

        int answer7;
        answer7 = prompt_user("1. I'm safe in my cell, and I'd like to keep it that way by staying put!, 2. I should make sure a potential spill isn't happening, I'll quickly check alone!, 3. Since Xavier knows the lab best, I'll get him to come with me.");

        user_3choice(answer7, "You stayed in your place all night, and no one mentioned the break. Though one staff member seems off...",
            "You quietly peer around the corner, and see a big hazard sign on a broken beaker... what now?",
            "Xavier signals for you to be quiet, and sees a broken beaker with a hazard symbol!");
        std::cout << "Whether anyone heard the noise or not, no one mentioned it until morning." << std::endl;
        std::cout << "Xavier: 'Hey cousin, what beakers have hazard stickers on them?" << std::endl;
        std::cout << "Cousin: 'The most dangerous ones to handle, as they have small samples of the virus in them. We're using them to experiment and find a cure... Why?" << std::endl;
        std::cout << "Xavier: 'Well, I'm not sure if anyone else heard, but there was a big crash in the middle of the night. Josh has been acting weird all morning." << std::endl;
        std::cout << "Xavier's cousin goes to find Josh, and discovers he is sickly green. He's staggering and can't form coherent words." << std::endl;
        std::cout << "Josh quickly takes a lash at Xavier's cousin! There are claw marks on his arm that are NOT human..." << std::endl;

        int brk5;
        brk5 = break_txt();

        if (answer3 == 1) {
            std::cout << "Med kits in endless supply are always important. Hauna takes one out, cleans, and bandages the injured arm. This stopped an outbreak!" << std::endl;
            std::cout << "Tests indicated that the bandages in the medkits were infused with a cure. Since this stopped Xavier's cousin from being infected, a vaccine was implemented!" << std::endl;
            std::cout << "Thanks to the vaccine, survivors are safe and the zombies slowly are eliminated. Too late for them! You win!" << std::endl;
            return EXIT_SUCCESS;
        }

        std::cout << "Unfortunately, we don't have med kits at our disposal. We forgot to get even one at the grocery store!" << std::endl;
        std::cout << "Hauna: 'Sorry Xavier, but we should just escape. We can find med kits and bring one to your cousin, but for now, we must go!" << std::endl;
        std::cout << "Xavier's cousin agrees and puts the lab on lockdown, he locks himself in an isolation chamber and so does all staff. Josh was... taken care of." << std::endl;
        std::cout << "Xavier: 'We WILL be back! I promise! Just stay in the chambers!'" << std::endl;

        int brk6;
        brk6 = break_txt();

        std::cout << "As everyone exits the lab, as calmly as possible, they realize one staff member didn't do what was right. They see them, half infected, heading right towards a survivors mainland." << std::endl;
        std::cout << "You realize they are either heading for help, or are too far gone and just know where the most flesh is..." << std::endl;
        std::cout << "A group heads towards you, should you warn them?" << std::endl;

        int answer8;
        answer8 = prompt_user("1. Yes, they could help!, 2. No, we don't need more panic!");
        user_2choice(answer8, "You tell... but they don't seem to care. No assistance here!", "Your group continues on alone. No telling how people will react nowadays!");
        if (answer1 == 1) {
            std::cout << "They see survivors in need and understand your situation, they decide to join you and ward off new zombies." << std::endl;
        }

        std::cout << "Everyone heads to the grocery store in the heart of survivors, and gets a med kit. We better fix Xavier's cousin before we do anything else." << std::endl;

        int brk7;
        brk7 = break_txt();

        std::cout << "You head back to the lab. Xavier heads in with the med kit, only a few hours have passed so he's less likely to be fully infected right away as he didn't get it firsthand." << std::endl;
        std::cout << "A few minutes later..." << std::endl;
        std::cout << "Xavier: 'He was exhausted, but I did what I could. Let's check his progress in a few hours." << std::endl;
        std::cout << "Rachel decides to set up that bonfire. You all deserve it, plus it's cold tonight." << std::endl;
        std::cout << "As everyone relaxes next to the crackling heat, there's a loud snap a distance away. Everyone quickly gets defensive and looks over." << std::endl;
        std::cout << "A zombie staggers out. Not really unusual, but it doesn't get any easier." << std::endl;

        if (answer1 == 2) {
            std::cout << "You destroy the zombie with a lead pipe. It's gory, it's gross, but it's essential for survival. It's almost too easy." << std::endl;
        }

        std::cout << "Henry quickly rids the zombie with a shot to the head. It's easy to do, hard to see, and hard to deal with the aftermath." << std::endl;

        int brk8;
        brk8 = break_txt();

        std::cout << "A FEW HOURS LATER" << std::endl;
        std::cout << "Xavier heads to check on his cousin. He's fine, and all the other staff are fine, luckily. The med kit proved useful!" << std::endl;
        std::cout << "Hauna sends a telegram to the grocery store clerk, encouraging them to keep med kits on hand for everyone, and to disallow hoarding." << std::endl;
        std::cout << "It's not for sure a cure, but it at least can help someone in the early stages!" << std::endl;
        std::cout << "Now, as for Josh, we will see what havoc he wreaks in the next game..." << std::endl;

        int brk9;
        brk9 = break_txt();

        std::cout << "TO BE CONTINUED..." << std::endl;


        std::cout << "Would you like to play again? Press 3 to restart." << std::endl;
        std::cin >> restart;
    }
    while (restart == 3); {
    std::cout << "Press any key to continue." << std::endl;
  
    std::cin.ignore(1);
}
    return 0;
}