// Class /Script/FortniteGame.FortFriendChestItemDefinition
// Size: 0x440
class UFortFriendChestItemDefinition : public UFortAccountItemDefinition
{
	class UFriendChestInstancedDetail* InstancedDetail; // 0x420 (0x8)
	enum EFriendChestTimePeriod TimePeriod; // 0x428 (0x1)
	unsigned char unreflected_429[0x3]; // 0x429 (0x3) 
	int GrantsPerPeriod; // 0x42c (0x4)
	int GrantsPerSeason; // 0x430 (0x4)
	int CatchupBankSize; // 0x434 (0x4)
	bool bAllowSeasonCatchup; // 0x438 (0x1)
	unsigned char padding_439[0x7]; // 0x439 (0x7)
};

