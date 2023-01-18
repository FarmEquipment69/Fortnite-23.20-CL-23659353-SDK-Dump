// ScriptStruct /Script/FortniteGame.FortSplineMeshAnimSet
// Size: 0x30
struct FFortSplineMeshAnimSet
{
	struct TWeakObjectPtr<class USplineMeshComponent> SplineMesh; // 0x0 (0x8)
	struct TArray<struct FFortSplineMeshScaleAnimationInfo> ScaleAnims; // 0x8 (0x10)
	struct TArray<struct FFortSplineMeshSnapAnimationInfo> SnapAnims; // 0x18 (0x10)
	unsigned char padding_28[0x8]; // 0x28 (0x8)
};

