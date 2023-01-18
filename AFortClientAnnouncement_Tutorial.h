// Class /Script/FortniteGame.FortClientAnnouncement_Tutorial
// Size: 0x490
class AFortClientAnnouncement_Tutorial : public AFortClientAnnouncement
{
	unsigned char unreflected_2f8[0x8]; // 0x2f8 (0x8) 
	struct FFortClientAnnouncementData_Tutorial TutorialData; // 0x300 (0x170)
	float AutoContinueDelay; // 0x470 (0x4)
	unsigned char padding_474[0x1c]; // 0x474 (0x1c)

	/* Functions */

	// Function /Script/FortniteGame.FortClientAnnouncement_Tutorial.OnRep_TutorialData (Underlying native function: OnRep_TutorialData 0x82669fc)
	void OnRepTutorialData(struct FFortClientAnnouncementData_Tutorial& PreviousTutorialData); // (Final | Native | Protected | HasOutParms)
};

