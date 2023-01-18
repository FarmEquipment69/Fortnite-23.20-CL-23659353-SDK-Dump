// Class /Script/FortniteAI.AIHotSpotConfig
// Size: 0x50
class UAIHotSpotConfig : public UDataAsset
{
	struct TArray<struct FAIHotSpotSlotConfig> Slots; // 0x30 (0x10)
	unsigned char bDetectUnreachableSlots; // 0x40 (0x1)
	unsigned char unreflected_41[0x7]; // 0x41 (0x7) 
	class UAIHotSpotSlotGenerator* SlotGenerator; // 0x48 (0x8)
};

