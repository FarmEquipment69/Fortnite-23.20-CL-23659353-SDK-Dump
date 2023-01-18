// Class /Script/FortniteGame.FortClientAnnouncement_Basic
// Size: 0x420
class AFortClientAnnouncement_Basic : public AFortClientAnnouncement
{
	unsigned char unreflected_2f8[0x8]; // 0x2f8 (0x8) 
	struct FFortClientAnnouncementData_Basic BasicData; // 0x300 (0x120)

	/* Functions */

	// Function /Script/FortniteGame.FortClientAnnouncement_Basic.SetTitleText (Underlying native function: SetTitleText 0x82674f0)
	void SetTitleText(struct FText& TitleText); // (BlueprintAuthorityOnly | Native | Public)

	// Function /Script/FortniteGame.FortClientAnnouncement_Basic.SetIcon (Underlying native function: SetIcon 0x8267170)
	void SetIcon(struct FSlateBrush& Icon); // (BlueprintAuthorityOnly | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortClientAnnouncement_Basic.SetDisplayTime (Underlying native function: SetDisplayTime 0x8267068)
	void SetDisplayTime(float& DisplayTime); // (BlueprintAuthorityOnly | Native | Public)

	// Function /Script/FortniteGame.FortClientAnnouncement_Basic.SetDetailText (Underlying native function: SetDetailText 0x8266f24)
	void SetDetailText(struct FText& DetailText); // (BlueprintAuthorityOnly | Native | Public)

	// Function /Script/FortniteGame.FortClientAnnouncement_Basic.OnRep_BasicData (Underlying native function: OnRep_BasicData 0x82665a4)
	void OnRepBasicData(struct FFortClientAnnouncementData_Basic& PreviousBasicData); // (Final | Native | Protected | HasOutParms)
};

