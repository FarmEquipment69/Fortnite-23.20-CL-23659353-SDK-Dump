// Class /Script/Engine.MirrorDataTable
// Size: 0x1a0
class UMirrorDataTable : public UDataTable
{
	struct TArray<struct FMirrorFindReplaceExpression> MirrorFindReplaceExpressions; // 0xb0 (0x10)
	struct TEnumAsByte<EAxis> MirrorAxis; // 0xc0 (0x1)
	unsigned char unreflected_c1[0x7]; // 0xc1 (0x7) 
	class USkeleton* Skeleton; // 0xc8 (0x8)
	unsigned char padding_d0[0xd0]; // 0xd0 (0xd0)
};

