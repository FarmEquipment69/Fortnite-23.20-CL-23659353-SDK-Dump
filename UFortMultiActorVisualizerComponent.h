// Class /Script/FortniteGame.FortMultiActorVisualizerComponent
// Size: 0x100
class UFortMultiActorVisualizerComponent : public UActorComponent
{
	struct TArray<class AActor*> Targets; // 0xa0 (0x10)
	bool bShowVisualizer; // 0xb0 (0x1)
	unsigned char unreflected_b1[0x3]; // 0xb1 (0x3) 
	struct FLinearColor ConnectionColor; // 0xb4 (0x10)
	float LineWidth; // 0xc4 (0x4)
	float MininumSize; // 0xc8 (0x4)
	struct FLinearColor ParentColor; // 0xcc (0x10)
	float ParentRadiusScale; // 0xdc (0x4)
	float ParentHeightScale; // 0xe0 (0x4)
	struct FLinearColor TargetColor; // 0xe4 (0x10)
	float TargetCapsuleRadiusScale; // 0xf4 (0x4)
	float TargetCapsuleHeightScale; // 0xf8 (0x4)
	unsigned char padding_fc[0x4]; // 0xfc (0x4)
};

