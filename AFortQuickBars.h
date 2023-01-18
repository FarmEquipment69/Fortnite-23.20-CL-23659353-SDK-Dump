// Class /Script/FortniteGame.FortQuickBars
// Size: 0x540
class AFortQuickBars : public AFortClientOnlyActor
{
	struct FQuickBar PrimaryQuickBar; // 0x290 (0x90)
	struct FQuickBar SecondaryQuickBar; // 0x320 (0x90)
	struct FQuickBar CreativeQuickBar; // 0x3b0 (0x90)
	unsigned char unreflected_440[0x68]; // 0x440 (0x68) 
	struct TArray<class UFortWorldItem*> AllCachedTraps; // 0x4a8 (0x10)
	struct TArray<class UFortWorldItem*> CachedFloorTraps; // 0x4b8 (0x10)
	struct TArray<class UFortWorldItem*> CachedWallTraps; // 0x4c8 (0x10)
	struct TArray<class UFortWorldItem*> CachedCeilingTraps; // 0x4d8 (0x10)
	unsigned char padding_4e8[0x58]; // 0x4e8 (0x58)
};

