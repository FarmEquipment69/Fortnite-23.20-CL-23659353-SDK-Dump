// Class /Script/FortniteAI.FortAthenaBeaconComponent
// Size: 0xd0
class UFortAthenaBeaconComponent : public UActorComponent
{
	int MaxAttractedBots; // 0xa0 (0x4)
	float AttractionRadius; // 0xa4 (0x4)
	struct TArray<class AActor*> RegisteredActors; // 0xa8 (0x10)
	struct FMulticastInlineDelegate OnConsumeEvent; // 0xb8 (0x10)
	bool bIsConsumed; // 0xc8 (0x1)
	unsigned char padding_c9[0x7]; // 0xc9 (0x7)
};

