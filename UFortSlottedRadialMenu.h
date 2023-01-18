// Class /Script/FortniteUI.FortSlottedRadialMenu
// Size: 0x378
class UFortSlottedRadialMenu : public UFortRadialMenu
{
	enum ERadialOrderingMode OrderingMode; // 0x340 (0x1)
	unsigned char unreflected_341[0x7]; // 0x341 (0x7) 
	struct TArray<enum ECardinalPoint> CustomOrdering; // 0x348 (0x10)
	bool bUseAsManySlotsAsItems; // 0x358 (0x1)
	unsigned char unreflected_359[0x3]; // 0x359 (0x3) 
	int NumSlotsSupported; // 0x35c (0x4)
	unsigned char padding_360[0x18]; // 0x360 (0x18)
};

