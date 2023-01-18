// Class /Script/FortniteUI.AthenaSquadMemberDetailedEntry
// Size: 0x14a0
class UAthenaSquadMemberDetailedEntry : public UFortBasicTeamMemberEntry
{
	unsigned char unreflected_1480[0x8]; // 0x1480 (0x8) 
	class UFortSocialAvatarIcon* AvatarIconMemberAvatar; // 0x1488 (0x8)
	class UCommonTextBlock* TextParticipationStatus; // 0x1490 (0x8)
	unsigned char padding_1498[0x8]; // 0x1498 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaSquadMemberDetailedEntry.OnSquadAssigned (Has no native function)
	void OnSquadAssigned(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSquadMemberDetailedEntry.GetSquadDisplayInfo (Underlying native function: GetSquadDisplayInfo 0xa5d0dc8)
	struct FAthenaTeamDisplayInfo GetSquadDisplayInfo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

