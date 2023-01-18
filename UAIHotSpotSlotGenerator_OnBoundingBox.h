// Class /Script/FortniteAI.AIHotSpotSlotGenerator_OnBoundingBox
// Size: 0x98
class UAIHotSpotSlotGenerator_OnBoundingBox : public UAIHotSpotSlotGenerator
{
	class UClass* SlotClass; // 0x28 (0x8)
	struct FVector MaxExtent; // 0x30 (0x18)
	float ExpandBy; // 0x48 (0x4)
	float OffsetFromEdge; // 0x4c (0x4)
	float Spacing; // 0x50 (0x4)
	unsigned char bLimitMaxExtent; // 0x54 (0x1)
	unsigned char bMustHitFocusActor; // 0x54 (0x1)
	unsigned char unreflected_55[0x3]; // 0x55 (0x3) 
	enum EBoundingBoxSlotDirectionCalculation SlotDirectionCalculation; // 0x58 (0x1)
	unsigned char padding_59[0x3f]; // 0x59 (0x3f)
};

