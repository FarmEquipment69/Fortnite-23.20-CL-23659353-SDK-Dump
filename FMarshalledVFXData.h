// ScriptStruct /Script/FortniteGame.MarshalledVFXData
// Size: 0xd0
struct FMarshalledVFXData
{
	struct FGameplayTagContainer ParameterGroups; // 0x0 (0x20)
	enum EFXType Type; // 0x20 (0x1)
	unsigned char unreflected_21[0x7]; // 0x21 (0x7) 
	struct TWeakObjectPtr<class UFXSystemAsset> Asset; // 0x28 (0x28)
	struct FName AttachAtBone; // 0x50 (0x4)
	unsigned char unreflected_54[0xc]; // 0x54 (0xc) 
	struct FTransform RelativeOffset; // 0x60 (0x60)
	struct FGameplayTag EffectIdTag; // 0xc0 (0x4)
	bool bAutoActivate; // 0xc4 (0x1)
	unsigned char padding_c5[0xb]; // 0xc5 (0xb)
};

