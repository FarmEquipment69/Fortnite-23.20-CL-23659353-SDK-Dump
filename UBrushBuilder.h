// Class /Script/Engine.BrushBuilder
// Size: 0x78
class UBrushBuilder : public UObject
{
	struct FString BitmapFilename; // 0x28 (0x10)
	struct FString ToolTip; // 0x38 (0x10)
	unsigned char NotifyBadParams; // 0x48 (0x1)
	unsigned char unreflected_49[0x7]; // 0x49 (0x7) 
	struct TArray<struct FVector> Vertices; // 0x50 (0x10)
	struct TArray<struct FBuilderPoly> Polys; // 0x60 (0x10)
	struct FName Layer; // 0x70 (0x4)
	unsigned char MergeCoplanars; // 0x74 (0x1)
	unsigned char padding_75[0x3]; // 0x75 (0x3)
};

