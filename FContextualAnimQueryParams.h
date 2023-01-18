// ScriptStruct /Script/ContextualAnimation.ContextualAnimQueryParams
// Size: 0x80
struct FContextualAnimQueryParams
{
	struct TWeakObjectPtr<class AActor> Querier; // 0x0 (0x8)
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FTransform QueryTransform; // 0x10 (0x60)
	bool bComplexQuery; // 0x70 (0x1)
	bool bFindAnimStartTime; // 0x71 (0x1)
	unsigned char padding_72[0xe]; // 0x72 (0xe)
};

