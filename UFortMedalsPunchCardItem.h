// Class /Script/FortniteGame.FortMedalsPunchCardItem
// Size: 0x148
class UFortMedalsPunchCardItem : public UFortAccountItem
{
	struct TArray<struct FString> medalpunchlist; // 0x108 (0x10)
	struct TArray<struct FCardSlotMedalData> MedalPunchData; // 0x118 (0x10)
	unsigned char unreflected_128[0x18]; // 0x128 (0x18) 
	int dayssinceseasonstartgrant; // 0x140 (0x4)
	unsigned char padding_144[0x4]; // 0x144 (0x4)
};

