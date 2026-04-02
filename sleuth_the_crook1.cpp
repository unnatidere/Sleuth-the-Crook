#include<iostream.h>
#include<conio.h>
int main()
{clrscr();
int a, b, score=0, l;
char Y, N, ans;
cout<< "\n\n\n\n\n\n\n\n\n\n\t\t\t\t SLEUTH THE CROOK \n";
getch();
clrscr();
cout<< "\n\n\n\n\n\n\n\n\t\t\t ARE YOU READY TO PLAY? \n ";
cout<< "\n\t\t Press Y to continue \t";
cout<< " Press N to leave \t";
cin>>ans;
clrscr();
if(ans=='N')
{
cout<< " Thank you for playing\n ";
}
else
{
cout<< "\n\n\n\n\n\n\n\t\t\t\t Choose topic: \n ";
cout<<"\n\t\t\t Case 1. The author's murder\n" ;
cin>>a;
clrscr();
}
cout<<" You chose case 1 \n";
cout<< " Hello detective. Here is your case: \n\n";
cout<<" At 3:44 pm on a Sunday, first responders received a call that Rick, an author, was found
dead in his living room.";
cout<< "There was no physical trauma to his body on a preliminary assessment.";
cout<< " The living room was found in shambles, with an upended sofa and stains on the rug.";
cout<< " 2 glasses with water in them were found on a nearby table.";
cout<< " His latest book was found torn near the table.";
cout<< " A broken vase laid near the window sill.";
cout<< " There was nobody else in the house, apart from his dog, which had been found eating
peanut butter from the jar.";
cout<< " The call had been made by his househelp, Stacy, when she let herself in the house for
cleaning.";
cout<< " An unused epipen was also found in the drawer.";
cout<< " Rick had a lunch meeting at 1 pm on the same day with his new publisher, his manager
and co-author.";
cout<< " The meeting was on the topic of signing a new book deal with the co-author.";
cout<< " All 3 had left the house at the same time.";
cout<< " Text messages on a phone owned by Rick were checked and it was seen that the
manager had been urging Rick to not sign the deal.";
cout<< " Rick texted back later, saying it was too late now.\n\n";

cout<< " Detective, it is your duty to solve this high profile case as soon as possible. The media
is at the door, and your preliminary investigation might just help to find who killed this
world famous author.\n";
cout<< " Grab your magnifying glass, it is now time to investigate.\n";
getch();
clrscr();

cout<< " What will you do now? \n";

cout<<" 1. Question Rick's manager. His texts sound interesting.\n 2. Question Rick's co-
author. What was their relationship like?\n 3. Question Rick's publicist. Did he play a

part?\n 4. Question Stacy. What did she know?\n";
cin>>b;
getch();
clrscr();

if(b==1)
{cout<< " You chose to interrogate Rick's manager.\n";
cout<< " Select question:\n 1. Ask him about the texts.\n 2. Ask him about Rick.\n 3. Ask
him about his relationship with Rick.\n 4. Ask him about the reply to the texts.\n";
cin>>l;

switch(l)
{
case 1:

cout<<" The manager confesses he was worried about the deal between Rick and the co-
author. He admits the deal wouldn't have been profittable for Rick. \n";

score=score+20;
break;
case 2:
cout<< "The manager says he cared for Rick a lot. He was aware about his routine, his
allergies and everything in between. Rick had a severe peanut butter allergy.\n";
score=score+20;
break;
case 3:
cout<<"His relationship with Rick extended beyond work. He cared for him and can't
believe that he is dead.\n";
score=score+20;
break;
case 4:
cout<<" The manager was confused about the reply to the text. Rick had nothing to worry
about. He was more famous than the co-author and could've easily refused to sign the
deal.\n";
score=score+20;
default:
cout<< " Error ";
break;
}}

else if(b==2)
{cout<< " You decided to interrogate Rick's co-author \n";
cout<< " Select question:\n 1. Ask him about Rick.\n 2. Ask him about the manager's text
to Rick.\n 3. Ask him about his relationship with Rick.\n 4. Ask him about the meeting.\n
";
cin>>l;
switch(l)
{
case 1:
cout<<" He says that Rick was an intersting person. Rick was more famous, and so this
book deal would help the co-author a lot.\n";
score=score+40;
break;
case 2:
cout<<" The co-author was confused by the manager's texts. He thought everyone was
happy with the deal as it would be beneficial for both of them. \n";
score=score+40;
break;
case 3:
cout<<" The relationship between the co-author and the Rick was a little strained. Rick
had tried to use his fame to influence the deal. \n";
score=score+40;
break;
case 4:
cout<<" The meeting had not gone well. The manager had tried to drop the co-author
from the deal. Rick had been silent the whole time.\n";
score=score+40;
break;
default:
cout<< " error \n";
break;
}}

else if(b==3)
{cout<< " You chose to interrogate Rick's publisher. \n ";
cout<< " Select question:\n 1. Ask him about the manager's texts to Rick.\n 2. Ask him
about the meeting.\n 3. Ask him about the manager's relationship with Rick.\n 4. Ask him
about Rick\n ";
cin>>l;
switch(l)
{
case 1:
cout<<" The publisher was aware about the manager's opinions on the deal. It did not
come as a surprise to him.\n";
score=score+10;
break;
case 2:
cout<<"The publisher is new. He was mostly focused on taking notes. He did note the
undercurrents of tension running through the meeting.\n";
score=score+10;
break;
case 3:
cout<<"The publisher is new. He is only aware that the manager and Rick were close.\n";
score=score+10;
break;
case 4:
cout<<"The publisher is new. He wasn't very close with Rick.\n";
score=score+10;
break;
default:
cout<< " error \n";
break;
}}
else
{cout<< " You chose to interrogate Stacy.\n ";
cout<< " Select question:\n 1. Ask her about Rick.\n 2. Ask her about the meeting.\n 3.
Ask her about finding anything unusual.\n 4. Ask her about about the text messages.\n";
cin>>l;
switch(l)
{
case 1:
cout<<" Stacy was aware of Rick's daily routine. His eating like his peanut butter allergy
for example, were known to her. \n";
score=score+30;
break;
case 2:
cout<<"She wasn't privy to the details of the meeting. She was just asked to cook lunch
for the 4 of them.\n";
score=score+30;
break;
case 3:
cout<<"The fact that the dog was eating peanut butter was unusual. They didn't keep any
peanut butter due to Rick's severe allergy. \n";
score=score+30;
break;
case 4:
cout<<"She wasn't aware about the text messages between Rick and his manager.\n";
score=score+30;
break;
default:
cout<< " error \n";
break;
}}

getch();
clrscr();
cout<< " Choose who the culprit might be:\n 1. Manager\n 2. Publisher\n 3. Co-author\n 4.
Stacy\n";

cin>>b;
if(b==1)
{cout<< "The manager was not the culprit. Try again.\n";
score=score-10;}
else if(b==2)
{cout<< "The publisher was not the culprit. Try again.\n";
score=score-10;}
else if(b==3)
{cout<< "Yes. It was the co-author who killed Rick.\n";
score=score+50;}
else if(b==4)
{cout<< "Stacy was not the culprit. Try again.\n";
score=score-10;}
else
{cout<< "Error";}
getch();
clrscr();
cout<< "\n\n\n\n\n\n\n\t\t\t Your final score is "<<score<<"\n\n\n\n\n";
cout<< "Score board:\n score<10 You might need to change your career.\n score=10 You need to
do better than this. \n score=20 Your efforts were visible but today was not your day.\n
score=30 You were on the right track.\n score=40 You knew what was happening all
along.\n score=>50 Wow you deserve a promotion.";
getch();
clrscr();
cout<< "\n\n\n\n\n\n\n\n\n\n\n\t\t\t THANK YOU FOR PLAYING! \n\n\n\n\n";
getch();
clrscr();
return 0;
}