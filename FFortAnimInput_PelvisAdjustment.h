// ScriptStruct /Script/FortniteGame.FortAnimInput_PelvisAdjustment
// Size: 0x50
struct FFortAnimInput_PelvisAdjustment
{
	class USkeletalMeshComponent* PawnMesh; // 0x0 (0x8)
	float DistanceToFeet; // 0x8 (0x4)
	float LegLength; // 0xc (0x4)
	float DesiredLegLengthTreshold; // 0x10 (0x4)
	float DotProductBetweenUpVectorsTreshold; // 0x14 (0x4)
	float PelvisInterpSpeed; // 0x18 (0x4)
	float EmotePelvisOffsetInterpSpeed; // 0x1c (0x4)
	float EmotePelvisOffsetAlpha; // 0x20 (0x4)
	unsigned char unreflected_24[0x4]; // 0x24 (0x4) 
	struct FVector CurrentEmotePelvisOffset; // 0x28 (0x18)
	int PelvisBoneIndex; // 0x40 (0x4)
	int FootLeftBoneIndex; // 0x44 (0x4)
	int FootRightBoneIndex; // 0x48 (0x4)
	unsigned char padding_4c[0x4]; // 0x4c (0x4)
};

