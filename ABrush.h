// Class /Script/Engine.Brush
// Size: 0x2c0
class ABrush : public AActor
{
	struct TEnumAsByte<EBrushType> BrushType; // 0x288 (0x1)
	unsigned char unreflected_289[0x3]; // 0x289 (0x3) 
	struct FColor BrushColor; // 0x28c (0x4)
	int PolyFlags; // 0x290 (0x4)
	unsigned char bColored; // 0x294 (0x1)
	unsigned char bSolidWhenSelected; // 0x294 (0x1)
	unsigned char bPlaceableFromClassBrowser; // 0x294 (0x1)
	unsigned char bNotForClientOrServer; // 0x294 (0x1)
	unsigned char unreflected_295[0x3]; // 0x295 (0x3) 
	class UModel* Brush; // 0x298 (0x8)
	class UBrushComponent* BrushComponent; // 0x2a0 (0x8)
	unsigned char bInManipulation; // 0x2a8 (0x1)
	unsigned char unreflected_2a9[0x7]; // 0x2a9 (0x7) 
	struct TArray<struct FGeomSelection> SavedSelections; // 0x2b0 (0x10)
};

