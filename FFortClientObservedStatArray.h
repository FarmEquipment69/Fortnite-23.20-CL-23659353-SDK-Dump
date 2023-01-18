// ScriptStruct /Script/FortniteGame.FortClientObservedStatArray
// Size: 0x138
struct FFortClientObservedStatArray : FFastArraySerializer
{
	class UStatManager* MyStatManager; // 0x108 (0x8)
	struct TArray<struct FFortClientObservedStat> ObservedStats; // 0x110 (0x10)
	unsigned char padding_120[0x18]; // 0x120 (0x18)
};

