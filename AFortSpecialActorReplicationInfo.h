// Class /Script/FortniteGame.FortSpecialActorReplicationInfo
// Size: 0x408
class AFortSpecialActorReplicationInfo : public AInfo
{
	struct FSpecialActorRepDataArray SpecialActorRepList; // 0x288 (0x118)
	struct TArray<struct FSpecialActorTransform> SpecialActorTransforms; // 0x3a0 (0x10)
	struct TArray<struct FSpecialActorStatData> SpecialActorStats; // 0x3b0 (0x10)
	struct TArray<struct FSlateBrush> SlateBrushes; // 0x3c0 (0x10)
	struct TArray<struct FVector2D> BrushScales; // 0x3d0 (0x10)
	unsigned char padding_3e0[0x28]; // 0x3e0 (0x28)
};

