// ScriptStruct /Script/FortniteGame.PegasusTimelineEvent
// Size: 0x40
struct FPegasusTimelineEvent
{
	struct FString PGSTagName; // 0x0 (0x10)
	bool PGSIsScalarValueRelevant; // 0x10 (0x1)
	unsigned char unreflected_11[0x7]; // 0x11 (0x7) 
	struct FString PGSScalarValueDescription; // 0x18 (0x10)
	enum EPegasusTimelineCategories PGSCategory; // 0x28 (0x1)
	unsigned char unreflected_29[0x7]; // 0x29 (0x7) 
	struct TArray<struct FPegasusTimelineEventHit> EventHits; // 0x30 (0x10)
};

