// ScriptStruct /Script/FortniteGame.FortItemList
// Size: 0x1c8
struct FFortItemList : FFastArraySerializer
{
	struct TArray<struct FFortItemEntry> ReplicatedEntries; // 0x108 (0x10)
	unsigned char unreflected_118[0x50]; // 0x118 (0x50) 
	struct TArray<class UFortWorldItem*> ItemInstances; // 0x168 (0x10)
	unsigned char padding_178[0x50]; // 0x178 (0x50)
};

