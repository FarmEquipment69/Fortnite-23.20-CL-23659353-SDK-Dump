// Class /Script/FortniteUI.FortCreativeServerOptionTile
// Size: 0x1450
class UFortCreativeServerOptionTile : public UCommonButtonLegacy
{
	class UCommonTextBlock* TextJoinServerType; // 0x1430 (0x8)
	class UCommonTextBlock* TextJoinServerPlayerCount; // 0x1438 (0x8)
	class UFortCreativeServerInfo* Server; // 0x1440 (0x8)
	unsigned char padding_1448[0x8]; // 0x1448 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeServerOptionTile.SetBPData (Has no native function)
	void SetBPData(class UFortCreativeServerInfo*& ServerInfo); // (Event | Protected | BlueprintEvent)
};

