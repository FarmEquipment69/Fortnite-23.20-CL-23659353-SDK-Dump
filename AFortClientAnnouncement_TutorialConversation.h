// Class /Script/FortniteGame.FortClientAnnouncement_TutorialConversation
// Size: 0x510
class AFortClientAnnouncement_TutorialConversation : public AFortClientAnnouncement_Conversation
{
	unsigned char unreflected_378[0x8]; // 0x378 (0x8) 
	struct FFortClientAnnouncementData_Tutorial TutorialData; // 0x380 (0x170)
	float AutoContinueDelay; // 0x4f0 (0x4)
	unsigned char padding_4f4[0x1c]; // 0x4f4 (0x1c)

	/* Functions */

	// Function /Script/FortniteGame.FortClientAnnouncement_TutorialConversation.OnRep_TutorialData (Underlying native function: OnRep_TutorialData 0x8266ab4)
	void OnRepTutorialData(struct FFortClientAnnouncementData_Tutorial& PreviousTutorialData); // (Final | Native | Protected | HasOutParms)
};

